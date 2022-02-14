
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_channel {int * ring; int channel; struct mite* mite; } ;
struct mite {int lock; scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mite_channel*) ;
 int FUNC_2 (struct mite_channel*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

void FUNC_6(struct mite_channel *VAR_8)
{
 struct mite *VAR_9 = VAR_8->mite;
 unsigned long VAR_10;


 FUNC_3(&VAR_9->lock, VAR_10);
 if (VAR_8->ring) {
  FUNC_1(VAR_8);
  FUNC_2(VAR_8);




  FUNC_5(VAR_1 | VAR_5 |
         VAR_7 | VAR_2 |
         VAR_6 | VAR_3 |
         VAR_4 | VAR_0,
         VAR_9->mmio + FUNC_0(VAR_8->channel));
  VAR_8->ring = ((void*)0);
 }
 FUNC_4(&VAR_9->lock, VAR_10);
}
