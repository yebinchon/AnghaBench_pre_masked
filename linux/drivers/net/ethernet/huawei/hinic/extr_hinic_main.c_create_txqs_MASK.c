
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct hinic_sq {int dummy; } ;
struct hinic_dev {int * txqs; int hwdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,size_t,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 struct hinic_sq* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct hinic_sq*,struct net_device*) ;
 int FUNC_6 (struct hinic_dev*,int ,struct net_device*,char*) ;

__attribute__((used)) static int FUNC_7(struct hinic_dev *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8 = FUNC_4(VAR_4->hwdev);
 struct net_device *VAR_9 = VAR_4->netdev;
 size_t VAR_10;

 if (VAR_4->txqs)
  return -VAR_0;

 VAR_10 = VAR_8 * sizeof(*VAR_4->txqs);
 VAR_4->txqs = FUNC_1(&VAR_9->dev, VAR_10, VAR_2);
 if (!VAR_4->txqs)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  struct hinic_sq *VAR_11 = FUNC_3(VAR_4->hwdev, VAR_6);

  VAR_5 = FUNC_5(&VAR_4->txqs[VAR_6], VAR_11, VAR_9);
  if (VAR_5) {
   FUNC_6(VAR_4, VAR_3, VAR_9,
      "Failed to init Txq\n");
   goto err_init_txq;
  }
 }

 return 0;

err_init_txq:
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_2(&VAR_4->txqs[VAR_7]);

 FUNC_0(&VAR_9->dev, VAR_4->txqs);
 return VAR_5;
}
