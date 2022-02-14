
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imgu_device {int dummy; } ;
struct imgu_css_pool {unsigned int last; TYPE_1__* entry; } ;
struct TYPE_4__ {int * vaddr; } ;
struct TYPE_3__ {int valid; TYPE_2__ param; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct imgu_device*,struct imgu_css_pool*) ;
 int FUNC_1 (struct imgu_device*,TYPE_2__*,size_t) ;

int FUNC_2(struct imgu_device *VAR_2, struct imgu_css_pool *VAR_3,
         size_t VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3->entry[VAR_5].valid = 0;
  if (VAR_4 == 0) {
   VAR_3->entry[VAR_5].param.vaddr = ((void*)0);
   continue;
  }

  if (!FUNC_1(VAR_2, &VAR_3->entry[VAR_5].param, VAR_4))
   goto fail;
 }

 VAR_3->last = VAR_1;

 return 0;

fail:
 FUNC_0(VAR_2, VAR_3);
 return -VAR_0;
}
