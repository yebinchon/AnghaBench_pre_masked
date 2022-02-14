
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dw; int count_pending; int count; } ;
struct team {TYPE_1__ notify_peers; int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct team *VAR_0)
{
 if (!VAR_0->notify_peers.count || !FUNC_1(VAR_0->dev))
  return;
 FUNC_0(VAR_0->notify_peers.count, &VAR_0->notify_peers.count_pending);
 FUNC_2(&VAR_0->notify_peers.dw, 0);
}
