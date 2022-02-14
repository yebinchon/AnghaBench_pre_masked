
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gpio_data; int gpio_direction; } ;
struct TYPE_4__ {int stream_mode; } ;
struct TYPE_6__ {TYPE_2__ vp_params; TYPE_1__ camera_state; } ;
struct camera_data {int hdl; TYPE_3__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct camera_data*,int ,int ,int ) ;
 int FUNC_1 (struct camera_data*,int ) ;
 int FUNC_2 (struct camera_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct camera_data*) ;

__attribute__((used)) static int FUNC_5(struct camera_data *VAR_3)
{





 FUNC_1(VAR_3,
       VAR_3->params.camera_state.stream_mode);

 FUNC_0(VAR_3,
    VAR_1,
    VAR_2, VAR_3->params.vp_params.gpio_direction);
 FUNC_0(VAR_3, VAR_0, VAR_2,
    VAR_3->params.vp_params.gpio_data);

 FUNC_3(&VAR_3->hdl);

 FUNC_4(VAR_3);

 FUNC_2(VAR_3);

 return 0;
}
