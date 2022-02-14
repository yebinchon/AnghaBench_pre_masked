
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int power_mode; } ;
struct TYPE_4__ {TYPE_1__ camera_state; } ;
struct camera_data {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct camera_data*,int ,int ,int ) ;

int FUNC_1(struct camera_data *VAR_3)
{
 VAR_3->params.camera_state.power_mode = VAR_1;
 FUNC_0(VAR_3, VAR_0, VAR_2, 0);
 return 0;
}
