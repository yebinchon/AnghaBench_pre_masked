
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_server {int addr6_link; int addr4_link; int proc_link; int uuid_rb; int usage; struct afs_server* gc_next; } ;
struct afs_net {int fs_addr_lock; int fs_lock; int fs_servers; } ;


 int FUNC_0 (struct afs_net*,struct afs_server*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct afs_server*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct afs_net *VAR_1, struct afs_server *VAR_2)
{
 struct afs_server *VAR_3;
 bool VAR_4;
 int VAR_5;

 while ((VAR_3 = VAR_2)) {
  VAR_2 = VAR_3->gc_next;

  FUNC_6(&VAR_1->fs_lock);
  VAR_5 = 1;
  VAR_4 = FUNC_1(&VAR_3->usage, &VAR_5, 0);
  FUNC_5(VAR_3, VAR_5, VAR_0);
  if (VAR_4) {
   FUNC_4(&VAR_3->uuid_rb, &VAR_1->fs_servers);
   FUNC_2(&VAR_3->proc_link);
  }
  FUNC_7(&VAR_1->fs_lock);

  if (VAR_4) {
   FUNC_6(&VAR_1->fs_addr_lock);
   if (!FUNC_3(&VAR_3->addr4_link))
    FUNC_2(&VAR_3->addr4_link);
   if (!FUNC_3(&VAR_3->addr6_link))
    FUNC_2(&VAR_3->addr6_link);
   FUNC_7(&VAR_1->fs_addr_lock);
   FUNC_0(VAR_1, VAR_3);
  }
 }
}
