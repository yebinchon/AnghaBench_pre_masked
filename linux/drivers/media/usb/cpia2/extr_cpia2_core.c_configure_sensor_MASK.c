
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sensor_flags; } ;
struct TYPE_4__ {TYPE_1__ version; } ;
struct camera_data {TYPE_2__ params; } ;







 int VAR_0 ;
 int FUNC_0 (struct camera_data*,int,int) ;
 int FUNC_1 (struct camera_data*,int,int) ;

__attribute__((used)) static int FUNC_2(struct camera_data *VAR_1,
       int VAR_2, int VAR_3)
{
 int VAR_4;

 switch (VAR_1->params.version.sensor_flags) {
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return VAR_4;
}
