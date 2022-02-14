
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65217_bl_pdata {int isel; int fdim; } ;
struct tps65217_bl {int dev; int tps; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct tps65217_bl*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct tps65217_bl *VAR_5,
   struct tps65217_bl_pdata *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  return VAR_7;

 switch (VAR_6->isel) {
 case 129:

  VAR_7 = FUNC_3(VAR_5->tps,
     VAR_2,
     VAR_4,
     VAR_1);
  if (VAR_7) {
   FUNC_1(VAR_5->dev,
    "failed to select ISET1 current level: %d)\n",
    VAR_7);
   return VAR_7;
  }

  FUNC_0(VAR_5->dev, "selected ISET1 current level\n");

  break;

 case 128:

  VAR_7 = FUNC_4(VAR_5->tps, VAR_2,
    VAR_4,
    VAR_4, VAR_1);
  if (VAR_7) {
   FUNC_1(VAR_5->dev,
    "failed to select ISET2 current level: %d\n",
    VAR_7);
   return VAR_7;
  }

  FUNC_0(VAR_5->dev, "selected ISET2 current level\n");

  break;

 default:
  FUNC_1(VAR_5->dev,
   "invalid value for current level: %d\n", VAR_6->isel);
  return -VAR_0;
 }


 VAR_7 = FUNC_4(VAR_5->tps,
   VAR_2,
   VAR_3,
   VAR_6->fdim,
   VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_5->dev,
   "failed to select PWM dimming frequency: %d\n",
   VAR_7);
  return VAR_7;
 }

 return 0;
}
