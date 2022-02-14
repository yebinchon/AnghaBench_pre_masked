
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct e1000_nvm_info {int flash_base_addr; int flash_bank_size; size_t word_size; int type; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct e1000_dev_spec_ich8lan {TYPE_3__* shadow_ram; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {scalar_t__ flash_address; scalar_t__ hw_addr; TYPE_2__ mac; TYPE_1__ dev_spec; struct e1000_nvm_info nvm; } ;
typedef int s32 ;
struct TYPE_6__ {int modified; int value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_10)
{
 struct e1000_nvm_info *VAR_11 = &VAR_10->nvm;
 struct e1000_dev_spec_ich8lan *VAR_12 = &VAR_10->dev_spec.ich8lan;
 u32 VAR_13, VAR_14, VAR_15;
 u16 VAR_16;
 u32 VAR_17;

 VAR_11->type = VAR_8;

 if (VAR_10->mac.type >= VAR_9) {






  VAR_11->flash_base_addr = 0;
  VAR_17 = (((FUNC_1(VAR_7) >> 1) & 0x1F) + 1)
      * VAR_6;
  VAR_11->flash_bank_size = VAR_17 / 2;

  VAR_11->flash_bank_size /= sizeof(u16);

  VAR_10->flash_address = VAR_10->hw_addr + VAR_1;
 } else {

  if (!VAR_10->flash_address) {
   FUNC_0("ERROR: Flash registers not mapped\n");
   return -VAR_0;
  }

  VAR_13 = FUNC_2(VAR_5);





  VAR_14 = VAR_13 & VAR_3;
  VAR_15 = ((VAR_13 >> 16) & VAR_3) + 1;


  VAR_11->flash_base_addr = VAR_14
      << VAR_4;




  VAR_11->flash_bank_size = ((VAR_15 - VAR_14)
     << VAR_4);
  VAR_11->flash_bank_size /= 2;

  VAR_11->flash_bank_size /= sizeof(u16);
 }

 VAR_11->word_size = VAR_2;


 for (VAR_16 = 0; VAR_16 < VAR_11->word_size; VAR_16++) {
  VAR_12->shadow_ram[VAR_16].modified = 0;
  VAR_12->shadow_ram[VAR_16].value = 0xFFFF;
 }

 return 0;
}
