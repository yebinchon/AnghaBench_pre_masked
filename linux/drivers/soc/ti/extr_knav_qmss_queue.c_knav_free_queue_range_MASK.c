
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_range_info {int list; TYPE_1__* ops; } ;
struct knav_device {int dev; } ;
struct TYPE_2__ {int (* free_range ) (struct knav_range_info*) ;} ;


 int FUNC_0 (int ,struct knav_range_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct knav_range_info*) ;

__attribute__((used)) static void FUNC_3(struct knav_device *VAR_0,
      struct knav_range_info *VAR_1)
{
 if (VAR_1->ops && VAR_1->ops->free_range)
  VAR_1->ops->free_range(VAR_1);
 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_0->dev, VAR_1);
}
