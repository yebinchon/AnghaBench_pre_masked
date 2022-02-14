
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_9__ {scalar_t__ (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_12__ {int semaphore_delay; TYPE_3__ ops; } ;
struct TYPE_10__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* prot_autoc_write ) (struct ixgbe_hw*,int,int) ;int (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_11__ {int orig_autoc; TYPE_4__ ops; } ;
struct TYPE_7__ {int * reset; } ;
struct TYPE_8__ {scalar_t__ sfp_type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_6__ eeprom; TYPE_5__ mac; TYPE_2__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 int FUNC_3 (struct ixgbe_hw*,char*,int) ;
 int FUNC_4 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int,int*) ;
 int FUNC_9 (struct ixgbe_hw*,int ) ;
 int FUNC_10 (struct ixgbe_hw*,int,int) ;
 int FUNC_11 (struct ixgbe_hw*,int ) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static s32 FUNC_13(struct ixgbe_hw *VAR_6)
{
 s32 VAR_7;
 u16 VAR_8, VAR_9, VAR_10;

 if (VAR_6->phy.sfp_type != VAR_5) {
  FUNC_5(VAR_6);

  VAR_6->phy.ops.reset = ((void*)0);

  VAR_7 = FUNC_4(VAR_6, &VAR_8,
             &VAR_9);
  if (VAR_7)
   return VAR_7;


  VAR_7 = VAR_6->mac.ops.acquire_swfw_sync(VAR_6,
       VAR_4);
  if (VAR_7)
   return VAR_3;

  if (VAR_6->eeprom.ops.read(VAR_6, ++VAR_9, &VAR_10))
   goto setup_sfp_err;
  while (VAR_10 != 0xffff) {
   FUNC_1(VAR_6, VAR_1, VAR_10);
   FUNC_0(VAR_6);
   if (VAR_6->eeprom.ops.read(VAR_6, ++VAR_9, &VAR_10))
    goto setup_sfp_err;
  }


  VAR_6->mac.ops.release_swfw_sync(VAR_6, VAR_4);




  FUNC_12(VAR_6->eeprom.semaphore_delay * 1000,
        VAR_6->eeprom.semaphore_delay * 2000);


  VAR_7 = VAR_6->mac.ops.prot_autoc_write(VAR_6,
   VAR_6->mac.orig_autoc | VAR_0,
   0);

  if (VAR_7) {
   FUNC_2(VAR_6, " sfp module setup not complete\n");
   return VAR_2;
  }
 }

 return 0;

setup_sfp_err:

 VAR_6->mac.ops.release_swfw_sync(VAR_6, VAR_4);



 FUNC_12(VAR_6->eeprom.semaphore_delay * 1000,
       VAR_6->eeprom.semaphore_delay * 2000);
 FUNC_3(VAR_6, "eeprom read at offset %d failed\n", VAR_9);
 return VAR_2;
}
