
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int param1; int cmd; } ;
union octnet_cmd {TYPE_1__ s; scalar_t__ u64; } ;
typedef int u64 ;
struct octeon_soft_command {int caller_is_done; int sc_status; int complete; int iq_no; scalar_t__ virtdptr; } ;
struct octeon_device {TYPE_5__* props; } ;
struct TYPE_9__ {TYPE_3__* txpciq; } ;
struct lio {size_t ifidx; int netdev; TYPE_4__ linfo; scalar_t__ oct_dev; } ;
struct TYPE_10__ {int rx_on; } ;
struct TYPE_7__ {int q_no; } ;
struct TYPE_8__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lio*,int ,int ,char*) ;
 scalar_t__ FUNC_3 (struct octeon_device*,int,int,int ) ;
 int FUNC_4 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_5 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_7 (int *,int) ;
 int VAR_6 ;
 int FUNC_8 (struct octeon_device*,struct octeon_soft_command*,int ) ;

__attribute__((used)) static void FUNC_9(struct lio *VAR_7, int VAR_8)
{
 struct octeon_soft_command *VAR_9;
 union octnet_cmd *VAR_10;
 struct octeon_device *VAR_11 = (struct octeon_device *)VAR_7->oct_dev;
 int VAR_12;

 if (VAR_11->props[VAR_7->ifidx].rx_on == VAR_8)
  return;

 VAR_9 = (struct octeon_soft_command *)
  FUNC_3(VAR_11, VAR_3,
       16, 0);
 if (!VAR_9) {
  FUNC_2(VAR_7, VAR_6, VAR_7->netdev,
      "Failed to allocate octeon_soft_command\n");
  return;
 }

 VAR_10 = (union octnet_cmd *)VAR_9->virtdptr;

 VAR_10->u64 = 0;
 VAR_10->s.cmd = VAR_2;
 VAR_10->s.param1 = VAR_8;

 FUNC_7((u64 *)VAR_10, (VAR_3 >> 3));

 VAR_9->iq_no = VAR_7->linfo.txpciq[0].s.q_no;

 FUNC_5(VAR_11, VAR_9, VAR_4,
        VAR_5, 0, 0, 0);

 FUNC_1(&VAR_9->complete);
 VAR_9->sc_status = VAR_1;

 VAR_12 = FUNC_6(VAR_11, VAR_9);
 if (VAR_12 == VAR_0) {
  FUNC_2(VAR_7, VAR_6, VAR_7->netdev, "Failed to send RX Control message\n");
  FUNC_4(VAR_11, VAR_9);
  return;
 } else {



  VAR_12 = FUNC_8(VAR_11, VAR_9, 0);
  if (VAR_12)
   return;

  VAR_11->props[VAR_7->ifidx].rx_on = VAR_8;
  FUNC_0(VAR_9->caller_is_done, 1);
 }
}
