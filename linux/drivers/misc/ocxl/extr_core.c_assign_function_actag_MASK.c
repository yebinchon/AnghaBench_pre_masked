
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {int dvsec_function_pos; } ;
struct ocxl_fn {void* actag_enabled; void* actag_base; TYPE_2__ dev; TYPE_1__ config; void* actag_supported; } ;


 int FUNC_0 (TYPE_2__*,char*,void*,void*) ;
 int FUNC_1 (struct pci_dev*,void**,void**,void**) ;
 int FUNC_2 (struct pci_dev*,int ,void*,void*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ocxl_fn *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_3(VAR_0->dev.parent);
 u16 VAR_2, VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_2, &VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_0->actag_base = VAR_2;
 VAR_0->actag_enabled = VAR_3;
 VAR_0->actag_supported = VAR_4;

 FUNC_2(VAR_1, VAR_0->config.dvsec_function_pos,
   VAR_0->actag_base, VAR_0->actag_enabled);
 FUNC_0(&VAR_0->dev, "actag range starting at %d, enabled %d\n",
  VAR_0->actag_base, VAR_0->actag_enabled);
 return 0;
}
