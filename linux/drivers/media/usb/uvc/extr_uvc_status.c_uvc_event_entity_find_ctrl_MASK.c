
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct uvc_entity {unsigned int ncontrols; struct uvc_control* controls; } ;
struct TYPE_2__ {scalar_t__ selector; } ;
struct uvc_control {TYPE_1__ info; } ;



__attribute__((used)) static struct uvc_control *FUNC_0(struct uvc_entity *VAR_0,
            u8 VAR_1)
{
 struct uvc_control *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_0->controls; VAR_3 < VAR_0->ncontrols; VAR_3++, VAR_2++)
  if (VAR_2->info.selector == VAR_1)
   return VAR_2;

 return ((void*)0);
}
