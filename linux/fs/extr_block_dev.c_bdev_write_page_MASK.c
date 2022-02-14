
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {int dummy; } ;
struct block_device_operations {int (* rw_page ) (struct block_device*,scalar_t__,struct page*,int ) ;} ;
struct block_device {int bd_queue; TYPE_1__* bd_disk; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {struct block_device_operations* fops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct block_device*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct block_device*,scalar_t__,struct page*,int ) ;
 int FUNC_8 (struct page*) ;

int FUNC_9(struct block_device *VAR_2, sector_t VAR_3,
   struct page *VAR_4, struct writeback_control *VAR_5)
{
 int VAR_6;
 const struct block_device_operations *VAR_7 = VAR_2->bd_disk->fops;

 if (!VAR_7->rw_page || FUNC_0(VAR_2))
  return -VAR_0;
 VAR_6 = FUNC_1(VAR_2->bd_queue, 0);
 if (VAR_6)
  return VAR_6;

 FUNC_6(VAR_4);
 VAR_6 = VAR_7->rw_page(VAR_2, VAR_3 + FUNC_5(VAR_2), VAR_4,
         VAR_1);
 if (VAR_6) {
  FUNC_4(VAR_4);
 } else {
  FUNC_3(VAR_4);
  FUNC_8(VAR_4);
 }
 FUNC_2(VAR_2->bd_queue);
 return VAR_6;
}
