
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_id; } ;
struct proc_dir_entry {int dummy; } ;
struct TYPE_2__ {struct proc_dir_entry* procdir; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,int ,int) ;

int FUNC_4(struct super_block *VAR_2)
{
 struct proc_dir_entry *VAR_3 = FUNC_0(VAR_2)->procdir;
 if (VAR_3) {
  char VAR_4[VAR_0];
  char *VAR_5;


  FUNC_3(VAR_4, VAR_2->s_id, VAR_0);
  VAR_5 = FUNC_2(VAR_4, '/');
  if (VAR_5)
   *VAR_5 = '!';

  FUNC_1(VAR_4, VAR_1);
  FUNC_0(VAR_2)->procdir = ((void*)0);
 }
 return 0;
}
