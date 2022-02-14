
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int flags; scalar_t__ start; } ;
struct platform_device {int num_resources; struct resource* resource; } ;
struct TYPE_4__ {scalar_t__ mapbase; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct platform_device*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_3)
{
 struct resource *VAR_4 = VAR_3->resource;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_resources; VAR_5++, VAR_4++)
  if (VAR_4->flags & VAR_0)
   break;

 if (VAR_5 < VAR_3->num_resources) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   if (VAR_2[VAR_5].port.mapbase != VAR_4->start)
    continue;

   FUNC_0(&VAR_2[VAR_5], VAR_3);
   break;
  }
 }

 return 0;
}
