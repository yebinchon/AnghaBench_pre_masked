
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int gid; int uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;



void FUNC_0(struct proc_dir_entry *VAR_0, kuid_t VAR_1, kgid_t VAR_2)
{
 VAR_0->uid = VAR_1;
 VAR_0->gid = VAR_2;
}
