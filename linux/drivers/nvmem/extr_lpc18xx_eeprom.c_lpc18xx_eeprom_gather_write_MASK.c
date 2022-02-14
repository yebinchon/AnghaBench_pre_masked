
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc18xx_eeprom_dev {unsigned int size; scalar_t__ val_bytes; scalar_t__ mem_base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpc18xx_eeprom_dev*) ;
 int FUNC_1 (struct lpc18xx_eeprom_dev*,int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(void *VAR_5, unsigned int VAR_6,
           void *VAR_7, size_t VAR_8)
{
 struct lpc18xx_eeprom_dev *VAR_9 = VAR_5;
 unsigned int VAR_10 = VAR_6;
 int VAR_11;





 if ((VAR_6 > VAR_9->size - VAR_1) ||
   (VAR_6 + VAR_8 > VAR_9->size - VAR_1))
  return -VAR_0;


 FUNC_1(VAR_9, VAR_2,
         VAR_3);


 FUNC_2(100, 200);

 while (VAR_8) {
  FUNC_3(*(u32 *)VAR_7, VAR_9->mem_base + VAR_10);
  VAR_11 = FUNC_0(VAR_9);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_8 -= VAR_9->val_bytes;
  VAR_7 += VAR_9->val_bytes;
  VAR_10 += VAR_9->val_bytes;
 }

 FUNC_1(VAR_9, VAR_2,
         VAR_4);

 return 0;
}
