
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net_buf {size_t tail; size_t head; void** queue; } ;



__attribute__((used)) static void *FUNC_0(struct vhost_net_buf *VAR_0)
{
 if (VAR_0->tail != VAR_0->head)
  return VAR_0->queue[VAR_0->head];
 else
  return ((void*)0);
}
