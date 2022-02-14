
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rave_sp_eeprom_page {int * data; } ;
struct rave_sp_eeprom {int dummy; } ;
typedef enum rave_sp_eeprom_access_type { ____Placeholder_rave_sp_eeprom_access_type } rave_sp_eeprom_access_type ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (struct rave_sp_eeprom*,int,unsigned int const,struct rave_sp_eeprom_page*) ;

__attribute__((used)) static int
FUNC_3(struct rave_sp_eeprom *VAR_4,
      enum rave_sp_eeprom_access_type VAR_5,
      unsigned int VAR_6, u8 *VAR_7,
      size_t VAR_8)
{
 const unsigned int VAR_9 = VAR_6 % VAR_1;
 const unsigned int VAR_10 = VAR_6 / VAR_1;
 struct rave_sp_eeprom_page VAR_11;
 int VAR_12;







 if (FUNC_0(VAR_8 > sizeof(VAR_11.data) - VAR_9))
  return -VAR_0;

 if (VAR_5 == VAR_3) {




  if (VAR_8 < VAR_1) {
   VAR_12 = FUNC_2(VAR_4, VAR_2,
      VAR_10, &VAR_11);
   if (VAR_12)
    return VAR_12;
  }

  FUNC_1(&VAR_11.data[VAR_9], VAR_7, VAR_8);
 }

 VAR_12 = FUNC_2(VAR_4, VAR_5, VAR_10, &VAR_11);
 if (VAR_12)
  return VAR_12;





 if (VAR_5 == VAR_2)
  FUNC_1(VAR_7, &VAR_11.data[VAR_9], VAR_8);

 return 0;
}
