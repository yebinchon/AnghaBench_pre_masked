
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ in; } ;
struct TYPE_6__ {TYPE_2__* ring; TYPE_1__ data; } ;
struct sock_mapping {TYPE_3__ active; } ;
struct TYPE_5__ {int ring_order; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct sock_mapping *VAR_0)
{
 if (!VAR_0->active.ring)
  return;

 FUNC_1((unsigned long)VAR_0->active.data.in,
   VAR_0->active.ring->ring_order);
 FUNC_0((unsigned long)VAR_0->active.ring);
}
