
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int param1; int cmd; } ;
union octnet_cmd {TYPE_1__ s; scalar_t__ u64; } ;
typedef int u64 ;
struct octeon_soft_command {int caller_is_done; scalar_t__ sc_status; int iq_no; int complete; scalar_t__ virtdptr; } ;
struct octeon_device {int dummy; } ;
struct net_device {int mtu; } ;
struct TYPE_8__ {TYPE_3__* txpciq; } ;
struct lio {int mtu; int netdev; TYPE_4__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_6__ {int q_no; } ;
struct TYPE_7__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lio*,int ,int ,char*) ;
 scalar_t__ FUNC_4 (struct octeon_device*,int,int,int ) ;
 int FUNC_5 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_6 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_8 (int *,int) ;
 int VAR_8 ;
 int FUNC_9 (struct octeon_device*,struct octeon_soft_command*,int ) ;

int FUNC_10(struct net_device *VAR_9, int VAR_10)
{
 struct lio *VAR_11 = FUNC_0(VAR_9);
 struct octeon_device *VAR_12 = VAR_11->oct_dev;
 struct octeon_soft_command *VAR_13;
 union octnet_cmd *VAR_14;
 int VAR_15 = 0;

 VAR_13 = (struct octeon_soft_command *)
  FUNC_4(VAR_12, VAR_5, 16, 0);
 if (!VAR_13) {
  FUNC_3(VAR_11, VAR_8, VAR_11->netdev,
      "Failed to allocate soft command\n");
  return -VAR_1;
 }

 VAR_14 = (union octnet_cmd *)VAR_13->virtdptr;

 FUNC_2(&VAR_13->complete);
 VAR_13->sc_status = VAR_3;

 VAR_14->u64 = 0;
 VAR_14->s.cmd = VAR_4;
 VAR_14->s.param1 = VAR_10;

 FUNC_8((u64 *)VAR_14, (VAR_5 >> 3));

 VAR_13->iq_no = VAR_11->linfo.txpciq[0].s.q_no;

 FUNC_6(VAR_12, VAR_13, VAR_6,
        VAR_7, 0, 0, 0);

 VAR_15 = FUNC_7(VAR_12, VAR_13);
 if (VAR_15 == VAR_2) {
  FUNC_3(VAR_11, VAR_8, VAR_11->netdev, "Failed to change MTU\n");
  FUNC_5(VAR_12, VAR_13);
  return -VAR_0;
 }



 VAR_15 = FUNC_9(VAR_12, VAR_13, 0);
 if (VAR_15)
  return VAR_15;

 if (VAR_13->sc_status) {
  FUNC_1(VAR_13->caller_is_done, 1);
  return -VAR_0;
 }

 VAR_9->mtu = VAR_10;
 VAR_11->mtu = VAR_10;

 FUNC_1(VAR_13->caller_is_done, 1);
 return 0;
}
