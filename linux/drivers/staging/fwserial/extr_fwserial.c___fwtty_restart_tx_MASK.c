
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_port {int tx_fifo; int drain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fwtty_port*,char*,int,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct fwtty_port *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_1(&VAR_0->tx_fifo);
 if (VAR_1)
  FUNC_3(&VAR_0->drain, 0);
 VAR_2 = FUNC_0(&VAR_0->tx_fifo);

 FUNC_2(VAR_0, "fifo len: %d avail: %d\n", VAR_1, VAR_2);
}
