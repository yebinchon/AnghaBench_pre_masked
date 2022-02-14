
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int * tx_q; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int,int,int ) ;
 scalar_t__ FUNC_1 (struct mt7601u_dev*,int *) ;

__attribute__((used)) static int FUNC_2(struct mt7601u_dev *VAR_3)
{
 int VAR_4;

 VAR_3->tx_q = FUNC_0(VAR_3->dev, VAR_2,
     sizeof(*VAR_3->tx_q), VAR_1);
 if (!VAR_3->tx_q)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (FUNC_1(VAR_3, &VAR_3->tx_q[VAR_4]))
   return -VAR_0;

 return 0;
}
