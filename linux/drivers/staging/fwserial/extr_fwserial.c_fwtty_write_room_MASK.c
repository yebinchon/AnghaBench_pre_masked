
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct fwtty_port* driver_data; } ;
struct fwtty_port {int lock; int tx_fifo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fwtty_port*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_0)
{
 struct fwtty_port *VAR_1 = VAR_0->driver_data;
 int VAR_2;

 FUNC_2(&VAR_1->lock);
 VAR_2 = FUNC_0(&VAR_1->tx_fifo);
 FUNC_3(&VAR_1->lock);

 FUNC_1(VAR_1, "%d\n", VAR_2);

 return VAR_2;
}
