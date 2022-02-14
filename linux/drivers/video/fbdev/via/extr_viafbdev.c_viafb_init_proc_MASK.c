
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lvds_chip_info2; int lvds_chip_info; } ;
struct viafb_shared {struct proc_dir_entry* iga2_proc_entry; struct proc_dir_entry* iga1_proc_entry; TYPE_1__ chip_info; struct proc_dir_entry* proc_entry; } ;
struct proc_dir_entry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,struct proc_dir_entry*,int *) ;
 int FUNC_2 (char*,int ,struct proc_dir_entry*,int ) ;
 struct proc_dir_entry* FUNC_3 (char*,struct proc_dir_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct viafb_shared *VAR_8)
{
 struct proc_dir_entry *VAR_9, *VAR_10,
  *VAR_11 = FUNC_3("viafb", ((void*)0));

 VAR_8->proc_entry = VAR_11;
 if (VAR_11) {
  FUNC_2("supported_output_devices", 0, VAR_11,
   VAR_6);
  VAR_9 = FUNC_3("iga1", VAR_11);
  VAR_8->iga1_proc_entry = VAR_9;
  FUNC_1("output_devices", 0, VAR_9,
   &VAR_4);
  VAR_10 = FUNC_3("iga2", VAR_11);
  VAR_8->iga2_proc_entry = VAR_10;
  FUNC_1("output_devices", 0, VAR_10,
   &VAR_5);
 }
}
