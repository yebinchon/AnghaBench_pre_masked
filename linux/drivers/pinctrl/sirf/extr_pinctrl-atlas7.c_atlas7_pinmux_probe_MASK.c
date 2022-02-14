
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {char* name; int * confops; int * pmxops; int * pctlops; int npins; int pins; } ;
struct atlas7_pmx {int * regs; int pctl; TYPE_1__ pctl_desc; TYPE_7__* pctl_data; TYPE_2__* dev; int sys2pci_base; } ;
struct TYPE_10__ {int pads_cnt; int pads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_7__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,struct resource*) ;
 struct atlas7_pmx* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_8 (int *,char*) ;
 int FUNC_9 (struct device_node*,int) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*,struct atlas7_pmx*) ;
 int FUNC_12 (struct platform_device*,struct atlas7_pmx*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 int VAR_9, VAR_10;
 struct atlas7_pmx *VAR_11;
 struct device_node *VAR_12 = VAR_8->dev.of_node;
 u32 VAR_13 = VAR_0;
 struct device_node *VAR_14;
 struct resource VAR_15;


 VAR_11 = FUNC_5(&VAR_8->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;




 VAR_14 = FUNC_8(((void*)0), "sys2pci");
 if (!VAR_14)
  return -VAR_1;

 VAR_9 = FUNC_7(VAR_14, 0, &VAR_15);
 FUNC_10(VAR_14);
 if (VAR_9)
  return VAR_9;

 VAR_11->sys2pci_base = FUNC_4(&VAR_8->dev, &VAR_15);
 if (FUNC_0(VAR_11->sys2pci_base))
  return -VAR_2;

 VAR_11->dev = &VAR_8->dev;

 VAR_11->pctl_data = &VAR_4;
 VAR_11->pctl_desc.name = "pinctrl-atlas7";
 VAR_11->pctl_desc.pins = VAR_11->pctl_data->pads;
 VAR_11->pctl_desc.npins = VAR_11->pctl_data->pads_cnt;
 VAR_11->pctl_desc.pctlops = &VAR_6;
 VAR_11->pctl_desc.pmxops = &VAR_7;
 VAR_11->pctl_desc.confops = &VAR_5;

 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
  VAR_11->regs[VAR_10] = FUNC_9(VAR_12, VAR_10);
  if (!VAR_11->regs[VAR_10]) {
   FUNC_2(&VAR_8->dev,
    "can't map ioc bank#%d registers\n", VAR_10);
   VAR_9 = -VAR_2;
   goto unmap_io;
  }
 }


 VAR_11->pctl = FUNC_11(&VAR_11->pctl_desc, &VAR_8->dev, VAR_11);
 if (FUNC_0(VAR_11->pctl)) {
  FUNC_2(&VAR_8->dev, "could not register atlas7 pinmux driver\n");
  VAR_9 = FUNC_1(VAR_11->pctl);
  goto unmap_io;
 }

 FUNC_12(VAR_8, VAR_11);

 FUNC_3(&VAR_8->dev, "initialized atlas7 pinmux driver\n");

 return 0;

unmap_io:
 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
  if (!VAR_11->regs[VAR_10])
   break;
  FUNC_6(VAR_11->regs[VAR_10]);
 }

 return VAR_9;
}
