
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct velocity_info_tbl {int txqueue; int chip_id; } ;
struct TYPE_2__ {int numq; } ;
struct velocity_info {int lock; int multicast_limit; TYPE_1__ tx; int chip_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct velocity_info *VAR_1,
    const struct velocity_info_tbl *VAR_2)
{
 VAR_1->chip_id = VAR_2->chip_id;
 VAR_1->tx.numq = VAR_2->txqueue;
 VAR_1->multicast_limit = VAR_0;
 FUNC_0(&VAR_1->lock);
}
