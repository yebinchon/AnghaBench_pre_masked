
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net_ubuf_ref {int refcount; int wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vhost_net_ubuf_ref*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct vhost_net_ubuf_ref *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_2(VAR_0->wait, !FUNC_0(&VAR_0->refcount));
}
