
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 > VAR_3)
  return -VAR_0;

 FUNC_4(VAR_2,
   "set backlight level to %d\n", VAR_6);

 VAR_7 = FUNC_0(&VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_4) {
 case 130:
 case 129:
  VAR_7 = FUNC_2(VAR_6);
  break;
 case 128:
  VAR_7 = FUNC_3(VAR_6);
  break;
 default:
  VAR_7 = -VAR_1;
 }

 FUNC_1(&VAR_5);
 return VAR_7;
}
