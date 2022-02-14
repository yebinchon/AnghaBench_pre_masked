
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int capability; int rangehigh; int rangelow; int type; int name; } ;
struct v4l2_subdev {int dummy; } ;
struct max2175 {TYPE_1__* bands_rf; } ;
struct TYPE_2__ {int rangehigh; int rangelow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct max2175* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4, struct v4l2_tuner *VAR_5)
{
 struct max2175 *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->index > 0)
  return -VAR_0;

 FUNC_1(VAR_5->name, "RF", sizeof(VAR_5->name));
 VAR_5->type = VAR_3;
 VAR_5->capability = VAR_1 | VAR_2;
 VAR_5->rangelow = VAR_6->bands_rf->rangelow;
 VAR_5->rangehigh = VAR_6->bands_rf->rangehigh;

 return 0;
}
