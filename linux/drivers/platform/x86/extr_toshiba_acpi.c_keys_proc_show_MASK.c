
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_acpi_dev {int last_key_event; int key_event_valid; } ;
struct seq_file {struct toshiba_acpi_dev* private; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct toshiba_acpi_dev *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "hotkey_ready:            %d\n", VAR_2->key_event_valid);
 FUNC_0(VAR_0, "hotkey:                  0x%04x\n", VAR_2->last_key_event);

 return 0;
}
