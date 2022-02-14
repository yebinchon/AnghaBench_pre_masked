
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmem_device {int dummy; } ;
struct page {int dummy; } ;
struct block_device {TYPE_1__* bd_queue; } ;
typedef int sector_t ;
typedef scalar_t__ blk_status_t ;
struct TYPE_2__ {struct pmem_device* queuedata; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct page*,int ,int ) ;
 scalar_t__ FUNC_4 (struct pmem_device*,struct page*,int,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_1, sector_t VAR_2,
         struct page *VAR_3, unsigned int VAR_4)
{
 struct pmem_device *VAR_5 = VAR_1->bd_queue->queuedata;
 blk_status_t VAR_6;

 VAR_6 = FUNC_4(VAR_5, VAR_3, FUNC_1(VAR_3) * VAR_0,
     0, VAR_4, VAR_2);







 if (VAR_6 == 0)
  FUNC_3(VAR_3, FUNC_2(VAR_4), 0);

 return FUNC_0(VAR_6);
}
