
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vudc {struct vep* ep; } ;
struct vep {TYPE_1__* desc; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;

struct vep *FUNC_0(struct vudc *VAR_2, u8 VAR_3)
{
 int VAR_4;

 if ((VAR_3 & ~VAR_0) == 0)
  return &VAR_2->ep[0];

 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++) {
  struct vep *VAR_5 = &VAR_2->ep[VAR_4];

  if (!VAR_5->desc)
   continue;
  if (VAR_5->desc->bEndpointAddress == VAR_3)
   return VAR_5;
 }
 return ((void*)0);
}
