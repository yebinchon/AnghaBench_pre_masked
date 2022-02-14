
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {TYPE_1__* resource; } ;
struct TYPE_4__ {int gadget; int * done; } ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 FUNC_0(VAR_0);

 VAR_1->done = &VAR_0;

 FUNC_2(&VAR_1->gadget);

 FUNC_3(&VAR_0);

 FUNC_1(VAR_2->resource[0].start,
   VAR_2->resource[0].end - VAR_2->resource[0].start + 1);

 return 0;
}
