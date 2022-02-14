
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jme_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct jme_adapter*,int ) ;
 int FUNC_1 (struct jme_adapter*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct jme_adapter *VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_2);

 if (VAR_7 & VAR_4) {
  VAR_7 |= VAR_3;
  FUNC_1(VAR_6, VAR_2, VAR_7);
  VAR_7 |= VAR_5;
  FUNC_1(VAR_6, VAR_2, VAR_7);
  FUNC_2(12);

  for (VAR_8 = VAR_1; VAR_8 > 0; --VAR_8) {
   FUNC_2(1);
   if ((FUNC_0(VAR_6, VAR_2) & VAR_5) == 0)
    break;
  }

  if (VAR_8 == 0) {
   FUNC_3("eeprom reload timeout\n");
   return -VAR_0;
  }
 }

 return 0;
}
