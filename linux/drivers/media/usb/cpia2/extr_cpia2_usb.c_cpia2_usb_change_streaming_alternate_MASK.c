
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int stream_mode; } ;
struct TYPE_4__ {TYPE_1__ camera_state; } ;
struct camera_data {TYPE_2__ params; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct camera_data*,unsigned int) ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (struct camera_data*) ;
 int FUNC_3 (struct camera_data*) ;

int FUNC_4(struct camera_data *VAR_3,
      unsigned int VAR_4)
{
 int VAR_5 = 0;

 if(VAR_4 < VAR_1 || VAR_4 > VAR_2)
  return -VAR_0;

 if(VAR_4 == VAR_3->params.camera_state.stream_mode)
  return 0;

 FUNC_2(VAR_3);

 FUNC_0(VAR_3, VAR_4);

 VAR_3->params.camera_state.stream_mode = VAR_4;


 FUNC_1(VAR_3);

 FUNC_3(VAR_3);

 return VAR_5;
}
