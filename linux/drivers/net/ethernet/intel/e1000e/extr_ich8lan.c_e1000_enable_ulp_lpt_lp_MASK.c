
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


typedef int u32 ;
typedef int u16 ;
struct TYPE_13__ {scalar_t__ ulp_state; } ;
struct TYPE_14__ {TYPE_6__ ich8lan; } ;
struct TYPE_11__ {int (* release ) (struct e1000_hw*) ;int (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_12__ {scalar_t__ type; int revision; TYPE_4__ ops; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_7__ dev_spec; TYPE_5__ phy; TYPE_3__* adapter; TYPE_1__ mac; } ;
typedef int s32 ;
struct TYPE_10__ {TYPE_2__* pdev; } ;
struct TYPE_9__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ VAR_34 ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;

s32 FUNC_8(struct e1000_hw *VAR_35, bool VAR_36)
{
 u32 VAR_37;
 s32 VAR_38 = 0;
 u16 VAR_39;
 u16 VAR_40 = 0;

 if ((VAR_35->mac.type < VAR_32) ||
     (VAR_35->adapter->pdev->device == VAR_6) ||
     (VAR_35->adapter->pdev->device == VAR_7) ||
     (VAR_35->adapter->pdev->device == VAR_4) ||
     (VAR_35->adapter->pdev->device == VAR_5) ||
     (VAR_35->dev_spec.ich8lan.ulp_state == VAR_34))
  return 0;

 if (FUNC_3(VAR_18) & VAR_13) {

  VAR_37 = FUNC_3(VAR_19);
  VAR_37 |= VAR_12 | VAR_11;
  FUNC_4(VAR_19, VAR_37);

  goto out;
 }

 if (!VAR_36) {
  int VAR_41 = 0;


  while (!(FUNC_3(VAR_16) & VAR_10)) {

   if (FUNC_3(VAR_30) & VAR_14)
    return -VAR_8;

   if (VAR_41++ == 100)
    break;

   FUNC_5(50);
  }
  FUNC_2("CABLE_DISCONNECTED %s set after %dmsec\n",
        (FUNC_3(VAR_16) &
         VAR_10) ? "" : "not", VAR_41 * 50);
 }

 VAR_38 = VAR_35->phy.ops.acquire(VAR_35);
 if (VAR_38)
  goto out;


 VAR_38 = FUNC_0(VAR_35, VAR_1, &VAR_39);
 if (VAR_38)
  goto release;
 VAR_39 |= VAR_2;
 FUNC_1(VAR_35, VAR_1, VAR_39);


 VAR_37 = FUNC_3(VAR_0);
 VAR_37 |= VAR_3;
 FUNC_4(VAR_0, VAR_37);




 if ((VAR_35->phy.type == VAR_33) && (VAR_35->phy.revision == 6)) {
  VAR_38 = FUNC_0(VAR_35, VAR_20,
             &VAR_40);
  if (VAR_38)
   goto release;

  VAR_39 = VAR_40;
  VAR_39 |= VAR_22 | VAR_21;

  VAR_38 = FUNC_1(VAR_35, VAR_20,
       VAR_39);

  if (VAR_38)
   goto release;
 }




 VAR_38 = FUNC_0(VAR_35, VAR_23, &VAR_39);
 if (VAR_38)
  goto release;
 VAR_39 |= (VAR_26 |
      VAR_24);
 if (VAR_36) {
  if (FUNC_3(VAR_31) & VAR_15)
   VAR_39 |= VAR_29;
  else
   VAR_39 &= ~VAR_29;

  VAR_39 |= VAR_28;
  VAR_39 &= ~VAR_25;
 } else {
  VAR_39 |= VAR_25;
  VAR_39 &= ~VAR_28;
  VAR_39 &= ~VAR_29;
 }
 FUNC_1(VAR_35, VAR_23, VAR_39);


 VAR_37 = FUNC_3(VAR_17);
 VAR_37 |= VAR_9;
 FUNC_4(VAR_17, VAR_37);


 VAR_39 |= VAR_27;
 FUNC_1(VAR_35, VAR_23, VAR_39);

 if ((VAR_35->phy.type == VAR_33) && (VAR_35->phy.revision == 6) &&
     VAR_36 && (FUNC_3(VAR_30) & VAR_14)) {
  VAR_38 = FUNC_1(VAR_35, VAR_20,
       VAR_40);
  if (VAR_38)
   goto release;
 }

release:
 VAR_35->phy.ops.release(VAR_35);
out:
 if (VAR_38)
  FUNC_2("Error in ULP enable flow: %d\n", VAR_38);
 else
  VAR_35->dev_spec.ich8lan.ulp_state = VAR_34;

 return VAR_38;
}
