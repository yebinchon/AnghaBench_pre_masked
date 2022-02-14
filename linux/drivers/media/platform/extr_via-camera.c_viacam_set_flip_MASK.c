
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_camera {TYPE_1__* sensor; } ;
struct v4l2_control {int value; int id; } ;
typedef int ctrl ;
struct TYPE_2__ {int ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_control*,int ,int) ;
 int FUNC_1 (int *,int ,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_2(struct via_camera *VAR_2)
{
 struct v4l2_control VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.id = VAR_0;
 VAR_3.value = VAR_1;
 return FUNC_1(((void*)0), VAR_2->sensor->ctrl_handler, &VAR_3);
}
