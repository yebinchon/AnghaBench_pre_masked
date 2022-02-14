
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct cm_data {TYPE_1__* res; int base; } ;
struct cal_dev {struct platform_device* pdev; } ;
struct TYPE_3__ {int end; int start; int name; } ;


 int VAR_0 ;
 struct cm_data* FUNC_0 (int ) ;
 struct cm_data* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,struct cal_dev*,char*,int ,int *,int *) ;
 int FUNC_4 (struct cal_dev*,char*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 struct cm_data* FUNC_6 (int *,int,int ) ;
 TYPE_1__* FUNC_7 (struct platform_device*,int ,char*) ;

__attribute__((used)) static struct cm_data *FUNC_8(struct cal_dev *VAR_3)
{
 struct platform_device *VAR_4 = VAR_3->pdev;
 struct cm_data *VAR_5;

 VAR_5 = FUNC_6(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_5->res = FUNC_7(VAR_4, VAR_2,
      "camerrx_control");
 VAR_5->base = FUNC_5(&VAR_4->dev, VAR_5->res);
 if (FUNC_2(VAR_5->base)) {
  FUNC_4(VAR_3, "failed to ioremap\n");
  return FUNC_0(VAR_5->base);
 }

 FUNC_3(1, VAR_3, "ioresource %s at %pa - %pa\n",
  VAR_5->res->name, &VAR_5->res->start, &VAR_5->res->end);

 return VAR_5;
}
