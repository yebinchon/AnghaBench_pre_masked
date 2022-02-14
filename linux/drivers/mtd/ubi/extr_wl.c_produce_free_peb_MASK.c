
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb_node; } ;
struct ubi_device {int wl_lock; scalar_t__ works_count; TYPE_1__ free; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ubi_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ubi_device *VAR_0)
{
 int VAR_1;

 while (!VAR_0->free.rb_node && VAR_0->works_count) {
  FUNC_3(&VAR_0->wl_lock);

  FUNC_0("do one work synchronously");
  VAR_1 = FUNC_1(VAR_0);

  FUNC_2(&VAR_0->wl_lock);
  if (VAR_1)
   return VAR_1;
 }

 return 0;
}
