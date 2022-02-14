
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_sock {int flags; TYPE_1__* sock; int hlist; int refcnt; } ;
struct vxlan_net {int sock_lock; } ;
struct TYPE_2__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct vxlan_net* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_7(struct vxlan_sock *VAR_4)
{
 struct vxlan_net *VAR_5;

 if (!VAR_4)
  return 0;
 if (!FUNC_2(&VAR_4->refcnt))
  return 0;

 VAR_5 = FUNC_1(FUNC_3(VAR_4->sock->sk), VAR_3);
 FUNC_4(&VAR_5->sock_lock);
 FUNC_0(&VAR_4->hlist);
 FUNC_6(VAR_4->sock,
          (VAR_4->flags & VAR_2) ?
          VAR_1 :
          VAR_0);
 FUNC_5(&VAR_5->sock_lock);

 return 1;
}
