
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_mmu_info {int dummy; } ;
struct imgu_mmu {int dev; } ;
typedef unsigned long phys_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (struct imgu_mmu*,unsigned long,unsigned long) ;
 int FUNC_2 (struct imgu_mmu*,int ) ;
 int FUNC_3 (int ,char*,unsigned long,unsigned long*,...) ;
 int FUNC_4 (int ,char*,unsigned long,unsigned long*,size_t) ;
 int VAR_2 ;
 struct imgu_mmu* FUNC_5 (struct imgu_mmu_info*) ;

int FUNC_6(struct imgu_mmu_info *VAR_3, unsigned long VAR_4,
   phys_addr_t VAR_5, size_t VAR_6)
{
 struct imgu_mmu *VAR_7 = FUNC_5(VAR_3);
 int VAR_8 = 0;






 if (!FUNC_0(VAR_4 | VAR_5 | VAR_6, VAR_1)) {
  FUNC_4(VAR_7->dev, "unaligned: iova 0x%lx pa %pa size 0x%zx\n",
   VAR_4, &VAR_5, VAR_6);
  return -VAR_0;
 }

 FUNC_3(VAR_7->dev, "map: iova 0x%lx pa %pa size 0x%zx\n",
  VAR_4, &VAR_5, VAR_6);

 while (VAR_6) {
  FUNC_3(VAR_7->dev, "mapping: iova 0x%lx pa %pa\n", VAR_4, &VAR_5);

  VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5);
  if (VAR_8)
   break;

  VAR_4 += VAR_1;
  VAR_5 += VAR_1;
  VAR_6 -= VAR_1;
 }

 FUNC_2(VAR_7, VAR_2);

 return VAR_8;
}
