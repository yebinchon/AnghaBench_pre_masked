
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int type; } ;
struct TYPE_8__ {scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_6__ {int ulp_state; } ;
struct TYPE_7__ {TYPE_1__ ich8lan; } ;
struct e1000_hw {TYPE_5__ mac; TYPE_4__ phy; TYPE_2__ dev_spec; struct e1000_adapter* adapter; } ;
struct e1000_adapter {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 int FUNC_1 (struct e1000_hw*,int) ;





 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct e1000_hw*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;
 scalar_t__ FUNC_13 (struct e1000_hw*) ;
 scalar_t__ FUNC_14 (struct e1000_hw*) ;
 int FUNC_15 (int,int) ;

__attribute__((used)) static s32 FUNC_16(struct e1000_hw *VAR_6)
{
 struct e1000_adapter *VAR_7 = VAR_6->adapter;
 u32 VAR_8, VAR_9 = FUNC_7(VAR_4);
 s32 VAR_10;




 FUNC_1(VAR_6, 1);




 VAR_6->dev_spec.ich8lan.ulp_state = VAR_5;
 FUNC_0(VAR_6, 1);

 VAR_10 = VAR_6->phy.ops.acquire(VAR_6);
 if (VAR_10) {
  FUNC_5("Failed to initialize PHY flow\n");
  goto out;
 }





 switch (VAR_6->mac.type) {
 case 130:
 case 129:
 case 131:
  if (FUNC_2(VAR_6))
   break;




  VAR_8 = FUNC_7(VAR_0);
  VAR_8 |= VAR_1;
  FUNC_8(VAR_0, VAR_8);





  FUNC_9(50);


 case 132:
  if (FUNC_2(VAR_6))
   break;


 case 128:
  if ((VAR_6->mac.type == 128) &&
      (VAR_9 & VAR_3))
   break;

  if (VAR_6->phy.ops.check_reset_block(VAR_6)) {
   FUNC_5("Required LANPHYPC toggle blocked by ME\n");
   VAR_10 = -VAR_2;
   break;
  }


  FUNC_3(VAR_6);
  if (VAR_6->mac.type >= 130) {
   if (FUNC_2(VAR_6))
    break;




   VAR_8 = FUNC_7(VAR_0);
   VAR_8 &= ~VAR_1;
   FUNC_8(VAR_0, VAR_8);

   if (FUNC_2(VAR_6))
    break;

   VAR_10 = -VAR_2;
  }
  break;
 default:
  break;
 }

 VAR_6->phy.ops.release(VAR_6);
 if (!VAR_10) {


  if (VAR_6->phy.ops.check_reset_block(VAR_6)) {
   FUNC_6("Reset blocked by ME\n");
   goto out;
  }






  VAR_10 = FUNC_4(VAR_6);
  if (VAR_10)
   goto out;







  VAR_10 = VAR_6->phy.ops.check_reset_block(VAR_6);
  if (VAR_10)
   FUNC_6("ME blocked access to PHY after reset\n");
 }

out:

 if ((VAR_6->mac.type == 132) &&
     !(VAR_9 & VAR_3)) {
  FUNC_15(10000, 11000);
  FUNC_1(VAR_6, 0);
 }

 return VAR_10;
}
