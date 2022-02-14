
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fujitsu_laptop {TYPE_2__* input; int phys; } ;
struct acpi_device {int dev; } ;
struct TYPE_5__ {int bustype; } ;
struct TYPE_6__ {TYPE_1__ id; int phys; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 struct fujitsu_laptop* FUNC_2 (struct acpi_device*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_6 (int ,int,char*,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct acpi_device *VAR_4)
{
 struct fujitsu_laptop *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 VAR_5->input = FUNC_3(&VAR_4->dev);
 if (!VAR_5->input)
  return -VAR_1;

 FUNC_6(VAR_5->phys, sizeof(VAR_5->phys), "%s/input0",
   FUNC_0(VAR_4));

 VAR_5->input->name = FUNC_1(VAR_4);
 VAR_5->input->phys = VAR_5->phys;
 VAR_5->input->id.bustype = VAR_0;

 FUNC_4(VAR_2);
 VAR_6 = FUNC_7(VAR_5->input, VAR_3, ((void*)0));
 if (VAR_6)
  return VAR_6;

 return FUNC_5(VAR_5->input);
}
