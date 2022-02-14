
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct clock_cooling_device* devdata; } ;
struct clock_cooling_device {int id; int cdev; int freq_table; int dev; int clk_rate_change_nb; int clk; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct thermal_cooling_device *VAR_1)
{
 struct clock_cooling_device *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->devdata;

 FUNC_0(VAR_2->clk, &VAR_2->clk_rate_change_nb);
 FUNC_1(VAR_2->dev, &VAR_2->freq_table);

 FUNC_3(VAR_2->cdev);
 FUNC_2(&VAR_0, VAR_2->id);
}
