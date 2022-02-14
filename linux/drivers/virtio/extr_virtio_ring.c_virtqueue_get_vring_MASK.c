
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vring {int dummy; } ;
struct virtqueue {int dummy; } ;
struct TYPE_3__ {struct vring const vring; } ;
struct TYPE_4__ {TYPE_1__ split; } ;


 TYPE_2__* FUNC_0 (struct virtqueue*) ;

const struct vring *FUNC_1(struct virtqueue *VAR_0)
{
 return &FUNC_0(VAR_0)->split.vring;
}
