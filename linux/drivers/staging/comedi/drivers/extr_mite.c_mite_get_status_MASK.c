
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_channel {int done; int channel; struct mite* mite; } ;
struct mite {int lock; scalar_t__ mmio; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_6(struct mite_channel *VAR_2)
{
 struct mite *VAR_3 = VAR_2->mite;
 unsigned int VAR_4;
 unsigned long VAR_5;

 FUNC_3(&VAR_3->lock, VAR_5);
 VAR_4 = FUNC_2(VAR_3->mmio + FUNC_1(VAR_2->channel));
 if (VAR_4 & VAR_1) {
  VAR_2->done = 1;
  FUNC_5(VAR_0,
         VAR_3->mmio + FUNC_0(VAR_2->channel));
 }
 FUNC_4(&VAR_3->lock, VAR_5);
 return VAR_4;
}
