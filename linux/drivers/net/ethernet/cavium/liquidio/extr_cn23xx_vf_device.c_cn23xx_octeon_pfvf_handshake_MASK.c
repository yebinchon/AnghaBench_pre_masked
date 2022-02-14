
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_8__ {int resp_needed; int len; int cmd; int type; } ;
struct TYPE_9__ {TYPE_1__ s; scalar_t__ u64; } ;
struct octeon_mbox_cmd {int * fn_arg; scalar_t__ fn; scalar_t__ recv_status; scalar_t__ recv_len; scalar_t__ q_no; scalar_t__* data; TYPE_2__ msg; } ;
struct TYPE_14__ {int pkind; } ;
struct octeon_device {size_t num_iqs; TYPE_7__ pfvf_hsword; TYPE_6__* pci_dev; TYPE_5__** instr_queue; } ;
struct lio_version {int micro; int minor; void* major; } ;
typedef scalar_t__ octeon_mbox_callback_t ;
typedef int atomic_t ;
struct TYPE_13__ {int dev; } ;
struct TYPE_10__ {int pkind; } ;
struct TYPE_11__ {TYPE_3__ s; } ;
struct TYPE_12__ {TYPE_4__ txpciq; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct octeon_device*,struct octeon_mbox_cmd*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;

int FUNC_6(struct octeon_device *VAR_6)
{
 struct octeon_mbox_cmd VAR_7;
 u32 VAR_8, VAR_9 = 0;
 atomic_t VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;


 FUNC_2(&VAR_6->pci_dev->dev, "requesting info from pf\n");

 VAR_7.msg.u64 = 0;
 VAR_7.msg.s.type = VAR_3;
 VAR_7.msg.s.resp_needed = 1;
 VAR_7.msg.s.cmd = VAR_4;
 VAR_7.msg.s.len = 2;
 VAR_7.data[0] = 0;
 ((struct lio_version *)&VAR_7.data[0])->major =
      VAR_0;
 ((struct lio_version *)&VAR_7.data[0])->minor =
      VAR_2;
 ((struct lio_version *)&VAR_7.data[0])->micro =
      VAR_1;
 VAR_7.q_no = 0;
 VAR_7.recv_len = 0;
 VAR_7.recv_status = 0;
 VAR_7.fn = (octeon_mbox_callback_t)VAR_5;
 VAR_7.fn_arg = &VAR_10;

 FUNC_4(VAR_6, &VAR_7);

 FUNC_1(&VAR_10, 0);

 do {
  FUNC_5(1);
 } while ((!FUNC_0(&VAR_10)) && (VAR_9++ < 100000));

 VAR_13 = FUNC_0(&VAR_10);
 if (!VAR_13) {
  FUNC_3(&VAR_6->pci_dev->dev, "octeon_pfvf_handshake timeout\n");
  return 1;
 }

 for (VAR_8 = 0 ; VAR_8 < VAR_6->num_iqs ; VAR_8++)
  VAR_6->instr_queue[VAR_8]->txpciq.s.pkind = VAR_6->pfvf_hsword.pkind;

 VAR_12 = VAR_0;
 VAR_11 = VAR_13 >> 16;
 if (VAR_11 != VAR_12) {
  FUNC_3(&VAR_6->pci_dev->dev,
   "VF Liquidio driver (major version %d) is not compatible with Liquidio PF driver (major version %d)\n",
   VAR_12, VAR_11);
  return 1;
 }

 FUNC_2(&VAR_6->pci_dev->dev,
  "VF Liquidio driver (major version %d), Liquidio PF driver (major version %d)\n",
  VAR_12, VAR_11);

 FUNC_2(&VAR_6->pci_dev->dev, "got data from pf pkind is %d\n",
  VAR_6->pfvf_hsword.pkind);

 return 0;
}
