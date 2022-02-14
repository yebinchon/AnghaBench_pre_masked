
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int * disc_data; } ;
struct slcan {scalar_t__ magic; int dev; int tx_work; int lock; struct tty_struct* tty; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1)
{
 struct slcan *VAR_2 = (struct slcan *) VAR_1->disc_data;


 if (!VAR_2 || VAR_2->magic != VAR_0 || VAR_2->tty != VAR_1)
  return;

 FUNC_1(&VAR_2->lock);
 VAR_1->disc_data = ((void*)0);
 VAR_2->tty = ((void*)0);
 FUNC_2(&VAR_2->lock);

 FUNC_0(&VAR_2->tx_work);


 FUNC_3(VAR_2->dev);

}
