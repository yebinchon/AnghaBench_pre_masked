
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rave_sp_eeprom_page {int type; int success; int data; } ;
struct rave_sp_eeprom {unsigned int const header_size; int address; int sp; } ;
typedef enum rave_sp_eeprom_access_type { ____Placeholder_rave_sp_eeprom_access_type } rave_sp_eeprom_access_type ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,int ,unsigned int const) ;
 int FUNC_2 (int ,int*,unsigned int const,struct rave_sp_eeprom_page*,unsigned int const) ;

__attribute__((used)) static int FUNC_3(struct rave_sp_eeprom *VAR_5,
        enum rave_sp_eeprom_access_type VAR_6,
        u16 VAR_7,
        struct rave_sp_eeprom_page *VAR_8)
{
 const bool VAR_9 = VAR_6 == VAR_4;
 const unsigned int VAR_10 = VAR_9 ? sizeof(VAR_8->data) : 0;
 const unsigned int VAR_11 = VAR_5->header_size + VAR_10;
 const unsigned int VAR_12 =
  VAR_9 ? sizeof(*VAR_8) - sizeof(VAR_8->data) : sizeof(*VAR_8);
 unsigned int VAR_13 = 0;
 u8 VAR_14[VAR_3 + sizeof(VAR_8->data)];
 int VAR_15;

 if (FUNC_0(VAR_11 > sizeof(VAR_14)))
  return -VAR_0;

 VAR_14[VAR_13++] = VAR_5->address;
 VAR_14[VAR_13++] = 0;
 VAR_14[VAR_13++] = VAR_6;
 VAR_14[VAR_13++] = VAR_7;






 if (VAR_13 < VAR_5->header_size)
  VAR_14[VAR_13++] = VAR_7 >> 8;





 FUNC_1(&VAR_14[VAR_13], VAR_8->data, VAR_10);

 VAR_15 = FUNC_2(VAR_5->sp, VAR_14, VAR_11, VAR_8, VAR_12);
 if (VAR_15)
  return VAR_15;

 if (VAR_8->type != VAR_6)
  return -VAR_2;

 if (!VAR_8->success)
  return -VAR_1;

 return 0;
}
