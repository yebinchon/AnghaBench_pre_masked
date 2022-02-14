
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int qsfp_shared_i2c_bus; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_4, u8 VAR_5,
         u8 VAR_6, u8 *VAR_7)
{
 u32 VAR_8;
 s32 VAR_9;
 s32 VAR_10 = 200;

 if (VAR_4->phy.qsfp_shared_i2c_bus == 1) {

  VAR_8 = FUNC_0(VAR_4, VAR_1);
  VAR_8 |= VAR_2;
  FUNC_2(VAR_4, VAR_1, VAR_8);
  FUNC_1(VAR_4);

  while (VAR_10) {
   VAR_8 = FUNC_0(VAR_4, VAR_1);
   if (VAR_8 & VAR_3)
    break;

   FUNC_5(5000, 10000);
   VAR_10--;
  }

  if (!VAR_10) {
   FUNC_3(VAR_4, "Driver can't access resource, acquiring I2C bus timeout.\n");
   VAR_9 = VAR_0;
   goto release_i2c_access;
  }
 }

 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);

release_i2c_access:
 if (VAR_4->phy.qsfp_shared_i2c_bus == 1) {

  VAR_8 = FUNC_0(VAR_4, VAR_1);
  VAR_8 &= ~VAR_2;
  FUNC_2(VAR_4, VAR_1, VAR_8);
  FUNC_1(VAR_4);
 }

 return VAR_9;
}
