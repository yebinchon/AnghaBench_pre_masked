
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_data {int tx_status; int txwaitq; int wsem; int txbuf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct channel_data *VAR_0, int VAR_1)
{
 if (VAR_0->tx_status) {
  FUNC_0(VAR_0->txbuf);
  FUNC_1(&VAR_0->wsem);
 }
 VAR_0->tx_status = 1;
 FUNC_2(&VAR_0->txwaitq);
 return 1;
}
