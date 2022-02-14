
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {TYPE_1__* fops; } ;
struct block_device {int bd_mutex; struct block_device* bd_contains; struct gendisk* bd_disk; int * bd_part; int bd_openers; int bd_holders; int bd_part_count; } ;
typedef int fmode_t ;
struct TYPE_2__ {int (* release ) (struct gendisk*,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct gendisk*) ;
 int FUNC_8 (struct gendisk*,int ) ;
 int FUNC_9 (struct block_device*) ;

__attribute__((used)) static void FUNC_10(struct block_device *VAR_0, fmode_t VAR_1, int VAR_2)
{
 struct gendisk *VAR_3 = VAR_0->bd_disk;
 struct block_device *VAR_4 = ((void*)0);

 FUNC_5(&VAR_0->bd_mutex, VAR_2);
 if (VAR_2)
  VAR_0->bd_part_count--;

 if (!--VAR_0->bd_openers) {
  FUNC_0(VAR_0->bd_holders);
  FUNC_9(VAR_0);
  FUNC_4(VAR_0);

  FUNC_1(VAR_0);
 }
 if (VAR_0->bd_contains == VAR_0) {
  if (VAR_3->fops->release)
   VAR_3->fops->release(VAR_3, VAR_1);
 }
 if (!VAR_0->bd_openers) {
  FUNC_3(VAR_0->bd_part);
  VAR_0->bd_part = ((void*)0);
  VAR_0->bd_disk = ((void*)0);
  if (VAR_0 != VAR_0->bd_contains)
   VAR_4 = VAR_0->bd_contains;
  VAR_0->bd_contains = ((void*)0);

  FUNC_7(VAR_3);
 }
 FUNC_6(&VAR_0->bd_mutex);
 FUNC_2(VAR_0);
 if (VAR_4)
  FUNC_10(VAR_4, VAR_1, 1);
}
