
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct toshiba_acpi_dev {int force_fan; } ;
struct seq_file {struct toshiba_acpi_dev* private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct toshiba_acpi_dev*,scalar_t__*) ;
 int FUNC_1 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct toshiba_acpi_dev *VAR_3 = VAR_1->private;
 u32 VAR_4;

 if (FUNC_0(VAR_3, &VAR_4))
  return -VAR_0;

 FUNC_1(VAR_1, "running:                 %d\n", (VAR_4 > 0));
 FUNC_1(VAR_1, "force_on:                %d\n", VAR_3->force_fan);

 return 0;
}
