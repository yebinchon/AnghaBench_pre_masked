
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int* xatten1Margin; } ;
struct TYPE_7__ {int* xatten1MarginLow; int* xatten1MarginHigh; } ;
struct TYPE_6__ {int* xatten1Margin; } ;
struct ar9300_eeprom {TYPE_4__ modalHeader5G; TYPE_3__ base_ext2; TYPE_2__ modalHeader2G; } ;
struct TYPE_5__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct ath9k_channel {scalar_t__ channel; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 int FUNC_1 (int ,int*,int*,int) ;

__attribute__((used)) static u16 FUNC_2(struct ath_hw *VAR_0, int VAR_1,
         struct ath9k_channel *VAR_2)
{
 int VAR_3[3], VAR_4[3];
 u16 VAR_5;
 struct ar9300_eeprom *VAR_6 = &VAR_0->eeprom.ar9300_eep;

 if (VAR_1 >= 0 && VAR_1 < 3) {
  if (FUNC_0(VAR_2))
   return VAR_6->modalHeader2G.xatten1Margin[VAR_1];
  else if (VAR_6->base_ext2.xatten1MarginLow[VAR_1] != 0) {
   VAR_4[0] = VAR_6->base_ext2.xatten1MarginLow[VAR_1];
   VAR_3[0] = 5180;
   VAR_4[1] = VAR_6->modalHeader5G.xatten1Margin[VAR_1];
   VAR_3[1] = 5500;
   VAR_4[2] = VAR_6->base_ext2.xatten1MarginHigh[VAR_1];
   VAR_3[2] = 5785;
   VAR_5 = FUNC_1((s32) VAR_2->channel,
           VAR_3, VAR_4, 3);
   return VAR_5;
  } else
   return VAR_6->modalHeader5G.xatten1Margin[VAR_1];
 }

 return 0;
}
