
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net_buf {int head; } ;


 void* FUNC_0 (struct vhost_net_buf*) ;

__attribute__((used)) static void *FUNC_1(struct vhost_net_buf *VAR_0)
{
 void *VAR_1 = FUNC_0(VAR_0);
 ++VAR_0->head;
 return VAR_1;
}
