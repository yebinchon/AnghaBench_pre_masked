
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int rx_tasklet; int tx_tasklet; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7601u_dev*) ;
 int FUNC_1 (struct mt7601u_dev*) ;
 int FUNC_2 (struct mt7601u_dev*) ;
 int VAR_1 ;
 int FUNC_3 (struct mt7601u_dev*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,unsigned long) ;

int FUNC_5(struct mt7601u_dev *VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_4(&VAR_3->tx_tasklet, VAR_2, (unsigned long) VAR_3);
 FUNC_4(&VAR_3->rx_tasklet, VAR_1, (unsigned long) VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto err;
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_2(VAR_3);
 return VAR_4;
}
