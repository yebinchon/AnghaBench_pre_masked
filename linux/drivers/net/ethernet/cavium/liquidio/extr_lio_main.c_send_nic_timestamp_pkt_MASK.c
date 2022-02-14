
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct octnic_data_pkt {int reqtype; int q_no; int cmd; } ;
struct octnet_buf_free_info {int skb; struct octeon_soft_command* sc; struct lio* lio; } ;
struct TYPE_6__ {int ih2; } ;
struct TYPE_5__ {int ih3; } ;
struct TYPE_8__ {TYPE_2__ cmd2; TYPE_1__ cmd3; } ;
struct octeon_soft_command {TYPE_4__ cmd; int iq_no; int callback_arg; int callback; } ;
struct octeon_instr_ih3 {scalar_t__ dlengsz; } ;
struct octeon_instr_ih2 {scalar_t__ dlengsz; } ;
struct octeon_device {TYPE_3__* pci_dev; } ;
struct oct_timestamp_resp {int dummy; } ;
struct lio {int netdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct octeon_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (struct lio*,int ,int ,char*) ;
 struct octeon_soft_command* FUNC_3 (struct octeon_device*,int *,int) ;
 int FUNC_4 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_5 (struct octeon_device*,int ,int,TYPE_4__*,struct octeon_soft_command*,scalar_t__,int ) ;
 int VAR_6 ;

__attribute__((used)) static inline int FUNC_6(struct octeon_device *VAR_7,
      struct octnic_data_pkt *VAR_8,
      struct octnet_buf_free_info *VAR_9,
      int VAR_10)
{
 int VAR_11;
 struct octeon_soft_command *VAR_12;
 struct lio *VAR_13;
 int VAR_14;
 u32 VAR_15;

 VAR_13 = VAR_9->lio;

 VAR_12 = FUNC_3(VAR_7, &VAR_8->cmd,
         sizeof(struct oct_timestamp_resp));
 VAR_9->sc = VAR_12;

 if (!VAR_12) {
  FUNC_1(&VAR_7->pci_dev->dev, "No memory for timestamped data packet\n");
  return VAR_0;
 }

 if (VAR_8->reqtype == VAR_1)
  VAR_8->reqtype = VAR_3;
 else if (VAR_8->reqtype == VAR_2)
  VAR_8->reqtype = VAR_4;

 VAR_12->callback = VAR_5;
 VAR_12->callback_arg = VAR_9->skb;
 VAR_12->iq_no = VAR_8->q_no;

 if (FUNC_0(VAR_7))
  VAR_15 = (u32)((struct octeon_instr_ih3 *)
       (&VAR_12->cmd.cmd3.ih3))->dlengsz;
 else
  VAR_15 = (u32)((struct octeon_instr_ih2 *)
       (&VAR_12->cmd.cmd2.ih2))->dlengsz;

 VAR_14 = !VAR_10;

 VAR_11 = FUNC_5(VAR_7, VAR_12->iq_no, VAR_14, &VAR_12->cmd,
         VAR_12, VAR_15, VAR_8->reqtype);

 if (VAR_11 == VAR_0) {
  FUNC_1(&VAR_7->pci_dev->dev, "timestamp data packet failed status: %x\n",
   VAR_11);
  FUNC_4(VAR_7, VAR_12);
 } else {
  FUNC_2(VAR_13, VAR_6, VAR_13->netdev, "Queued timestamp packet\n");
 }

 return VAR_11;
}
