
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; int end; int start; int name; } ;
struct platform_device_info {int num_res; int size_data; struct musb_hdrc_platform_data* data; struct resource* res; int * parent; } ;
struct platform_device {int dev; TYPE_1__* resource; } ;
struct musb_hdrc_platform_data {int * platform_ops; } ;
struct davinci_glue {struct platform_device* musb; struct platform_device* clk; int * dev; } ;
struct clk {int dev; TYPE_1__* resource; } ;
struct TYPE_2__ {int flags; int end; int start; int name; } ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 struct platform_device_info VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,char*,...) ;
 struct musb_hdrc_platform_data* FUNC_6 (int *) ;
 struct platform_device* FUNC_7 (int *,char*) ;
 struct davinci_glue* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct resource*,int,int) ;
 struct platform_device* FUNC_10 (struct platform_device_info*) ;
 int FUNC_11 (struct platform_device*,struct davinci_glue*) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_4)
{
 struct resource VAR_5[3];
 struct musb_hdrc_platform_data *VAR_6 = FUNC_6(&VAR_4->dev);
 struct platform_device *VAR_7;
 struct davinci_glue *VAR_8;
 struct platform_device_info VAR_9;
 struct clk *VAR_10;

 int VAR_11 = -VAR_0;

 VAR_8 = FUNC_8(&VAR_4->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  goto err0;

 VAR_10 = FUNC_7(&VAR_4->dev, "usb");
 if (FUNC_1(VAR_10)) {
  FUNC_5(&VAR_4->dev, "failed to get clock\n");
  VAR_11 = FUNC_2(VAR_10);
  goto err0;
 }

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11) {
  FUNC_5(&VAR_4->dev, "failed to enable clock\n");
  goto err0;
 }

 VAR_8->dev = &VAR_4->dev;
 VAR_8->clk = VAR_10;

 VAR_6->platform_ops = &VAR_3;

 FUNC_12();
 FUNC_11(VAR_4, VAR_8);

 FUNC_9(VAR_5, 0x00, sizeof(*VAR_5) *
   FUNC_0(VAR_5));

 VAR_5[0].name = VAR_4->resource[0].name;
 VAR_5[0].start = VAR_4->resource[0].start;
 VAR_5[0].end = VAR_4->resource[0].end;
 VAR_5[0].flags = VAR_4->resource[0].flags;

 VAR_5[1].name = VAR_4->resource[1].name;
 VAR_5[1].start = VAR_4->resource[1].start;
 VAR_5[1].end = VAR_4->resource[1].end;
 VAR_5[1].flags = VAR_4->resource[1].flags;





 VAR_5[2].name = VAR_4->resource[2].name;
 VAR_5[2].start = VAR_4->resource[2].start;
 VAR_5[2].end = VAR_4->resource[2].end;
 VAR_5[2].flags = VAR_4->resource[2].flags;

 VAR_9 = VAR_2;
 VAR_9.parent = &VAR_4->dev;
 VAR_9.res = VAR_5;
 VAR_9.num_res = FUNC_0(VAR_5);
 VAR_9.data = VAR_6;
 VAR_9.size_data = sizeof(*VAR_6);

 VAR_8->musb = VAR_7 = FUNC_10(&VAR_9);
 if (FUNC_1(VAR_7)) {
  VAR_11 = FUNC_2(VAR_7);
  FUNC_5(&VAR_4->dev, "failed to register musb device: %d\n", VAR_11);
  goto err1;
 }

 return 0;

err1:
 FUNC_3(VAR_10);

err0:
 return VAR_11;
}
