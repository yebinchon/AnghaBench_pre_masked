
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsoc_device_region {int device_name; scalar_t__ region_begin_offset; } ;
struct fd_scoped_permission {int owned_value; scalar_t__ owner_offset; int end_offset; int begin_offset; } ;
typedef int atomic_t ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int ,int ,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct vsoc_device_region *VAR_2,
    struct fd_scoped_permission *VAR_3)
{
 atomic_t *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 if (!VAR_3)
  return;
 VAR_4 = (atomic_t *)FUNC_2
  (VAR_2->region_begin_offset + VAR_3->owner_offset);
 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5 != VAR_3->owned_value)
  FUNC_1(&VAR_1.dev->dev,
   "%x-%x: owner (%s) %x: expected to be %x was %x",
   VAR_3->begin_offset, VAR_3->end_offset,
   VAR_2->device_name, VAR_3->owner_offset,
   VAR_3->owned_value, VAR_5);
}
