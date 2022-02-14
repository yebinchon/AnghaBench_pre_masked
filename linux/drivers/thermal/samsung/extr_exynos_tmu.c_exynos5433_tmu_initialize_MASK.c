
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct exynos_tmu_data {int cal_type; scalar_t__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 struct exynos_tmu_data* FUNC_1 (struct platform_device*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct exynos_tmu_data*,unsigned int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_7)
{
 struct exynos_tmu_data *VAR_8 = FUNC_1(VAR_7);
 unsigned int VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_2(VAR_8->base + VAR_4);
 FUNC_3(VAR_8, VAR_9);


 VAR_10 = (VAR_9 & VAR_2)
    >> VAR_3;
 FUNC_0(&VAR_7->dev, "Temperature sensor ID: 0x%x\n", VAR_10);


 FUNC_4(VAR_9, VAR_8->base + VAR_4);
 VAR_11 = (VAR_9 & VAR_0)
    >> VAR_1;

 switch (VAR_11) {
 case 128:
  VAR_8->cal_type = VAR_6;
  break;
 case 129:
 default:
  VAR_8->cal_type = VAR_5;
  break;
 }

 FUNC_0(&VAR_7->dev, "Calibration type is %d-point calibration\n",
   VAR_11 ? 2 : 1);
}
