
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct intc_map_entry {int enum_id; struct intc_desc_int* desc; } ;
struct TYPE_2__ {int name; } ;
struct intc_desc_int {TYPE_1__ chip; } ;


 struct intc_map_entry* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1, "%-5s  %-7s  %-15s\n", "irq", "enum", "chip name");

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  struct intc_map_entry *VAR_4 = FUNC_0(VAR_3);
  struct intc_desc_int *VAR_5 = VAR_4->desc;

  if (!VAR_5)
   continue;

  FUNC_1(VAR_1, "%5d  ", VAR_3);
  FUNC_1(VAR_1, "0x%05x  ", VAR_4->enum_id);
  FUNC_1(VAR_1, "%-15s\n", VAR_5->chip.name);
 }

 return 0;
}
