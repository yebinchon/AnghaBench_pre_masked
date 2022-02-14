
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vchiq_mmal_instance {int dummy; } ;
struct platform_device {int dummy; } ;
struct TYPE_3__ {struct vchiq_mmal_instance* instance; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (struct vchiq_mmal_instance*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 int VAR_3;
 struct vchiq_mmal_instance *VAR_4 = VAR_1[0]->instance;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_1[VAR_3]);
  VAR_1[VAR_3] = ((void*)0);
 }
 FUNC_1(VAR_4);

 return 0;
}
