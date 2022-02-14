
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int of_reset_n_cells; int of_xlate; struct device_node* of_node; int * ops; } ;
struct hi3660_reset_controller {TYPE_1__ rst; int map; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct hi3660_reset_controller* FUNC_3 (struct device*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct hi3660_reset_controller *VAR_5;
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 struct device *VAR_7 = &VAR_4->dev;

 VAR_5 = FUNC_3(VAR_7, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->map = FUNC_5(VAR_6, "hisi,rst-syscon");
 if (FUNC_0(VAR_5->map)) {
  FUNC_2(VAR_7, "failed to get hi3660,rst-syscon\n");
  return FUNC_1(VAR_5->map);
 }

 VAR_5->rst.ops = &VAR_2,
 VAR_5->rst.of_node = VAR_6;
 VAR_5->rst.of_reset_n_cells = 2;
 VAR_5->rst.of_xlate = VAR_3;

 return FUNC_4(&VAR_5->rst);
}
