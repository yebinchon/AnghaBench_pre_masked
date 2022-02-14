
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct da8xx_rproc {int num_mems; TYPE_1__* mem; } ;
struct TYPE_2__ {int bus_addr; int dev_addr; int cpu_addr; int size; } ;


 int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,char const* const,int*,int ,int ,int) ;
 int FUNC_4 (struct device*,char*,char const* const) ;
 int FUNC_5 (struct device*,struct resource*) ;
 TYPE_1__* FUNC_6 (struct device*,int,int,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,char const* const) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4,
          struct da8xx_rproc *VAR_5)
{
 static const char * const VAR_6[] = {"l2sram", "l1pram", "l1dram"};
 int VAR_7 = FUNC_0(VAR_6);
 struct device *VAR_8 = &VAR_4->dev;
 struct resource *VAR_9;
 int VAR_10;

 VAR_5->mem = FUNC_6(VAR_8, VAR_7, sizeof(*VAR_5->mem),
       VAR_2);
 if (!VAR_5->mem)
  return -VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = FUNC_7(VAR_4, VAR_3,
         VAR_6[VAR_10]);
  VAR_5->mem[VAR_10].cpu_addr = FUNC_5(VAR_8, VAR_9);
  if (FUNC_1(VAR_5->mem[VAR_10].cpu_addr)) {
   FUNC_4(VAR_8, "failed to parse and map %s memory\n",
    VAR_6[VAR_10]);
   return FUNC_2(VAR_5->mem[VAR_10].cpu_addr);
  }
  VAR_5->mem[VAR_10].bus_addr = VAR_9->start;
  VAR_5->mem[VAR_10].dev_addr =
    VAR_9->start & VAR_0;
  VAR_5->mem[VAR_10].size = FUNC_8(VAR_9);

  FUNC_3(VAR_8, "memory %8s: bus addr %pa size 0x%zx va %p da 0x%x\n",
   VAR_6[VAR_10], &VAR_5->mem[VAR_10].bus_addr,
   VAR_5->mem[VAR_10].size, VAR_5->mem[VAR_10].cpu_addr,
   VAR_5->mem[VAR_10].dev_addr);
 }
 VAR_5->num_mems = VAR_7;

 return 0;
}
