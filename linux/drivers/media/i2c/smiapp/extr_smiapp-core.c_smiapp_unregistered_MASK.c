
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct smiapp_sensor {unsigned int ssds_used; TYPE_1__* ssds; } ;
struct TYPE_2__ {int sd; } ;


 struct smiapp_sensor* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct smiapp_sensor *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_1->ssds_used; VAR_2++)
  FUNC_1(&VAR_1->ssds[VAR_2].sd);
}
