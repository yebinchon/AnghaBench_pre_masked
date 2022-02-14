
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gb_tty* driver_data; } ;
struct gb_tty {scalar_t__ credits; int write_lock; int write_fifo; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1)
{
 struct gb_tty *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->write_lock, VAR_3);
 VAR_4 = FUNC_0(&VAR_2->write_fifo);
 if (VAR_2->credits < VAR_0)
  VAR_4 += VAR_0 - VAR_2->credits;
 FUNC_2(&VAR_2->write_lock, VAR_3);

 return VAR_4;
}
