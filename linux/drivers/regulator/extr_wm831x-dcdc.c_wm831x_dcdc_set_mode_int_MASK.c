
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wm831x*,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct wm831x *VAR_7, int VAR_8,
        unsigned int VAR_9)
{
 int VAR_10;

 switch (VAR_9) {
 case 131:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_5;
  break;
 case 128:
  VAR_10 = VAR_6;
  break;
 case 130:
  VAR_10 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_7, VAR_8, VAR_1,
          VAR_10 << VAR_2);
}
