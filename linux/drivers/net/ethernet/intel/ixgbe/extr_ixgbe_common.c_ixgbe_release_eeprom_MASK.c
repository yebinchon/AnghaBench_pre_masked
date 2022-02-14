
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int semaphore_delay; } ;
struct TYPE_6__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_5__ {TYPE_3__ ops; } ;
struct ixgbe_hw {TYPE_1__ eeprom; TYPE_2__ mac; } ;


 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_hw *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4, FUNC_0(VAR_4));

 VAR_5 |= VAR_0;
 VAR_5 &= ~VAR_2;

 FUNC_3(VAR_4, FUNC_0(VAR_4), VAR_5);
 FUNC_2(VAR_4);

 FUNC_5(1);


 VAR_5 &= ~VAR_1;
 FUNC_3(VAR_4, FUNC_0(VAR_4), VAR_5);

 VAR_4->mac.ops.release_swfw_sync(VAR_4, VAR_3);





 FUNC_6(VAR_4->eeprom.semaphore_delay * 1000,
       VAR_4->eeprom.semaphore_delay * 2000);
}
