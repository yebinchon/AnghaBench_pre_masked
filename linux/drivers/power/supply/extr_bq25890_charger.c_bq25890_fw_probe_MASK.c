
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq25890_init_data {void* boostf; void* ilim_en; } ;
struct bq25890_device {int dev; struct bq25890_init_data init_data; } ;


 int FUNC_0 (struct bq25890_device*) ;
 void* FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct bq25890_device *VAR_0)
{
 int VAR_1;
 struct bq25890_init_data *VAR_2 = &VAR_0->init_data;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_2->ilim_en = FUNC_1(VAR_0->dev, "ti,use-ilim-pin");
 VAR_2->boostf = FUNC_1(VAR_0->dev, "ti,boost-low-freq");

 return 0;
}
