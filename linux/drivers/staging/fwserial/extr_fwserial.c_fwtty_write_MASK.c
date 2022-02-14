
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct fwtty_port* driver_data; } ;
struct TYPE_2__ {int writes; } ;
struct fwtty_port {int lock; int drain; int tx_fifo; TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct fwtty_port*,int,int) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fwtty_port*,char*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct fwtty_port*,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct tty_struct *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
 struct fwtty_port *VAR_4 = VAR_1->driver_data;
 int VAR_5, VAR_6;

 FUNC_3(VAR_4, "%d\n", VAR_3);
 FUNC_4(VAR_4->stats.writes, VAR_3);

 FUNC_7(&VAR_4->lock);
 VAR_5 = FUNC_1(&VAR_4->tx_fifo, VAR_2, VAR_3);
 VAR_6 = FUNC_2(&VAR_4->tx_fifo);
 if (VAR_6 < VAR_0)
  FUNC_6(&VAR_4->drain, 1);
 FUNC_8(&VAR_4->lock);

 if (VAR_6 >= VAR_0)
  FUNC_5(VAR_4, 0);

 FUNC_0(VAR_4, VAR_3, VAR_5);

 return (VAR_5 < 0) ? 0 : VAR_5;
}
