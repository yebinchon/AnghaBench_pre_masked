
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_read_eeprom {void* byte_count; int value; void* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ds_read_eeprom*,int) ;

int
FUNC_3(struct mwifiex_private *VAR_3, u16 VAR_4, u16 VAR_5,
      u8 *VAR_6)
{
 int VAR_7;
 struct mwifiex_ds_read_eeprom VAR_8;

 VAR_8.offset = VAR_4;
 VAR_8.byte_count = VAR_5;


 VAR_7 = FUNC_2(VAR_3, VAR_1,
          VAR_0, 0, &VAR_8, 1);

 if (!VAR_7)
  FUNC_0(VAR_6, VAR_8.value, FUNC_1((u16)VAR_2,
         VAR_8.byte_count));
 return VAR_7;
}
