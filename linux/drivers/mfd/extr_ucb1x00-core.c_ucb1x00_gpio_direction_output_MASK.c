
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {unsigned int io_out; unsigned int io_dir; int io_lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ucb1x00* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct ucb1x00*) ;
 int FUNC_4 (struct ucb1x00*) ;
 int FUNC_5 (struct ucb1x00*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_2, unsigned VAR_3
  , int VAR_4)
{
 struct ucb1x00 *VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6;
 unsigned VAR_7, VAR_8 = 1 << VAR_3;

 FUNC_1(&VAR_5->io_lock, VAR_6);
 VAR_7 = VAR_5->io_out;
 if (VAR_4)
  VAR_5->io_out |= VAR_8;
 else
  VAR_5->io_out &= ~VAR_8;

 FUNC_4(VAR_5);
 if (VAR_7 != VAR_5->io_out)
  FUNC_5(VAR_5, VAR_0, VAR_5->io_out);

 if (!(VAR_5->io_dir & VAR_8)) {
  VAR_5->io_dir |= VAR_8;
  FUNC_5(VAR_5, VAR_1, VAR_5->io_dir);
 }
 FUNC_3(VAR_5);
 FUNC_2(&VAR_5->io_lock, VAR_6);

 return 0;
}
