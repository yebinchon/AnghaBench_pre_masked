
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct wmi_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct wmi_device *VAR_2,
           const void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_2->dev.kobj, &VAR_1);
 FUNC_0(&VAR_2->dev.kobj, VAR_0);
 return VAR_4;
}
