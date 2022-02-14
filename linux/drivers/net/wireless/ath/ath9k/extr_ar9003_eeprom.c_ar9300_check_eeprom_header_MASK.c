
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_hw {int dummy; } ;
typedef int (* eeprom_read_op ) (struct ath_hw*,int,int *,int) ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct ath_hw *VAR_0, eeprom_read_op VAR_1,
           int VAR_2)
{
 u8 VAR_3[4];

 if (!VAR_1(VAR_0, VAR_2, VAR_3, 4))
  return 0;

 return FUNC_0(VAR_3);
}
