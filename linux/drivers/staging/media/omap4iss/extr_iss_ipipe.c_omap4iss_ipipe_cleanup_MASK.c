
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct iss_ipipe_device {TYPE_1__ subdev; } ;
struct iss_device {struct iss_ipipe_device ipipe; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct iss_device *VAR_0)
{
 struct iss_ipipe_device *VAR_1 = &VAR_0->ipipe;

 FUNC_0(&VAR_1->subdev.entity);
}
