
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vchiq_service {size_t srvstate; int localport; TYPE_1__* state; } ;
struct TYPE_2__ {int id; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct vchiq_service *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1, "%d: srv:%d %s->%s",
  VAR_2->state->id, VAR_2->localport,
  VAR_0[VAR_2->srvstate],
  VAR_0[VAR_3]);
 VAR_2->srvstate = VAR_3;
}
