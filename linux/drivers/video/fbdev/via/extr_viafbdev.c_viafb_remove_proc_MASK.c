
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lvds_chip_info2; int lvds_chip_info; } ;
struct viafb_shared {TYPE_1__ chip_info; struct proc_dir_entry* iga1_proc_entry; struct proc_dir_entry* iga2_proc_entry; struct proc_dir_entry* proc_entry; } ;
struct proc_dir_entry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,struct proc_dir_entry*) ;

__attribute__((used)) static void FUNC_2(struct viafb_shared *VAR_0)
{
 struct proc_dir_entry *VAR_1 = VAR_0->proc_entry;

 if (!VAR_1)
  return;

 FUNC_1("output_devices", VAR_0->iga2_proc_entry);
 FUNC_1("iga2", VAR_1);
 FUNC_1("output_devices", VAR_0->iga1_proc_entry);
 FUNC_1("iga1", VAR_1);
 FUNC_1("supported_output_devices", VAR_1);
 FUNC_1("viafb", ((void*)0));
}
