
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm80x_subchip {void* gpadc_page; void* regmap_gpadc; int gpadc_page_addr; void* power_page; void* regmap_power; int power_page_addr; } ;
struct pm80x_chip {int dev; struct pm80x_subchip* subchip; struct i2c_client* client; } ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,int) ;
 void* FUNC_3 (void*,int *) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (void*,struct pm80x_chip*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct pm80x_chip *VAR_2)
{
 struct pm80x_subchip *VAR_3;
 struct i2c_client *VAR_4 = VAR_2->client;

 int VAR_5 = 0;

 VAR_3 = VAR_2->subchip;
 if (!VAR_3 || !VAR_3->power_page_addr || !VAR_3->gpadc_page_addr)
  return -VAR_0;


 VAR_3->power_page = FUNC_4(VAR_4->adapter,
         VAR_3->power_page_addr);
 if (FUNC_0(VAR_3->power_page)) {
  VAR_5 = FUNC_1(VAR_3->power_page);
  goto out;
 }

 VAR_3->regmap_power = FUNC_3(VAR_3->power_page,
           &VAR_1);
 if (FUNC_0(VAR_3->regmap_power)) {
  VAR_5 = FUNC_1(VAR_3->regmap_power);
  FUNC_2(VAR_2->dev,
   "Failed to allocate regmap_power: %d\n", VAR_5);
  goto out;
 }

 FUNC_5(VAR_3->power_page, VAR_2);


 VAR_3->gpadc_page = FUNC_4(VAR_4->adapter,
         VAR_3->gpadc_page_addr);
 if (FUNC_0(VAR_3->gpadc_page)) {
  VAR_5 = FUNC_1(VAR_3->gpadc_page);
  goto out;
 }

 VAR_3->regmap_gpadc = FUNC_3(VAR_3->gpadc_page,
           &VAR_1);
 if (FUNC_0(VAR_3->regmap_gpadc)) {
  VAR_5 = FUNC_1(VAR_3->regmap_gpadc);
  FUNC_2(VAR_2->dev,
   "Failed to allocate regmap_gpadc: %d\n", VAR_5);
  goto out;
 }
 FUNC_5(VAR_3->gpadc_page, VAR_2);

out:
 return VAR_5;
}
