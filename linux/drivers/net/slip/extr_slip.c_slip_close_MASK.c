
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct slip* disc_data; } ;
struct slip {scalar_t__ magic; int dev; int outfill_timer; int keepalive_timer; int tx_work; int lock; struct tty_struct* tty; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1)
{
 struct slip *VAR_2 = VAR_1->disc_data;


 if (!VAR_2 || VAR_2->magic != VAR_0 || VAR_2->tty != VAR_1)
  return;

 FUNC_2(&VAR_2->lock);
 VAR_1->disc_data = ((void*)0);
 VAR_2->tty = ((void*)0);
 FUNC_3(&VAR_2->lock);

 FUNC_1(&VAR_2->tx_work);







 FUNC_4(VAR_2->dev);

}
