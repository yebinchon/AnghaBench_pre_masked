
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_poll {int * wqh; int wait; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct vhost_poll *VAR_0)
{
 if (VAR_0->wqh) {
  FUNC_0(VAR_0->wqh, &VAR_0->wait);
  VAR_0->wqh = ((void*)0);
 }
}
