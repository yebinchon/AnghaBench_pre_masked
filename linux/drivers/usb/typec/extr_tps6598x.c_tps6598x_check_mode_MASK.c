
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6598x {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct tps6598x*,int ,void*) ;

__attribute__((used)) static int FUNC_5(struct tps6598x *VAR_3)
{
 char VAR_4[5] = { };
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, VAR_1, (void *)VAR_4);
 if (VAR_5)
  return VAR_5;

 switch (FUNC_3(VAR_2, FUNC_0(VAR_2), VAR_4)) {
 case 131:
  return 0;
 case 129:
  FUNC_2(VAR_3->dev, "dead-battery condition\n");
  return 0;
 case 130:
 case 128:
 default:
  FUNC_1(VAR_3->dev, "controller in unsupported mode \"%s\"\n",
   VAR_4);
  break;
 }

 return -VAR_0;
}
