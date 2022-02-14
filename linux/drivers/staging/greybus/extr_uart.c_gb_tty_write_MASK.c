
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gb_tty* driver_data; } ;
struct gb_tty {int tx_work; int close_pending; int write_lock; int write_fifo; } ;


 int FUNC_0 (int *,unsigned char const*,int,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0, const unsigned char *VAR_1,
   int VAR_2)
{
 struct gb_tty *VAR_3 = VAR_0->driver_data;

 VAR_2 = FUNC_0(&VAR_3->write_fifo, VAR_1, VAR_2,
         &VAR_3->write_lock);
 if (VAR_2 && !VAR_3->close_pending)
  FUNC_1(&VAR_3->tx_work);

 return VAR_2;
}
