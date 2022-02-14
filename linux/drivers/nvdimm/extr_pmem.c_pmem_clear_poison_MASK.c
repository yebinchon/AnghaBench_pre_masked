
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmem_device {int data_offset; int phys_addr; int virt_addr; scalar_t__ bb_state; int bb; } ;
struct device {int dummy; } ;
typedef int sector_t ;
typedef int phys_addr_t ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int *,int,long) ;
 int FUNC_2 (struct device*,char*,unsigned long long,long,char*) ;
 int FUNC_3 (struct pmem_device*,int,long) ;
 long FUNC_4 (struct device*,int,unsigned int) ;
 int FUNC_5 (scalar_t__) ;
 struct device* FUNC_6 (struct pmem_device*) ;

__attribute__((used)) static blk_status_t FUNC_7(struct pmem_device *VAR_2,
  phys_addr_t VAR_3, unsigned int VAR_4)
{
 struct device *VAR_5 = FUNC_6(VAR_2);
 sector_t VAR_6;
 long VAR_7;
 blk_status_t VAR_8 = VAR_1;

 VAR_6 = (VAR_3 - VAR_2->data_offset) / 512;

 VAR_7 = FUNC_4(VAR_5, VAR_2->phys_addr + VAR_3, VAR_4);
 if (VAR_7 < VAR_4)
  VAR_8 = VAR_0;
 if (VAR_7 > 0 && VAR_7 / 512) {
  FUNC_3(VAR_2, VAR_2->phys_addr + VAR_3, VAR_7);
  VAR_7 /= 512;
  FUNC_2(VAR_5, "%#llx clear %ld sector%s\n",
    (unsigned long long) VAR_6, VAR_7,
    VAR_7 > 1 ? "s" : "");
  FUNC_1(&VAR_2->bb, VAR_6, VAR_7);
  if (VAR_2->bb_state)
   FUNC_5(VAR_2->bb_state);
 }

 FUNC_0(VAR_2->virt_addr + VAR_3, VAR_4);

 return VAR_8;
}
