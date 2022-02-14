
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipml200_dev {scalar_t__ rf; int bd; } ;
struct acpi_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct ipml200_dev* FUNC_1 (int *) ;
 int FUNC_2 (struct ipml200_dev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_0)
{
 struct ipml200_dev *VAR_1;

 VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1->bd);

 if (VAR_1->rf) {
  FUNC_4(VAR_1->rf);
  FUNC_3(VAR_1->rf);
 }

 FUNC_2(VAR_1);

 return 0;
}
