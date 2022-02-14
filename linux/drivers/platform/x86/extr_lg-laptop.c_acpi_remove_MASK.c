
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct acpi_device {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_7 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_8)
{
 FUNC_3(&VAR_5->dev.kobj, &VAR_2);
 if (VAR_3 & VAR_0)
  FUNC_0(&VAR_4);

 if (VAR_3 & VAR_1)
  FUNC_0(&VAR_7);

 FUNC_4();
 FUNC_1(VAR_5);
 VAR_5 = ((void*)0);
 FUNC_2(&VAR_6);

 return 0;
}
