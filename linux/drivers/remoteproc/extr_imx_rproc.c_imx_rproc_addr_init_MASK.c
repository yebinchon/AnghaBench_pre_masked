
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct imx_rproc_dcfg {int att_size; struct imx_rproc_att* att; } ;
struct imx_rproc_att {int flags; int size; int sa; } ;
struct imx_rproc {TYPE_1__* mem; struct imx_rproc_dcfg* dcfg; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int size; int sys_addr; int cpu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ,int ) ;
 int FUNC_4 (struct device*,struct resource*) ;
 int FUNC_5 (struct device_node*,int ,struct resource*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_7 (struct device_node*,char*,int) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct imx_rproc *VAR_3,
          struct platform_device *VAR_4)
{
 const struct imx_rproc_dcfg *VAR_5 = VAR_3->dcfg;
 struct device *VAR_6 = &VAR_4->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 int VAR_8, VAR_9 = 0, VAR_10, VAR_11;


 for (VAR_8 = 0; VAR_8 < VAR_5->att_size; VAR_8++) {
  const struct imx_rproc_att *VAR_12 = &VAR_5->att[VAR_8];

  if (!(VAR_12->flags & VAR_0))
   continue;

  if (VAR_9 >= VAR_2)
   break;

  VAR_3->mem[VAR_9].cpu_addr = FUNC_3(&VAR_4->dev,
           VAR_12->sa, VAR_12->size);
  if (!VAR_3->mem[VAR_9].cpu_addr) {
   FUNC_2(VAR_6, "devm_ioremap_resource failed\n");
   return -VAR_1;
  }
  VAR_3->mem[VAR_9].sys_addr = VAR_12->sa;
  VAR_3->mem[VAR_9].size = VAR_12->size;
  VAR_9++;
 }


 VAR_11 = FUNC_6(VAR_7, "memory-region", ((void*)0));
 if (VAR_11 <= 0)
  return 0;


 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  struct device_node *VAR_13;
  struct resource VAR_14;

  VAR_13 = FUNC_7(VAR_7, "memory-region", VAR_8);
  VAR_10 = FUNC_5(VAR_13, 0, &VAR_14);
  if (VAR_10) {
   FUNC_2(VAR_6, "unable to resolve memory region\n");
   return VAR_10;
  }

  if (VAR_9 >= VAR_2)
   break;

  VAR_3->mem[VAR_9].cpu_addr = FUNC_4(&VAR_4->dev, &VAR_14);
  if (FUNC_0(VAR_3->mem[VAR_9].cpu_addr)) {
   FUNC_2(VAR_6, "devm_ioremap_resource failed\n");
   VAR_10 = FUNC_1(VAR_3->mem[VAR_9].cpu_addr);
   return VAR_10;
  }
  VAR_3->mem[VAR_9].sys_addr = VAR_14.start;
  VAR_3->mem[VAR_9].size = FUNC_8(&VAR_14);
  VAR_9++;
 }

 return 0;
}
