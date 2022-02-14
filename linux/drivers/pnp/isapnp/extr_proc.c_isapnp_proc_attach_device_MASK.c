
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct pnp_dev {int number; struct proc_dir_entry* procent; struct pnp_card* card; } ;
struct pnp_card {int number; struct proc_dir_entry* procdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct proc_dir_entry* FUNC_0 (char*,int,struct proc_dir_entry*,int *,struct pnp_dev*) ;
 struct proc_dir_entry* FUNC_1 (char*,int ) ;
 int FUNC_2 (struct proc_dir_entry*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct pnp_dev *VAR_5)
{
 struct pnp_card *VAR_6 = VAR_5->card;
 struct proc_dir_entry *VAR_7, *VAR_8;
 char VAR_9[16];

 if (!(VAR_7 = VAR_6->procdir)) {
  FUNC_3(VAR_9, "%02x", VAR_6->number);
  VAR_7 = VAR_6->procdir = FUNC_1(VAR_9, VAR_3);
  if (!VAR_7)
   return -VAR_0;
 }
 FUNC_3(VAR_9, "%02x", VAR_5->number);
 VAR_8 = VAR_5->procent = FUNC_0(VAR_9, VAR_1 | VAR_2, VAR_7,
   &VAR_4, VAR_5);
 if (!VAR_8)
  return -VAR_0;
 FUNC_2(VAR_8, 256);
 return 0;
}
