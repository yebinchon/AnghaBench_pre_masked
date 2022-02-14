
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct tridentfb_par*,int ) ;

__attribute__((used)) static int FUNC_2(struct tridentfb_par *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (VAR_1)
  return VAR_1;

 VAR_5 = (FUNC_1(VAR_2, VAR_0) >> 4) & 3;

 switch (VAR_5) {
 case 0:
  VAR_3 = 1280; VAR_4 = 1024;
  break;
 case 2:
  VAR_3 = 1024; VAR_4 = 768;
  break;
 case 3:
  VAR_3 = 800; VAR_4 = 600;
  break;
 case 1:
 default:
  VAR_3 = 640; VAR_4 = 480;
  break;
 }

 FUNC_0("%dx%d flat panel found\n", VAR_3, VAR_4);
 return VAR_3;
}
