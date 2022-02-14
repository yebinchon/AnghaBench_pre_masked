
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_net {TYPE_1__* vqs; } ;
struct TYPE_2__ {int * ubuf_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vhost_net *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  FUNC_0(VAR_1->vqs[VAR_2].ubuf_info);
  VAR_1->vqs[VAR_2].ubuf_info = ((void*)0);
 }
}
