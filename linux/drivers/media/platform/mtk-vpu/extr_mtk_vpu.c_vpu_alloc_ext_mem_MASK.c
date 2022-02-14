
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_vpu {TYPE_1__* extmem; scalar_t__ enable_4GB; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int pa; int va; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,char*,unsigned long long,int ) ;
 int FUNC_2 (struct device*,size_t,int*,int ) ;
 int FUNC_3 (struct mtk_vpu*,int,int) ;

__attribute__((used)) static int FUNC_4(struct mtk_vpu *VAR_8, u32 VAR_9)
{
 struct device *VAR_10 = VAR_8->dev;
 size_t VAR_11 = VAR_9 ? VAR_4 : VAR_5;
 u32 VAR_12 = VAR_9 ? VAR_2 : VAR_6;
 u32 VAR_13 = VAR_9 ? VAR_3 : VAR_7;
 u32 VAR_14 = VAR_8->enable_4GB ? 0x40000000 : 0;

 VAR_8->extmem[VAR_9].va = FUNC_2(VAR_10,
            VAR_11,
            &VAR_8->extmem[VAR_9].pa,
            VAR_1);
 if (!VAR_8->extmem[VAR_9].va) {
  FUNC_0(VAR_10, "Failed to allocate the extended program memory\n");
  return -VAR_0;
 }


 FUNC_3(VAR_8, 0x1, VAR_12);
 FUNC_3(VAR_8, (VAR_8->extmem[VAR_9].pa & 0xFFFFF000) + VAR_14,
         VAR_13);

 FUNC_1(VAR_10, "%s extend memory phy=0x%llx virt=0x%p\n",
   VAR_9 ? "Data" : "Program",
   (unsigned long long)VAR_8->extmem[VAR_9].pa,
   VAR_8->extmem[VAR_9].va);

 return 0;
}
