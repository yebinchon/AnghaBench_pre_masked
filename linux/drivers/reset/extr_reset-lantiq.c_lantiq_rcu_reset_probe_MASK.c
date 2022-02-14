
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {int nr_resets; int of_reset_n_cells; int of_xlate; int of_node; int owner; int * ops; } ;
struct lantiq_rcu_reset_priv {TYPE_1__ rcdev; TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lantiq_rcu_reset_priv* FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (struct platform_device*,struct lantiq_rcu_reset_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct platform_device*,struct lantiq_rcu_reset_priv*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 struct lantiq_rcu_reset_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = &VAR_5->dev;
 FUNC_2(VAR_5, VAR_6);

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6->rcdev.ops = &VAR_3;
 VAR_6->rcdev.owner = VAR_2;
 VAR_6->rcdev.of_node = VAR_5->dev.of_node;
 VAR_6->rcdev.nr_resets = 32;
 VAR_6->rcdev.of_xlate = VAR_4;
 VAR_6->rcdev.of_reset_n_cells = 2;

 return FUNC_3(&VAR_6->rcdev);
}
