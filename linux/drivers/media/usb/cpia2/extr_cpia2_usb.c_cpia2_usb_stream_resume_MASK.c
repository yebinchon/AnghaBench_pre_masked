
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int user_effects; } ;
struct TYPE_4__ {int stream_mode; } ;
struct TYPE_6__ {TYPE_2__ vp_params; TYPE_1__ camera_state; } ;
struct camera_data {TYPE_3__ params; scalar_t__ first_image_seen; scalar_t__ streaming; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct camera_data*,int ,int ,int ) ;
 int FUNC_1 (struct camera_data*,int ) ;
 int FUNC_2 (struct camera_data*) ;

int FUNC_3(struct camera_data *VAR_2)
{
 int VAR_3 = 0;
 if(VAR_2->streaming) {
  VAR_2->first_image_seen = 0;
  VAR_3 = FUNC_1(VAR_2, VAR_2->params.camera_state.stream_mode);
  if(VAR_3 == 0) {


   FUNC_0(VAR_2, VAR_0, VAR_1,
     VAR_2->params.vp_params.user_effects);
   VAR_3 = FUNC_2(VAR_2);
  }
 }
 return VAR_3;
}
