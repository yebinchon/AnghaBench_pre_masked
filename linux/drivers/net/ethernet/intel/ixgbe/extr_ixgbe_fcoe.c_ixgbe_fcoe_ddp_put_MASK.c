
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct net_device {size_t fcoe_ddp_xid; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_fcoe_ddp {int len; int * pool; int udp; int udl; int sgc; scalar_t__ sgl; int err; } ;
struct ixgbe_fcoe {int lock; struct ixgbe_fcoe_ddp* ddp; } ;
struct ixgbe_adapter {TYPE_2__* pdev; struct ixgbe_hw hw; struct ixgbe_fcoe fcoe; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int,size_t) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ,size_t) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,scalar_t__,int ,int ) ;
 int FUNC_6 (struct ixgbe_fcoe_ddp*) ;
 scalar_t__ VAR_9 ;
 struct ixgbe_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int) ;

int FUNC_11(struct net_device *VAR_10, u16 VAR_11)
{
 int VAR_12;
 struct ixgbe_fcoe *VAR_13;
 struct ixgbe_adapter *VAR_14;
 struct ixgbe_fcoe_ddp *VAR_15;
 struct ixgbe_hw *VAR_16;
 u32 VAR_17;

 if (!VAR_10)
  return 0;

 if (VAR_11 >= VAR_10->fcoe_ddp_xid)
  return 0;

 VAR_14 = FUNC_7(VAR_10);
 VAR_13 = &VAR_14->fcoe;
 VAR_15 = &VAR_13->ddp[VAR_11];
 if (!VAR_15->udl)
  return 0;

 VAR_16 = &VAR_14->hw;
 VAR_12 = VAR_15->len;

 if (!VAR_15->err)
  goto skip_ddpinv;

 if (VAR_16->mac.type == VAR_9) {


  FUNC_3(VAR_16, FUNC_1(0, VAR_11), 0);
  FUNC_3(VAR_16, FUNC_1(3, VAR_11),
    (VAR_11 | VAR_8));


  FUNC_3(VAR_16, FUNC_0(2, VAR_11), 0);


  FUNC_3(VAR_16, FUNC_0(3, VAR_11),
    (VAR_11 | VAR_5));


  FUNC_3(VAR_16, FUNC_0(3, VAR_11),
    (VAR_11 | VAR_4));
  VAR_17 = FUNC_2(VAR_16, FUNC_0(2, VAR_11));
 } else {

  FUNC_8(&VAR_13->lock);
  FUNC_3(VAR_16, VAR_6, 0);
  FUNC_3(VAR_16, VAR_7,
    (VAR_11 | VAR_8));
  FUNC_3(VAR_16, VAR_1, 0);
  FUNC_3(VAR_16, VAR_3,
    (VAR_11 | VAR_5));


  FUNC_3(VAR_16, VAR_3,
    (VAR_11 | VAR_4));
  VAR_17 = FUNC_2(VAR_16, VAR_1);
  FUNC_9(&VAR_13->lock);
  }

 if (VAR_17 & VAR_2)
  FUNC_10(100, 150);

skip_ddpinv:
 if (VAR_15->sgl)
  FUNC_5(&VAR_14->pdev->dev, VAR_15->sgl, VAR_15->sgc,
        VAR_0);
 if (VAR_15->pool) {
  FUNC_4(VAR_15->pool, VAR_15->udl, VAR_15->udp);
  VAR_15->pool = ((void*)0);
 }

 FUNC_6(VAR_15);

 return VAR_12;
}
