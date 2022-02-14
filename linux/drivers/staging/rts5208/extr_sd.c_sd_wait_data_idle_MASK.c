
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_4)
{
 int VAR_5 = VAR_3;
 int VAR_6;
 u8 VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  VAR_5 = FUNC_2(VAR_4, VAR_1, &VAR_7);
  if (VAR_5)
   return VAR_5;
  if (VAR_7 & VAR_0) {
   VAR_5 = VAR_2;
   break;
  }
  FUNC_3(100);
 }
 FUNC_0(FUNC_1(VAR_4), "SD_DATA_STATE: 0x%02x\n", VAR_7);

 return VAR_5;
}
