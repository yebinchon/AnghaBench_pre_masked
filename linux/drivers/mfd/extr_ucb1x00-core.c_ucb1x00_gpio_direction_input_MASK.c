
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {int io_dir; int io_lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct ucb1x00* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct ucb1x00*) ;
 int FUNC_4 (struct ucb1x00*) ;
 int FUNC_5 (struct ucb1x00*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct ucb1x00 *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->io_lock, VAR_4);
 VAR_3->io_dir &= ~(1 << VAR_2);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3, VAR_0, VAR_3->io_dir);
 FUNC_3(VAR_3);
 FUNC_2(&VAR_3->io_lock, VAR_4);

 return 0;
}
