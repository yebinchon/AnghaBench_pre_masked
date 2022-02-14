
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct pm860x_platform_data {scalar_t__ ldo14; scalar_t__ ldo_vibrator; scalar_t__ ldo12; scalar_t__ ldo10; scalar_t__ ldo9; scalar_t__ ldo8; scalar_t__ ldo7; scalar_t__ ldo6; scalar_t__ ldo5; scalar_t__ ldo4; scalar_t__ ldo3; scalar_t__ ldo2; scalar_t__ ldo1; scalar_t__ buck3; scalar_t__ buck2; scalar_t__ buck1; } ;
struct pm860x_chip {int dev; } ;
struct TYPE_4__ {int pdata_size; scalar_t__ platform_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int ,int *,int ,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct pm860x_chip *VAR_1,
         struct pm860x_platform_data *VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->buck1) {
  VAR_0[0].platform_data = VAR_2->buck1;
  VAR_0[0].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->buck2) {
  VAR_0[1].platform_data = VAR_2->buck2;
  VAR_0[1].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->buck3) {
  VAR_0[2].platform_data = VAR_2->buck3;
  VAR_0[2].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo1) {
  VAR_0[3].platform_data = VAR_2->ldo1;
  VAR_0[3].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo2) {
  VAR_0[4].platform_data = VAR_2->ldo2;
  VAR_0[4].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo3) {
  VAR_0[5].platform_data = VAR_2->ldo3;
  VAR_0[5].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo4) {
  VAR_0[6].platform_data = VAR_2->ldo4;
  VAR_0[6].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo5) {
  VAR_0[7].platform_data = VAR_2->ldo5;
  VAR_0[7].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo6) {
  VAR_0[8].platform_data = VAR_2->ldo6;
  VAR_0[8].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo7) {
  VAR_0[9].platform_data = VAR_2->ldo7;
  VAR_0[9].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo8) {
  VAR_0[10].platform_data = VAR_2->ldo8;
  VAR_0[10].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo9) {
  VAR_0[11].platform_data = VAR_2->ldo9;
  VAR_0[11].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo10) {
  VAR_0[12].platform_data = VAR_2->ldo10;
  VAR_0[12].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo12) {
  VAR_0[13].platform_data = VAR_2->ldo12;
  VAR_0[13].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo_vibrator) {
  VAR_0[14].platform_data = VAR_2->ldo_vibrator;
  VAR_0[14].pdata_size = sizeof(struct regulator_init_data);
 }
 if (VAR_2->ldo14) {
  VAR_0[15].platform_data = VAR_2->ldo14;
  VAR_0[15].pdata_size = sizeof(struct regulator_init_data);
 }
 VAR_3 = FUNC_2(VAR_1->dev, 0, VAR_0,
         FUNC_0(VAR_0), ((void*)0), 0, ((void*)0));
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->dev, "Failed to add regulator subdev\n");
  return;
 }
}
