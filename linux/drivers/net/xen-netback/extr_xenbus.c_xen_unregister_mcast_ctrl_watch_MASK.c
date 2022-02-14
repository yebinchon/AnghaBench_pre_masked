
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * node; } ;
struct xenvif {TYPE_1__ mcast_ctrl_watch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct xenvif *VAR_0)
{
 if (VAR_0->mcast_ctrl_watch.node) {
  FUNC_1(&VAR_0->mcast_ctrl_watch);
  FUNC_0(VAR_0->mcast_ctrl_watch.node);
  VAR_0->mcast_ctrl_watch.node = ((void*)0);
 }
}
