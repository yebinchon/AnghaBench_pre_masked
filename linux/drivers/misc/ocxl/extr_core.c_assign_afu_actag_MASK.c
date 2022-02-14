
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_3__ {int parent; } ;
struct ocxl_fn {int actag_enabled; int actag_supported; scalar_t__ actag_base; TYPE_1__ dev; } ;
struct TYPE_4__ {int actag_supported; int dvsec_afu_control_pos; } ;
struct ocxl_afu {int actag_enabled; scalar_t__ actag_base; TYPE_2__ config; struct ocxl_fn* fn; } ;


 int FUNC_0 (int *,char*,scalar_t__,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct ocxl_fn*,int) ;
 int FUNC_3 (struct pci_dev*,int ,scalar_t__,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ocxl_afu *VAR_0)
{
 struct ocxl_fn *VAR_1 = VAR_0->fn;
 int VAR_2, VAR_3;
 struct pci_dev *VAR_4 = FUNC_4(VAR_1->dev.parent);





 VAR_2 = VAR_0->config.actag_supported *
  VAR_1->actag_enabled / VAR_1->actag_supported;
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_1(&VAR_4->dev, "Can't allocate %d actags for AFU: %d\n",
   VAR_2, VAR_3);
  return VAR_3;
 }
 VAR_0->actag_base = VAR_1->actag_base + VAR_3;
 VAR_0->actag_enabled = VAR_2;

 FUNC_3(VAR_4, VAR_0->config.dvsec_afu_control_pos,
    VAR_0->actag_base, VAR_0->actag_enabled);
 FUNC_0(&VAR_4->dev, "actag base=%d enabled=%d\n",
  VAR_0->actag_base, VAR_0->actag_enabled);
 return 0;
}
