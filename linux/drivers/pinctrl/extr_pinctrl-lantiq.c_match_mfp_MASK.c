
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltq_pinmux_info {int num_mfp; TYPE_1__* mfp; } ;
struct TYPE_2__ {int pin; } ;



__attribute__((used)) static int FUNC_0(const struct ltq_pinmux_info *VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_mfp; VAR_2++) {
  if (VAR_0->mfp[VAR_2].pin == VAR_1)
   return VAR_2;
 }
 return -1;
}
