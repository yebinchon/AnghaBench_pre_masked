
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rave_sp_eeprom {int mutex; } ;
typedef enum rave_sp_eeprom_access_type { ____Placeholder_rave_sp_eeprom_access_type } rave_sp_eeprom_access_type ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rave_sp_eeprom*,int,unsigned int,int *,unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct rave_sp_eeprom *VAR_1,
     enum rave_sp_eeprom_access_type VAR_2,
     unsigned int VAR_3, u8 *VAR_4,
     unsigned int VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 FUNC_1(&VAR_1->mutex);

 VAR_8 = VAR_3 % VAR_0;
 VAR_6 = VAR_5;

 do {






  if (FUNC_4(VAR_8)) {
   VAR_7 = VAR_0 - VAR_8;






   VAR_8 = 0;
  } else {
   VAR_7 = VAR_0;
  }




  VAR_7 = FUNC_0(VAR_7, VAR_6);
  VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_7);
  if (VAR_9)
   goto out;

  VAR_6 -= VAR_7;
  VAR_3 += VAR_7;
  VAR_4 += VAR_7;
 } while (VAR_6);
out:
 FUNC_2(&VAR_1->mutex);
 return VAR_9;
}
