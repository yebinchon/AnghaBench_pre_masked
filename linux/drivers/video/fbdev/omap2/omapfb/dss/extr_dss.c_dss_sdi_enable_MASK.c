
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_5 (int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int) ;

int FUNC_8(void)
{
 unsigned long VAR_4;

 FUNC_3(1);


 FUNC_1(VAR_0, 1, 18, 18);
 FUNC_7(1);


 FUNC_1(VAR_0, 1, 28, 28);


 VAR_4 = VAR_3 + FUNC_5(500);
 while (FUNC_4(VAR_1) & (1 << 6)) {
  if (FUNC_6(VAR_3, VAR_4)) {
   FUNC_0("PLL lock request timed out\n");
   goto err1;
  }
 }


 FUNC_1(VAR_0, 0, 28, 28);


 VAR_4 = VAR_3 + FUNC_5(500);
 while (!(FUNC_4(VAR_1) & (1 << 5))) {
  if (FUNC_6(VAR_3, VAR_4)) {
   FUNC_0("PLL lock timed out\n");
   goto err1;
  }
 }

 FUNC_2(1);


 VAR_4 = VAR_3 + FUNC_5(500);
 while (!(FUNC_4(VAR_1) & (1 << 2))) {
  if (FUNC_6(VAR_3, VAR_4)) {
   FUNC_0("SDI reset timed out\n");
   goto err2;
  }
 }

 return 0;

 err2:
 FUNC_2(0);
 err1:

 FUNC_1(VAR_0, 0, 18, 18);

 FUNC_3(0);

 return -VAR_2;
}
