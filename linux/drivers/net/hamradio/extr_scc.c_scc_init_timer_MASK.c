
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_state; } ;
struct scc_channel {int lock; TYPE_1__ stat; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct scc_channel *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_1->stat.tx_state = VAR_0;
 FUNC_1(&VAR_1->lock, VAR_2);
}
