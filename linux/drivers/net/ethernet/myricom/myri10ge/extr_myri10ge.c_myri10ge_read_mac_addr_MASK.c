
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myri10ge_priv {char* eeprom_strings; char* mac_addr_string; char* product_code_string; TYPE_1__* pdev; void* serial_number; void** mac_addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (void const*,char*,int) ;
 void* FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int FUNC_3(struct myri10ge_priv *VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = VAR_2->eeprom_strings;
 VAR_4 = VAR_2->eeprom_strings + VAR_1;

 while (*VAR_3 != '\0' && VAR_3 < VAR_4) {
  if (FUNC_1(VAR_3, "MAC=", 4) == 0) {
   VAR_3 += 4;
   VAR_2->mac_addr_string = VAR_3;
   for (VAR_5 = 0; VAR_5 < 6; VAR_5++) {
    if ((VAR_3 + 2) > VAR_4)
     goto abort;
    VAR_2->mac_addr[VAR_5] =
        FUNC_2(VAR_3, &VAR_3, 16);
    VAR_3 += 1;
   }
  }
  if (FUNC_1(VAR_3, "PC=", 3) == 0) {
   VAR_3 += 3;
   VAR_2->product_code_string = VAR_3;
  }
  if (FUNC_1((const void *)VAR_3, "SN=", 3) == 0) {
   VAR_3 += 3;
   VAR_2->serial_number = FUNC_2(VAR_3, &VAR_3, 10);
  }
  while (VAR_3 < VAR_4 && *VAR_3++) ;
 }

 return 0;

abort:
 FUNC_0(&VAR_2->pdev->dev, "failed to parse eeprom_strings\n");
 return -VAR_0;
}
