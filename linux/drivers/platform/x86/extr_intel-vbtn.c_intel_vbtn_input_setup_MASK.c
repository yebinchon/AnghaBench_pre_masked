
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct intel_vbtn_priv {TYPE_3__* input_dev; } ;
struct TYPE_7__ {int bustype; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {char* name; TYPE_2__ id; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_vbtn_priv* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct intel_vbtn_priv *VAR_4 = FUNC_0(&VAR_3->dev);
 int VAR_5;

 VAR_4->input_dev = FUNC_1(&VAR_3->dev);
 if (!VAR_4->input_dev)
  return -VAR_1;

 VAR_5 = FUNC_3(VAR_4->input_dev, VAR_2, ((void*)0));
 if (VAR_5)
  return VAR_5;

 VAR_4->input_dev->dev.parent = &VAR_3->dev;
 VAR_4->input_dev->name = "Intel Virtual Button driver";
 VAR_4->input_dev->id.bustype = VAR_0;

 return FUNC_2(VAR_4->input_dev);
}
