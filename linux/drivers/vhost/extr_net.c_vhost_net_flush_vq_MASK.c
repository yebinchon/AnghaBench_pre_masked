
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vhost_net {TYPE_2__* vqs; int * poll; } ;
struct TYPE_3__ {int poll; } ;
struct TYPE_4__ {TYPE_1__ vq; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vhost_net *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->poll + VAR_1);
 FUNC_0(&VAR_0->vqs[VAR_1].vq.poll);
}
