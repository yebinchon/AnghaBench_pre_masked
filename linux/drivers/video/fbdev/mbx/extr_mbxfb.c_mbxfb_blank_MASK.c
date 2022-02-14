
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_6, struct fb_info *VAR_7)
{
 switch (VAR_6) {
 case 130:
 case 128:
 case 132:
 case 131:
  FUNC_1((FUNC_0(VAR_0) & ~VAR_1), VAR_0);
  FUNC_1((FUNC_0(VAR_2) & ~VAR_3), VAR_2);
  FUNC_1((FUNC_0(VAR_4) & ~VAR_5), VAR_4);
  break;
 case 129:
  FUNC_1((FUNC_0(VAR_0) | VAR_1), VAR_0);
  FUNC_1((FUNC_0(VAR_2) | VAR_3), VAR_2);
  break;
 }
 return 0;
}
