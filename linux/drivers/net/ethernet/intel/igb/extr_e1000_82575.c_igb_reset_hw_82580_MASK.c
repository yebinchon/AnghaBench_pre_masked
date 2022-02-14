
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int (* release_swfw_sync ) (struct e1000_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct e1000_hw*,int ) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__ ops; } ;
struct TYPE_5__ {int global_device_reset; } ;
struct TYPE_6__ {TYPE_1__ _82575; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_2__ dev_spec; } ;
typedef scalar_t__ s32 ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ) ;
 int FUNC_7 (struct e1000_hw*,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 () ;

__attribute__((used)) static s32 FUNC_11(struct e1000_hw *VAR_12)
{
 s32 VAR_13 = 0;

 u16 VAR_14 = VAR_8;
 u32 VAR_15;
 bool VAR_16 = VAR_12->dev_spec._82575.global_device_reset;

 VAR_12->dev_spec._82575.global_device_reset = 0;




 if (VAR_12->mac.type == VAR_11)
  VAR_16 = 0;


 VAR_15 = FUNC_5(VAR_0);




 VAR_13 = FUNC_2(VAR_12);
 if (VAR_13)
  FUNC_0("PCI-E Master disable polling has failed.\n");

 FUNC_0("Masking off all interrupts\n");
 FUNC_9(VAR_4, 0xffffffff);
 FUNC_9(VAR_5, 0);
 FUNC_9(VAR_9, VAR_10);
 FUNC_10();

 FUNC_8(10000, 11000);


 if (VAR_16 &&
  VAR_12->mac.ops.acquire_swfw_sync(VAR_12, VAR_14))
   VAR_16 = 0;

 if (VAR_16 &&
  !(FUNC_5(VAR_6) & VAR_7))
  VAR_15 |= VAR_1;
 else
  VAR_15 |= VAR_2;

 FUNC_9(VAR_0, VAR_15);
 FUNC_10();


 if (VAR_16)
  FUNC_8(5000, 6000);

 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13) {




  FUNC_0("Auto Read Done did not complete\n");
 }


 FUNC_9(VAR_6, VAR_7);


 FUNC_9(VAR_4, 0xffffffff);
 FUNC_5(VAR_3);

 VAR_13 = FUNC_4(VAR_12);
 if (VAR_13)
  FUNC_0("Could not reset MDICNFG based on EEPROM\n");


 VAR_13 = FUNC_1(VAR_12);


 if (VAR_16)
  VAR_12->mac.ops.release_swfw_sync(VAR_12, VAR_14);

 return VAR_13;
}
