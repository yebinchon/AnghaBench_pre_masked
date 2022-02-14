
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


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
 scalar_t__ FUNC_3 (struct block_device*) ;
 int FUNC_4 (struct block_device*,scalar_t__,struct page*,int ) ;

int FUNC_5(struct block_device *VAR_2, sector_t VAR_3,
   struct page *VAR_4)
{
 const struct block_device_operations *VAR_5 = VAR_2->bd_disk->fops;
 int VAR_6 = -VAR_0;

 if (!VAR_5->rw_page || FUNC_0(VAR_2))
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2->bd_queue, 0);
 if (VAR_6)
  return VAR_6;
 VAR_6 = VAR_5->rw_page(VAR_2, VAR_3 + FUNC_3(VAR_2), VAR_4,
         VAR_1);
 FUNC_2(VAR_2->bd_queue);
 return VAR_6;
}
