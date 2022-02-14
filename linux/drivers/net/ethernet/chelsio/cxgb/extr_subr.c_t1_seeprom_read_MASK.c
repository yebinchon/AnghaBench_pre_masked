
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int pdev; int name; } ;
typedef TYPE_1__ adapter_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int) ;

int FUNC_6(adapter_t *VAR_7, u32 VAR_8, __le32 *VAR_9)
{
 int VAR_10 = VAR_3;
 u16 VAR_11;
 u32 VAR_12;

 if (VAR_8 >= VAR_2 || (VAR_8 & 3))
  return -VAR_4;

 FUNC_3(VAR_7->pdev, VAR_0, (u16)VAR_8);
 do {
  FUNC_5(50);
  FUNC_2(VAR_7->pdev, VAR_0, &VAR_11);
 } while (!(VAR_11 & VAR_6) && --VAR_10);

 if (!(VAR_11 & VAR_6)) {
  FUNC_4("%s: reading EEPROM address 0x%x failed\n",
         VAR_7->name, VAR_8);
  return -VAR_5;
 }
 FUNC_1(VAR_7->pdev, VAR_1, &VAR_12);
 *VAR_9 = FUNC_0(VAR_12);
 return 0;
}
