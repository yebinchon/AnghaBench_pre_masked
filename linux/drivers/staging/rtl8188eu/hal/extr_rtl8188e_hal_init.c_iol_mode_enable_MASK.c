
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int bFWReady; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ,int) ;

void FUNC_4(struct adapter *VAR_2, u8 VAR_3)
{
 u8 VAR_4 = 0;

 if (VAR_3) {

  VAR_4 = FUNC_2(VAR_2, VAR_0);
  FUNC_3(VAR_2, VAR_0, VAR_4|VAR_1);

  if (!VAR_2->bFWReady) {
   FUNC_0("bFWReady == false call reset 8051...\n");
   FUNC_1(VAR_2);
  }

 } else {

  VAR_4 = FUNC_2(VAR_2, VAR_0);
  FUNC_3(VAR_2, VAR_0, VAR_4 & ~VAR_1);
 }
}
