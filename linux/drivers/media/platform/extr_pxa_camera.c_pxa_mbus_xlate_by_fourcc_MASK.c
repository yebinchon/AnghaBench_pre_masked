
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct pxa_camera_format_xlate {TYPE_1__* host_fmt; scalar_t__ code; } const pxa_camera_format_xlate ;
struct TYPE_2__ {unsigned int fourcc; } ;



__attribute__((used)) static const struct pxa_camera_format_xlate
*FUNC_0(struct pxa_camera_format_xlate *VAR_0,
     unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].code; VAR_2++)
  if (VAR_0[VAR_2].host_fmt->fourcc == VAR_1)
   return VAR_0 + VAR_2;
 return ((void*)0);
}
