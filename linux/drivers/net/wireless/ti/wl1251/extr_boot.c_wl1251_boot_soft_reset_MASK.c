
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1251 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct wl1251*,int ) ;
 int FUNC_6 (struct wl1251*,int ,int) ;

int FUNC_7(struct wl1251 *VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;


 FUNC_6(VAR_8, VAR_0, VAR_1);


 VAR_9 = VAR_7 + FUNC_2(VAR_4);
 while (1) {
  VAR_10 = FUNC_5(VAR_8, VAR_0);
  FUNC_3(VAR_2, "soft reset bootdata 0x%x", VAR_10);
  if ((VAR_10 & VAR_1) == 0)
   break;

  if (FUNC_0(VAR_7, VAR_9)) {


   FUNC_4("soft reset timeout");
   return -1;
  }

  FUNC_1(VAR_5);
 }


 FUNC_6(VAR_8, VAR_3, 0x0);


 FUNC_6(VAR_8, VAR_6, 0xffff);

 return 0;
}
