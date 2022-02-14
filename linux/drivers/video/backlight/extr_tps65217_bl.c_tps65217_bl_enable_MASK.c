
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65217_bl {int is_enabled; int dev; int tps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tps65217_bl *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->tps, VAR_1,
   VAR_2,
   VAR_2, VAR_0);
 if (VAR_4) {
  FUNC_1(VAR_3->dev,
   "failed to enable backlight: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_3->is_enabled = 1;

 FUNC_0(VAR_3->dev, "backlight enabled\n");

 return 0;
}
