
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int error; } ;
struct TYPE_9__ {TYPE_4__* ctrl_handler; } ;
struct et8ek8_sensor {TYPE_4__ ctrl_handler; TYPE_3__ subdev; void* pixel_rate; void* exposure; TYPE_2__* current_reglist; } ;
typedef int s32 ;
struct TYPE_7__ {int max_exp; } ;
struct TYPE_8__ {TYPE_1__ mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*,int) ;
 void* FUNC_2 (TYPE_4__*,int *,int ,int,int,int,int) ;
 int FUNC_3 (TYPE_4__*,int *,int ,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct et8ek8_sensor *VAR_8)
{
 s32 VAR_9;

 FUNC_1(&VAR_8->ctrl_handler, 4);


 FUNC_2(&VAR_8->ctrl_handler, &VAR_5,
     VAR_2, 0, FUNC_0(VAR_6) - 1,
     1, 0);

 VAR_9 = VAR_8->current_reglist->mode.max_exp;
 {
  u32 VAR_10 = 1, VAR_11 = VAR_9;

  VAR_8->exposure =
   FUNC_2(&VAR_8->ctrl_handler,
       &VAR_5, VAR_1,
       VAR_10, VAR_11, VAR_10, VAR_11);
 }


 VAR_8->pixel_rate =
  FUNC_2(&VAR_8->ctrl_handler, &VAR_5,
  VAR_3, 1, VAR_0, 1, 1);


 FUNC_3(&VAR_8->ctrl_handler,
         &VAR_5, VAR_4,
         FUNC_0(VAR_7) - 1,
         0, 0, VAR_7);

 if (VAR_8->ctrl_handler.error)
  return VAR_8->ctrl_handler.error;

 VAR_8->subdev.ctrl_handler = &VAR_8->ctrl_handler;

 return 0;
}
