
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list; int lock; int count; } ;
struct TYPE_4__ {TYPE_1__ cache; } ;
struct xenvif {TYPE_2__ hash; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;

void FUNC_3(struct xenvif *VAR_1)
{
 if (VAR_0 == 0)
  return;

 FUNC_0(VAR_1->hash.cache.count);

 FUNC_2(&VAR_1->hash.cache.lock);
 FUNC_1(&VAR_1->hash.cache.list);
}
