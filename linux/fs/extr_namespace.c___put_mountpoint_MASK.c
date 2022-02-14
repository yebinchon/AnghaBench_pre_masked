
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mountpoint {int m_hash; int m_list; struct dentry* m_dentry; int m_count; } ;
struct list_head {int dummy; } ;
struct dentry {int d_lock; int d_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*,struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mountpoint*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mountpoint *VAR_1, struct list_head *VAR_2)
{
 if (!--VAR_1->m_count) {
  struct dentry *VAR_3 = VAR_1->m_dentry;
  FUNC_0(!FUNC_3(&VAR_1->m_list));
  FUNC_5(&VAR_3->d_lock);
  VAR_3->d_flags &= ~VAR_0;
  FUNC_6(&VAR_3->d_lock);
  FUNC_1(VAR_3, VAR_2);
  FUNC_2(&VAR_1->m_hash);
  FUNC_4(VAR_1);
 }
}
