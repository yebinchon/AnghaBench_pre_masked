
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct scc_channel {int clock; int lock; TYPE_1__ modem; } ;


 int FUNC_0 (struct scc_channel*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct scc_channel *VAR_0)
{
 unsigned long VAR_1;
 FUNC_1(&VAR_0->lock, VAR_1);

 if (VAR_0->modem.speed > 0)
  FUNC_0(VAR_0, (unsigned) (VAR_0->clock / (VAR_0->modem.speed * 64)) - 2);

 FUNC_2(&VAR_0->lock, VAR_1);
}
