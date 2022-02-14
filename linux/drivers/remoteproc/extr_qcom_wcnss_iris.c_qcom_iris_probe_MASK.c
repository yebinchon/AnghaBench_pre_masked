
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct regulator_bulk_data {int dummy; } ;
struct qcom_wcnss {int dummy; } ;
struct qcom_iris {int num_vregs; TYPE_4__* vregs; int xo_clk; } ;
struct TYPE_11__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct iris_data {int num_vregs; int use_48mhz_xo; TYPE_1__* vregs; } ;
struct TYPE_12__ {int consumer; int supply; } ;
struct TYPE_10__ {scalar_t__ load_uA; scalar_t__ max_voltage; int min_voltage; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct qcom_wcnss* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 TYPE_4__* FUNC_5 (TYPE_2__*,int,int,int ) ;
 struct qcom_iris* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,int,TYPE_4__*) ;
 struct iris_data* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct qcom_wcnss*,struct qcom_iris*,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_3)
{
 const struct iris_data *VAR_4;
 struct qcom_wcnss *VAR_5;
 struct qcom_iris *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(&VAR_3->dev, sizeof(struct qcom_iris), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_4 = FUNC_8(&VAR_3->dev);
 VAR_5 = FUNC_3(VAR_3->dev.parent);

 VAR_6->xo_clk = FUNC_4(&VAR_3->dev, "xo");
 if (FUNC_0(VAR_6->xo_clk)) {
  if (FUNC_1(VAR_6->xo_clk) != -VAR_1)
   FUNC_2(&VAR_3->dev, "failed to acquire xo clk\n");
  return FUNC_1(VAR_6->xo_clk);
 }

 VAR_6->num_vregs = VAR_4->num_vregs;
 VAR_6->vregs = FUNC_5(&VAR_3->dev,
       VAR_6->num_vregs,
       sizeof(struct regulator_bulk_data),
       VAR_2);
 if (!VAR_6->vregs)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_vregs; VAR_8++)
  VAR_6->vregs[VAR_8].supply = VAR_4->vregs[VAR_8].name;

 VAR_7 = FUNC_7(&VAR_3->dev, VAR_6->num_vregs, VAR_6->vregs);
 if (VAR_7) {
  FUNC_2(&VAR_3->dev, "failed to get regulators\n");
  return VAR_7;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->num_vregs; VAR_8++) {
  if (VAR_4->vregs[VAR_8].max_voltage)
   FUNC_11(VAR_6->vregs[VAR_8].consumer,
           VAR_4->vregs[VAR_8].min_voltage,
           VAR_4->vregs[VAR_8].max_voltage);

  if (VAR_4->vregs[VAR_8].load_uA)
   FUNC_10(VAR_6->vregs[VAR_8].consumer,
        VAR_4->vregs[VAR_8].load_uA);
 }

 FUNC_9(VAR_5, VAR_6, VAR_4->use_48mhz_xo);

 return 0;
}
