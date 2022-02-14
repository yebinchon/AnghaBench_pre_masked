
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct cc_data {TYPE_1__* res; int base; } ;
struct cal_dev {struct platform_device* pdev; } ;
struct TYPE_3__ {int end; int start; int name; } ;


 int VAR_0 ;
 struct cc_data* FUNC_0 (int ) ;
 struct cc_data* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,struct cal_dev*,char*,int ,int *,int *) ;
 int FUNC_4 (struct cal_dev*,char*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 struct cc_data* FUNC_6 (int *,int,int ) ;
 TYPE_1__* FUNC_7 (struct platform_device*,int ,char*) ;

__attribute__((used)) static struct cc_data *FUNC_8(struct cal_dev *VAR_3, unsigned int VAR_4)
{
 struct platform_device *VAR_5 = VAR_3->pdev;
 struct cc_data *VAR_6;

 VAR_6 = FUNC_6(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_6->res = FUNC_7(VAR_5,
            VAR_2,
            (VAR_4 == 0) ?
      "cal_rx_core0" :
      "cal_rx_core1");
 VAR_6->base = FUNC_5(&VAR_5->dev, VAR_6->res);
 if (FUNC_2(VAR_6->base)) {
  FUNC_4(VAR_3, "failed to ioremap\n");
  return FUNC_0(VAR_6->base);
 }

 FUNC_3(1, VAR_3, "ioresource %s at %pa - %pa\n",
  VAR_6->res->name, &VAR_6->res->start, &VAR_6->res->end);

 return VAR_6;
}
