
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_net {TYPE_1__* vqs; } ;
struct socket {int dummy; } ;
struct TYPE_2__ {int vq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct socket* FUNC_0 (struct vhost_net*,int *) ;

__attribute__((used)) static void FUNC_1(struct vhost_net *VAR_2, struct socket **VAR_3,
      struct socket **VAR_4)
{
 *VAR_3 = FUNC_0(VAR_2, &VAR_2->vqs[VAR_1].vq);
 *VAR_4 = FUNC_0(VAR_2, &VAR_2->vqs[VAR_0].vq);
}
