
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct wmi_device {TYPE_1__ dev; } ;
struct bmof_priv {int bmofdata; int bmof_bin_attr; } ;


 struct bmof_priv* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct wmi_device *VAR_0)
{
 struct bmof_priv *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(&VAR_0->dev.kobj, &VAR_1->bmof_bin_attr);
 FUNC_1(VAR_1->bmofdata);
 return 0;
}
