
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trf7970a {int state; int dev; } ;


 int VAR_0 ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct trf7970a*) ;
 int FUNC_3 (struct trf7970a*,int ) ;
 int FUNC_4 (struct trf7970a*) ;

__attribute__((used)) static void FUNC_5(struct trf7970a *VAR_1)
{
 switch (VAR_1->state) {
 case 129:
 case 131:
 case 130:
 case 128:
 case 132:
  FUNC_3(VAR_1, -VAR_0);

 case 134:
 case 133:
  FUNC_4(VAR_1);
  break;
 default:
  break;
 }

 FUNC_0(VAR_1->dev);
 FUNC_1(VAR_1->dev);

 FUNC_2(VAR_1);
}
