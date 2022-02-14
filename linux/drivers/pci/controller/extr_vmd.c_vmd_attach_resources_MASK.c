
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmd_dev {int * resources; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* resource; } ;
struct TYPE_3__ {int * child; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct vmd_dev *VAR_2)
{
 VAR_2->dev->resource[VAR_0].child = &VAR_2->resources[1];
 VAR_2->dev->resource[VAR_1].child = &VAR_2->resources[2];
}
