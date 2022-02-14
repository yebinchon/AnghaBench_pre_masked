
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_sci_resource {int sets; TYPE_2__* desc; } ;
struct TYPE_3__ {scalar_t__ dev_index; } ;
struct msi_desc {int list; TYPE_1__ inta; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int num; scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct msi_desc* FUNC_1 (struct device*,int,int *) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1,
           struct ti_sci_resource *VAR_2)
{
 struct msi_desc *VAR_3;
 int VAR_4, VAR_5, VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->sets; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_2->desc[VAR_4].num; VAR_5++) {
   VAR_3 = FUNC_1(VAR_1, 1, ((void*)0));
   if (!VAR_3) {
    FUNC_4(VAR_1);
    return -VAR_0;
   }

   VAR_3->inta.dev_index = VAR_2->desc[VAR_4].start + VAR_5;
   FUNC_0(&VAR_3->list);
   FUNC_3(&VAR_3->list, FUNC_2(VAR_1));
   VAR_6++;
  }
 }

 return VAR_6;
}
