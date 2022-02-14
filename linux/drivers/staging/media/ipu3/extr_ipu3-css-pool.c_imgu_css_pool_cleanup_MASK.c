
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_device {int dummy; } ;
struct imgu_css_pool {TYPE_1__* entry; } ;
struct TYPE_2__ {int param; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct imgu_device*,int *) ;

void FUNC_1(struct imgu_device *VAR_1, struct imgu_css_pool *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1, &VAR_2->entry[VAR_3].param);
}
