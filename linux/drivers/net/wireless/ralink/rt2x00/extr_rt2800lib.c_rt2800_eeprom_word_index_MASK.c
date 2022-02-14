
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {TYPE_1__* hw; } ;
typedef enum rt2800_eeprom_word { ____Placeholder_rt2800_eeprom_word } rt2800_eeprom_word ;
struct TYPE_2__ {int wiphy; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,char*,int ,int const) ;
 unsigned int* VAR_4 ;
 unsigned int* VAR_5 ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct rt2x00_dev *VAR_6,
          const enum rt2800_eeprom_word VAR_7)
{
 const unsigned int *VAR_8;
 unsigned int VAR_9;

 if (FUNC_0(VAR_7 >= VAR_1,
        "%s: invalid EEPROM word %d\n",
        FUNC_2(VAR_6->hw->wiphy), VAR_7))
  return 0;

 if (FUNC_1(VAR_6, VAR_2) ||
     FUNC_1(VAR_6, VAR_3))
  VAR_8 = VAR_5;
 else
  VAR_8 = VAR_4;

 VAR_9 = VAR_8[VAR_7];







 FUNC_0(VAR_7 != VAR_0 && VAR_9 == 0,
    "%s: invalid access of EEPROM word %d\n",
    FUNC_2(VAR_6->hw->wiphy), VAR_7);

 return VAR_9;
}
