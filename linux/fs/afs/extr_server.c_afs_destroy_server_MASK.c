
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_server {int rcu; int usage; int probe_outstanding; int flags; int addresses; } ;
struct afs_net {int dummy; } ;
struct afs_addr_list {int preferred; } ;
struct afs_addr_cursor {int error; int index; struct afs_addr_list* alist; } ;


 int VAR_0 ;
 int FUNC_0 (struct afs_net*) ;
 int FUNC_1 (struct afs_net*,struct afs_server*,struct afs_addr_cursor*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct afs_addr_list* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct afs_server*,scalar_t__,int ) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(struct afs_net *VAR_4, struct afs_server *VAR_5)
{
 struct afs_addr_list *VAR_6 = FUNC_4(VAR_5->addresses);
 struct afs_addr_cursor VAR_7 = {
  .alist = VAR_6,
  .index = VAR_6->preferred,
  .error = 0,
 };

 FUNC_6(VAR_5, FUNC_2(&VAR_5->usage),
    VAR_3);

 if (FUNC_5(VAR_0, &VAR_5->flags))
  FUNC_1(VAR_4, VAR_5, &VAR_7, ((void*)0));

 FUNC_7(&VAR_5->probe_outstanding,
         FUNC_2(&VAR_5->probe_outstanding) == 0);

 FUNC_6(VAR_5, FUNC_2(&VAR_5->usage),
    VAR_2);
 FUNC_3(&VAR_5->rcu, VAR_1);
 FUNC_0(VAR_4);
}
