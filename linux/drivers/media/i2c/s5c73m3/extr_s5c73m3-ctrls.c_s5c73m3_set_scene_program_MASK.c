
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* scene_mode; } ;
struct s5c73m3 {TYPE_2__ ctrls; int sensor_sd; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s5c73m3*,int ,unsigned short const) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int *,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct s5c73m3 *VAR_2, int VAR_3)
{
 static const unsigned short VAR_4[] = {
  132,
  141,
  140,
  139,
  138,
  137,
  136,
  134,
  133,
  135,
  131,
  130,
  129,
  128,
 };

 FUNC_2(1, VAR_1, &VAR_2->sensor_sd, "Setting %s scene mode\n",
   FUNC_1(VAR_2->ctrls.scene_mode->id)[VAR_3]);

 return FUNC_0(VAR_2, VAR_0, VAR_4[VAR_3]);
}
