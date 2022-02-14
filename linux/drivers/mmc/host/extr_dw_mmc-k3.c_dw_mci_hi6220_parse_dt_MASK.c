
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct k3_priv {scalar_t__ ctrl_id; int * reg; } ;
struct dw_mci {struct k3_priv* priv; TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 struct k3_priv* FUNC_1 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int * FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct dw_mci *VAR_4)
{
 struct k3_priv *VAR_5;

 VAR_5 = FUNC_1(VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->reg = FUNC_3(VAR_4->dev->of_node,
      "hisilicon,peripheral-syscon");
 if (FUNC_0(VAR_5->reg))
  VAR_5->reg = ((void*)0);

 VAR_5->ctrl_id = FUNC_2(VAR_4->dev->of_node, "mshc");
 if (VAR_5->ctrl_id < 0)
  VAR_5->ctrl_id = 0;

 if (VAR_5->ctrl_id >= VAR_3)
  return -VAR_0;

 VAR_4->priv = VAR_5;
 return 0;
}
