
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmem_device {int data_offset; int bb; void* virt_addr; } ;
struct page {int dummy; } ;
typedef int sector_t ;
typedef int phys_addr_t ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *,int,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct pmem_device*,int,unsigned int) ;
 int FUNC_4 (struct page*,unsigned int,void*,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (void*,struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static blk_status_t FUNC_7(struct pmem_device *VAR_2, struct page *VAR_3,
   unsigned int VAR_4, unsigned int VAR_5, unsigned int VAR_6,
   sector_t VAR_7)
{
 blk_status_t VAR_8 = VAR_1;
 bool VAR_9 = 0;
 phys_addr_t VAR_10 = VAR_7 * 512 + VAR_2->data_offset;
 void *VAR_11 = VAR_2->virt_addr + VAR_10;

 if (FUNC_5(FUNC_1(&VAR_2->bb, VAR_7, VAR_4)))
  VAR_9 = 1;

 if (!FUNC_2(VAR_6)) {
  if (FUNC_5(VAR_9))
   VAR_8 = VAR_0;
  else {
   VAR_8 = FUNC_4(VAR_3, VAR_5, VAR_11, VAR_4);
   FUNC_0(VAR_3);
  }
 } else {
  FUNC_0(VAR_3);
  FUNC_6(VAR_11, VAR_3, VAR_5, VAR_4);
  if (FUNC_5(VAR_9)) {
   VAR_8 = FUNC_3(VAR_2, VAR_10, VAR_4);
   FUNC_6(VAR_11, VAR_3, VAR_5, VAR_4);
  }
 }

 return VAR_8;
}
