
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc18xx_eeprom_dev {scalar_t__ val_bytes; scalar_t__ mem_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpc18xx_eeprom_dev*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, unsigned int VAR_4,
          void *VAR_5, size_t VAR_6)
{
 struct lpc18xx_eeprom_dev *VAR_7 = VAR_3;

 FUNC_0(VAR_7, VAR_0,
         VAR_1);


 FUNC_2(100, 200);

 while (VAR_6) {
  *(u32 *)VAR_5 = FUNC_1(VAR_7->mem_base + VAR_4);
  VAR_6 -= VAR_7->val_bytes;
  VAR_5 += VAR_7->val_bytes;
  VAR_4 += VAR_7->val_bytes;
 }

 FUNC_0(VAR_7, VAR_0,
         VAR_2);

 return 0;
}
