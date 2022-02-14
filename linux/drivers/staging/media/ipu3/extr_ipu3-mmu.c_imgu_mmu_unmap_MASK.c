
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_mmu_info {int dummy; } ;
struct imgu_mmu {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 size_t FUNC_1 (struct imgu_mmu*,unsigned long,int ) ;
 int FUNC_2 (struct imgu_mmu*,int ) ;
 int FUNC_3 (int ,char*,unsigned long,size_t) ;
 int FUNC_4 (int ,char*,unsigned long,size_t) ;
 int VAR_2 ;
 struct imgu_mmu* FUNC_5 (struct imgu_mmu_info*) ;

size_t FUNC_6(struct imgu_mmu_info *VAR_3, unsigned long VAR_4,
        size_t VAR_5)
{
 struct imgu_mmu *VAR_6 = FUNC_5(VAR_3);
 size_t VAR_7, VAR_8 = 0;






 if (!FUNC_0(VAR_4 | VAR_5, VAR_1)) {
  FUNC_4(VAR_6->dev, "unaligned: iova 0x%lx size 0x%zx\n",
   VAR_4, VAR_5);
  return -VAR_0;
 }

 FUNC_3(VAR_6->dev, "unmap this: iova 0x%lx size 0x%zx\n", VAR_4, VAR_5);





 while (VAR_8 < VAR_5) {
  VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_1);
  if (!VAR_7)
   break;

  FUNC_3(VAR_6->dev, "unmapped: iova 0x%lx size 0x%zx\n",
   VAR_4, VAR_7);

  VAR_4 += VAR_7;
  VAR_8 += VAR_7;
 }

 FUNC_2(VAR_6, VAR_2);

 return VAR_8;
}
