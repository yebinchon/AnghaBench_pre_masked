
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct zorro_device_id {int dummy; } ;
struct TYPE_4__ {scalar_t__ start; } ;
struct zorro_dev {char* name; TYPE_2__ resource; int dev; int slotaddr; } ;
struct TYPE_3__ {int wordlength; int dcr_val; int rcr_val; int* reg_offsets; int block_input; int block_output; int check_irq; int flags; } ;
struct xsurf100_ax_plat_data {void* base_regs; void* data_area; TYPE_1__ ax; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
typedef int ax88796_data ;


 int VAR_0 ;
 struct resource FUNC_0 (scalar_t__,int) ;
 struct resource FUNC_1 (int ,int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct platform_device*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,char*,...) ;
 void* FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (void*) ;
 int VAR_8 ;
 int FUNC_6 (struct xsurf100_ax_plat_data*,int ,int) ;
 struct platform_device* FUNC_7 (int *,char*,int ,struct resource*,int,struct xsurf100_ax_plat_data*,int) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct zorro_dev*,struct platform_device*) ;

__attribute__((used)) static int FUNC_11(struct zorro_dev *VAR_11,
     const struct zorro_device_id *VAR_12)
{
 struct platform_device *VAR_13;
 struct xsurf100_ax_plat_data VAR_14;
 struct resource VAR_15[2] = {
  FUNC_1(VAR_4, 1, ((void*)0),
     VAR_2 | VAR_3),
  FUNC_0(VAR_11->resource.start + VAR_5,
          4 * 0x20)
 };
 int VAR_16;



 static u32 VAR_17[32];
 int VAR_18 = 0;






 if (!FUNC_9(VAR_11->resource.start, 0x100, VAR_11->name)) {
  FUNC_3(&VAR_11->dev, "cannot reserve X-Surf 100 control registers\n");
  return -VAR_1;
 }

 if (!FUNC_9(VAR_11->resource.start +
    VAR_6,
    VAR_7,
    "X-Surf 100 32-bit data access")) {
  FUNC_3(&VAR_11->dev, "cannot reserve 32-bit area\n");
  VAR_18 = -VAR_1;
  goto exit_req;
 }

 for (VAR_16 = 0; VAR_16 < 0x20; VAR_16++)
  VAR_17[VAR_16] = 4 * VAR_16;

 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.ax.flags = VAR_0;
 VAR_14.ax.wordlength = 2;
 VAR_14.ax.dcr_val = 0x48;
 VAR_14.ax.rcr_val = 0x40;
 VAR_14.ax.reg_offsets = VAR_17;
 VAR_14.ax.check_irq = VAR_8;
 VAR_14.base_regs = FUNC_4(VAR_11->resource.start, 0x100);


 if (!VAR_14.base_regs) {
  FUNC_3(&VAR_11->dev, "Cannot ioremap area %pR (registers)\n",
   &VAR_11->resource);

  VAR_18 = -VAR_1;
  goto exit_req2;
 }

 VAR_14.data_area = FUNC_4(VAR_11->resource.start +
   VAR_6, VAR_7);


 if (!VAR_14.data_area) {
  FUNC_3(&VAR_11->dev,
   "Cannot ioremap area %pR offset %x (32-bit access)\n",
   &VAR_11->resource, VAR_6);

  VAR_18 = -VAR_1;
  goto exit_mem;
 }

 VAR_14.ax.block_output = VAR_10;
 VAR_14.ax.block_input = VAR_9;

 VAR_13 = FUNC_7(&VAR_11->dev, "ax88796",
       VAR_11->slotaddr, VAR_15, 2,
       &VAR_14,
       sizeof(VAR_14));

 if (FUNC_2(VAR_13)) {
  FUNC_3(&VAR_11->dev, "cannot register platform device\n");
  VAR_18 = -VAR_1;
  goto exit_mem2;
 }

 FUNC_10(VAR_11, VAR_13);

 if (!VAR_18)
  return 0;

 exit_mem2:
 FUNC_5(VAR_14.data_area);

 exit_mem:
 FUNC_5(VAR_14.base_regs);

 exit_req2:
 FUNC_8(VAR_11->resource.start + VAR_6,
      VAR_7);

 exit_req:
 FUNC_8(VAR_11->resource.start, 0x100);

 return VAR_18;
}
