
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int tx_tasklet; int rx_tasklet; } ;


 int FUNC_0 (struct mt7601u_dev*) ;
 int FUNC_1 (struct mt7601u_dev*) ;
 int FUNC_2 (struct mt7601u_dev*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mt7601u_dev *VAR_0)
{
 FUNC_2(VAR_0);

 FUNC_3(&VAR_0->rx_tasklet);

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 FUNC_3(&VAR_0->tx_tasklet);
}
