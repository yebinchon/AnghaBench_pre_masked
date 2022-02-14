
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_reset_n_cells; int of_xlate; scalar_t__ of_node; int owner; int * ops; } ;
struct ti_sci_reset_data {TYPE_1__ rcdev; int idr; TYPE_2__* dev; int sci; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 struct ti_sci_reset_data* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*,struct ti_sci_reset_data*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct ti_sci_reset_data *VAR_7;

 if (!VAR_6->dev.of_node)
  return -VAR_0;

 VAR_7 = FUNC_2(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->sci = FUNC_3(&VAR_6->dev);
 if (FUNC_0(VAR_7->sci))
  return FUNC_1(VAR_7->sci);

 VAR_7->rcdev.ops = &VAR_5;
 VAR_7->rcdev.owner = VAR_3;
 VAR_7->rcdev.of_node = VAR_6->dev.of_node;
 VAR_7->rcdev.of_reset_n_cells = 2;
 VAR_7->rcdev.of_xlate = VAR_4;
 VAR_7->dev = &VAR_6->dev;
 FUNC_4(&VAR_7->idr);

 FUNC_5(VAR_6, VAR_7);

 return FUNC_6(&VAR_7->rcdev);
}
