
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {TYPE_4__ ops; int type; } ;
struct TYPE_7__ {int type; } ;
struct e1000_hw {struct e1000_phy_info phy; TYPE_3__ mac; TYPE_2__* adapter; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;






 int VAR_17 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_18)
{
 struct e1000_phy_info *VAR_19 = &VAR_18->phy;
 u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 s32 VAR_25 = 0;
 u16 VAR_26, VAR_27, VAR_28, VAR_29 = 0;







 switch (VAR_18->mac.type) {
 case 133:
  if (VAR_19->type != VAR_17)
   return VAR_25;

  if ((VAR_18->adapter->pdev->device == VAR_0) ||
      (VAR_18->adapter->pdev->device == VAR_1)) {
   VAR_24 = VAR_8;
   break;
  }

 case 128:
 case 132:
 case 130:
 case 129:
 case 131:
  VAR_24 = VAR_9;
  break;
 default:
  return VAR_25;
 }

 VAR_25 = VAR_18->phy.ops.acquire(VAR_18);
 if (VAR_25)
  return VAR_25;

 VAR_21 = FUNC_4(VAR_12);
 if (!(VAR_21 & VAR_24))
  goto release;




 VAR_21 = FUNC_4(VAR_10);
 if ((VAR_18->mac.type < 132) &&
     (VAR_21 & VAR_4))
  goto release;

 VAR_22 = FUNC_4(VAR_11);
 VAR_22 &= VAR_6;
 VAR_22 >>= VAR_7;
 if (!VAR_22)
  goto release;

 VAR_23 = VAR_21 & VAR_2;
 VAR_23 >>= VAR_3;

 if (((VAR_18->mac.type == 128) &&
      !(VAR_21 & VAR_5)) ||
     (VAR_18->mac.type > 128)) {





  VAR_25 = FUNC_2(VAR_18);
  if (VAR_25)
   goto release;

  VAR_21 = FUNC_4(VAR_15);
  VAR_25 = FUNC_1(VAR_18, VAR_13,
       (u16)VAR_21);
  if (VAR_25)
   goto release;
 }




 VAR_26 = (u16)(VAR_23 << 1);

 for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++) {
  VAR_25 = FUNC_0(VAR_18, (VAR_26 + VAR_20 * 2), 1, &VAR_27);
  if (VAR_25)
   goto release;

  VAR_25 = FUNC_0(VAR_18, (VAR_26 + VAR_20 * 2 + 1),
      1, &VAR_28);
  if (VAR_25)
   goto release;


  if (VAR_28 == VAR_14) {
   VAR_29 = VAR_27;
   continue;
  }

  VAR_28 &= VAR_16;
  VAR_28 |= VAR_29;

  VAR_25 = FUNC_3(VAR_18, (u32)VAR_28, VAR_27);
  if (VAR_25)
   goto release;
 }

release:
 VAR_18->phy.ops.release(VAR_18);
 return VAR_25;
}
