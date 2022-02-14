
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mountpoint {int m_list; int m_dentry; int m_count; } ;
struct mount {int mnt_mp_list; struct mountpoint* mnt_mp; struct mount* mnt_parent; int mnt_mountpoint; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct mount*,int) ;

void FUNC_2(struct mount *VAR_0,
   struct mountpoint *VAR_1,
   struct mount *VAR_2)
{
 VAR_1->m_count++;
 FUNC_1(VAR_0, 1);
 VAR_2->mnt_mountpoint = VAR_1->m_dentry;
 VAR_2->mnt_parent = VAR_0;
 VAR_2->mnt_mp = VAR_1;
 FUNC_0(&VAR_2->mnt_mp_list, &VAR_1->m_list);
}
