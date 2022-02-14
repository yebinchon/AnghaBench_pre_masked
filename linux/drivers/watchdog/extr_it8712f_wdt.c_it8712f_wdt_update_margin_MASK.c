
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int VAR_7 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_8 = VAR_1 | VAR_2;
 int VAR_9 = VAR_5;




 if (VAR_9 <= VAR_6) {
  VAR_8 |= VAR_4;
  FUNC_0("timer margin %d seconds\n", VAR_9);
 } else {
  VAR_9 /= 60;
  FUNC_0("timer margin %d minutes\n", VAR_9);
 }
 FUNC_1(VAR_8, VAR_0);

 if (VAR_7 >= 0x08)
  FUNC_1(VAR_9 >> 8, VAR_3 + 1);
 FUNC_1(VAR_9, VAR_3);
}
