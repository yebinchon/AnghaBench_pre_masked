
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net_buf {int tail; int head; } ;



__attribute__((used)) static int FUNC_0(struct vhost_net_buf *VAR_0)
{
 return VAR_0->tail - VAR_0->head;
}
