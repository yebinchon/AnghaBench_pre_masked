
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct e1000_nvm_info {int flash_bank_size; } ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (struct e1000_hw*,int,int*) ;
 int FUNC_1 (struct e1000_hw*,int,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_7, u32 *VAR_8)
{
 u32 VAR_9;
 struct e1000_nvm_info *VAR_10 = &VAR_7->nvm;
 u32 VAR_11 = VAR_10->flash_bank_size * sizeof(u16);
 u32 VAR_12 = VAR_4 * 2 + 1;
 u32 VAR_13 = 0;
 u8 VAR_14 = 0;
 s32 VAR_15;

 switch (VAR_7->mac.type) {
 case 128:
 case 129:
  VAR_11 = VAR_10->flash_bank_size;
  VAR_12 = VAR_4;


  *VAR_8 = 0;


  VAR_15 = FUNC_1(VAR_7, VAR_12,
        &VAR_13);
  if (VAR_15)
   return VAR_15;
  VAR_14 = (u8)((VAR_13 & 0xFF00) >> 8);
  if ((VAR_14 & VAR_5) ==
      VAR_3) {
   *VAR_8 = 0;
   return 0;
  }


  VAR_15 = FUNC_1(VAR_7, VAR_12 +
        VAR_11,
        &VAR_13);
  if (VAR_15)
   return VAR_15;
  VAR_14 = (u8)((VAR_13 & 0xFF00) >> 8);
  if ((VAR_14 & VAR_5) ==
      VAR_3) {
   *VAR_8 = 1;
   return 0;
  }

  FUNC_2("ERROR: No valid NVM bank present\n");
  return -VAR_2;
 case 131:
 case 130:
  VAR_9 = FUNC_3(VAR_6);
  if ((VAR_9 & VAR_1) ==
      VAR_1) {
   if (VAR_9 & VAR_0)
    *VAR_8 = 1;
   else
    *VAR_8 = 0;

   return 0;
  }
  FUNC_2("Unable to determine valid NVM bank via EEC - reading flash signature\n");

 default:

  *VAR_8 = 0;


  VAR_15 = FUNC_0(VAR_7, VAR_12,
       &VAR_14);
  if (VAR_15)
   return VAR_15;
  if ((VAR_14 & VAR_5) ==
      VAR_3) {
   *VAR_8 = 0;
   return 0;
  }


  VAR_15 = FUNC_0(VAR_7, VAR_12 +
       VAR_11,
       &VAR_14);
  if (VAR_15)
   return VAR_15;
  if ((VAR_14 & VAR_5) ==
      VAR_3) {
   *VAR_8 = 1;
   return 0;
  }

  FUNC_2("ERROR: No valid NVM bank present\n");
  return -VAR_2;
 }
}
