
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct fimc_isp {int dummy; } ;
struct fimc_is {size_t config_index; scalar_t__ state; TYPE_2__* config; TYPE_1__* pdev; } ;
struct TYPE_4__ {scalar_t__* p_region_index; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (struct fimc_is*,int ) ;
 int FUNC_2 (struct fimc_is*,int ) ;
 int FUNC_3 (struct fimc_is*) ;
 int FUNC_4 (struct fimc_is*) ;
 int FUNC_5 (struct fimc_is*) ;
 int FUNC_6 (struct fimc_is*,int ,int ,int ) ;
 struct fimc_is* FUNC_7 (struct fimc_isp*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int ,scalar_t__*) ;
 scalar_t__ FUNC_13 (int ,scalar_t__*) ;
 int FUNC_14 (struct v4l2_subdev*,char*) ;
 struct fimc_isp* FUNC_15 (struct v4l2_subdev*) ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct v4l2_subdev *VAR_6, int VAR_7)
{
 struct fimc_isp *VAR_8 = FUNC_15(VAR_6);
 struct fimc_is *VAR_9 = FUNC_7(VAR_8);
 int VAR_10 = 0;

 FUNC_11("on: %d\n", VAR_7);

 if (VAR_7) {
  VAR_10 = FUNC_8(&VAR_9->pdev->dev);
  if (VAR_10 < 0)
   return VAR_10;
  FUNC_12(VAR_4, &VAR_9->state);

  VAR_10 = FUNC_5(VAR_9);
  if (VAR_10 < 0) {
   FUNC_14(VAR_6, "firmware booting failed\n");
   FUNC_9(&VAR_9->pdev->dev);
   return VAR_10;
  }
  FUNC_12(VAR_5, &VAR_9->state);

  VAR_10 = FUNC_3(VAR_9);
 } else {

  if (!FUNC_13(VAR_4, &VAR_9->state)) {
   FUNC_2(VAR_9, 0);

   VAR_10 = FUNC_6(VAR_9, VAR_3, 0,
       VAR_0);
   if (VAR_10 < 0) {
    FUNC_14(VAR_6, "sensor close timeout\n");
    return VAR_10;
   }
  }


  if (FUNC_13(VAR_5, &VAR_9->state)) {
   FUNC_4(VAR_9);
   VAR_10 = FUNC_6(VAR_9, VAR_5, 0,
       VAR_0);
   if (VAR_10 < 0) {
    FUNC_14(VAR_6, "sub-IP power off timeout\n");
    return VAR_10;
   }
  }

  FUNC_1(VAR_9, 0);
  FUNC_10(&VAR_9->pdev->dev);

  FUNC_0(VAR_4, &VAR_9->state);
  FUNC_0(VAR_2, &VAR_9->state);
  VAR_9->state = 0;
  VAR_9->config[VAR_9->config_index].p_region_index[0] = 0;
  VAR_9->config[VAR_9->config_index].p_region_index[1] = 0;
  FUNC_12(VAR_1, &VAR_9->state);
  FUNC_16();
 }

 return VAR_10;
}
