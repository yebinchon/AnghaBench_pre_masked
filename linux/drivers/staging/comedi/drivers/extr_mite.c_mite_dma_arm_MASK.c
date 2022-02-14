
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_channel {int channel; scalar_t__ done; struct mite* mite; } ;
struct mite {int lock; scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct mite_channel *VAR_1)
{
 struct mite *VAR_2 = VAR_1->mite;
 unsigned long VAR_3;





 FUNC_1();
 FUNC_2(&VAR_2->lock, VAR_3);
 VAR_1->done = 0;

 FUNC_4(VAR_0, VAR_2->mmio + FUNC_0(VAR_1->channel));
 FUNC_3(&VAR_2->lock, VAR_3);
}
