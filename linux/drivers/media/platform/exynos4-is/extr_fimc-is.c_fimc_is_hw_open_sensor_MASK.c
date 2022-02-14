
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sensor_open_extended {int self_calibration_mode; int i2c_sclk; scalar_t__ fast_open_sensor; scalar_t__ mipi_speed; scalar_t__ mclk; scalar_t__ mipi_lane_num; scalar_t__ actuator_type; } ;
struct fimc_is_sensor {TYPE_2__* drvdata; int i2c_bus; } ;
struct fimc_is {int is_dma_p_region; int sensor_index; TYPE_1__* is_p_region; } ;
struct TYPE_4__ {int open_timeout; int id; } ;
struct TYPE_3__ {int shared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fimc_is*) ;
 int FUNC_2 (struct fimc_is*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct fimc_is*,int ,int,int ) ;
 int FUNC_5 (int ,struct fimc_is*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct fimc_is *VAR_2,
      struct fimc_is_sensor *VAR_3)
{
 struct sensor_open_extended *VAR_4 = (void *)&VAR_2->is_p_region->shared;

 FUNC_2(VAR_2);

 VAR_4->self_calibration_mode = 1;
 VAR_4->actuator_type = 0;
 VAR_4->mipi_lane_num = 0;
 VAR_4->mclk = 0;
 VAR_4->mipi_speed = 0;
 VAR_4->fast_open_sensor = 0;
 VAR_4->i2c_sclk = 88000000;

 FUNC_3();





 FUNC_6(100);

 FUNC_5(VAR_0, VAR_2, FUNC_0(0));
 FUNC_5(VAR_2->sensor_index, VAR_2, FUNC_0(1));
 FUNC_5(VAR_3->drvdata->id, VAR_2, FUNC_0(2));
 FUNC_5(VAR_3->i2c_bus, VAR_2, FUNC_0(3));
 FUNC_5(VAR_2->is_dma_p_region, VAR_2, FUNC_0(4));

 FUNC_1(VAR_2);

 return FUNC_4(VAR_2, VAR_1, 1,
      VAR_3->drvdata->open_timeout);
}
