
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net_ubuf_ref {int wait; int refcount; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vhost_net_ubuf_ref *VAR_0)
{
 int VAR_1 = FUNC_0(1, &VAR_0->refcount);
 if (FUNC_1(!VAR_1))
  FUNC_2(&VAR_0->wait);
 return VAR_1;
}
