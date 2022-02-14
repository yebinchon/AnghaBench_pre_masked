
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fujitsu_bl {TYPE_2__* input; int phys; } ;
struct acpi_device {int dev; } ;
struct TYPE_5__ {int product; int bustype; } ;
struct TYPE_6__ {TYPE_1__ id; int phys; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 struct fujitsu_bl* FUNC_2 (struct acpi_device*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int,char*,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_3)
{
 struct fujitsu_bl *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_4->input = FUNC_3(&VAR_3->dev);
 if (!VAR_4->input)
  return -VAR_1;

 FUNC_5(VAR_4->phys, sizeof(VAR_4->phys), "%s/video/input0",
   FUNC_0(VAR_3));

 VAR_4->input->name = FUNC_1(VAR_3);
 VAR_4->input->phys = VAR_4->phys;
 VAR_4->input->id.bustype = VAR_0;
 VAR_4->input->id.product = 0x06;

 VAR_5 = FUNC_6(VAR_4->input, VAR_2, ((void*)0));
 if (VAR_5)
  return VAR_5;

 return FUNC_4(VAR_4->input);
}
