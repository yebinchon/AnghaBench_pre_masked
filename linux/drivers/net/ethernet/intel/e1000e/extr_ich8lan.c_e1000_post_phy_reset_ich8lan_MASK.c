
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int) ;


 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 int FUNC_6 (struct e1000_hw*,int ,int *) ;
 int FUNC_7 (struct e1000_hw*,int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_5)
{
 s32 VAR_6 = 0;
 u16 VAR_7;

 if (VAR_5->phy.ops.check_reset_block(VAR_5))
  return 0;


 FUNC_12(10000, 11000);


 switch (VAR_5->mac.type) {
 case 128:
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6)
   return VAR_6;
  break;
 case 129:
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6)
   return VAR_6;
  break;
 default:
  break;
 }


 if (VAR_5->mac.type >= 128) {
  FUNC_6(VAR_5, VAR_0, &VAR_7);
  VAR_7 &= ~VAR_1;
  FUNC_7(VAR_5, VAR_0, VAR_7);
 }


 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_3(VAR_5, 1);

 if (VAR_5->mac.type == 129) {

  if (!(FUNC_8(VAR_3) & VAR_2)) {
   FUNC_12(10000, 11000);
   FUNC_0(VAR_5, 0);
  }


  VAR_6 = VAR_5->phy.ops.acquire(VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_5(VAR_5,
           VAR_4,
           0x1387);
  VAR_5->phy.ops.release(VAR_5);
 }

 return VAR_6;
}
