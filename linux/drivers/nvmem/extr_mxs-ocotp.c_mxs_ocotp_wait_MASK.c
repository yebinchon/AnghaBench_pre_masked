
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_ocotp {int base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mxs_ocotp *VAR_5)
{
 int VAR_6 = VAR_4;
 unsigned int VAR_7 = 0;

 while (VAR_6--) {
  VAR_7 = FUNC_1(VAR_5->base);

  if (!(VAR_7 & (VAR_0 | VAR_1)))
   break;

  FUNC_0();
 }

 if (VAR_7 & VAR_0)
  return -VAR_2;
 else if (VAR_7 & VAR_1)
  return -VAR_3;

 return 0;
}
