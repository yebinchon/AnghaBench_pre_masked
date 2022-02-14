
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct nubus_dirent {int type; scalar_t__ data; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,struct proc_dir_entry*,int ,int ) ;
 int FUNC_2 (char*,int,char*,int) ;

void FUNC_3(struct proc_dir_entry *VAR_2,
    const struct nubus_dirent *VAR_3)
{
 char VAR_4[9];
 unsigned char *VAR_5 = (unsigned char *)VAR_3->data;

 if (!VAR_2)
  return;

 FUNC_2(VAR_4, sizeof(VAR_4), "%x", VAR_3->type);
 FUNC_1(VAR_4, VAR_0 | 0444, VAR_2,
   VAR_1,
   FUNC_0(VAR_5, 0));
}
