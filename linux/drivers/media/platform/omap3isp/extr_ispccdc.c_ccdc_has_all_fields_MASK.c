
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isp_pipeline {int field; } ;
struct isp_device {int dummy; } ;
struct TYPE_4__ {int entity; } ;
struct isp_ccdc_device {int fields; TYPE_1__* formats; TYPE_2__ subdev; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_3__ {int field; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct isp_device*,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_ccdc_device*) ;
 struct isp_pipeline* FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct isp_ccdc_device *VAR_13)
{
 struct isp_pipeline *VAR_14 = FUNC_2(&VAR_13->subdev.entity);
 struct isp_device *VAR_15 = FUNC_1(VAR_13);
 enum v4l2_field VAR_16 = VAR_13->formats[VAR_3].field;
 enum v4l2_field VAR_17;


 if (VAR_16 == VAR_11)
  return 1;


 VAR_17 = FUNC_0(VAR_15, VAR_6, VAR_4)
       & VAR_5
       ? VAR_8 : VAR_12;




 if (VAR_16 == VAR_7) {
  VAR_14->field = VAR_17;
  return 1;
 }


 VAR_13->fields |= VAR_17 == VAR_8
        ? VAR_1 : VAR_2;

 if (VAR_13->fields != VAR_0)
  return 0;




 if ((VAR_16 == VAR_10 && VAR_17 == VAR_12) ||
     (VAR_16 == VAR_9 && VAR_17 == VAR_8))
  return 0;


 VAR_13->fields = 0;

 return 1;
}
