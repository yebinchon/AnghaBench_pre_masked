
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_rxq {int napi; int netdev; } ;
struct hinic_dev {int rx_weight; } ;


 int FUNC_0 (int *) ;
 struct hinic_dev* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct hinic_rxq *VAR_1)
{
 struct hinic_dev *VAR_2 = FUNC_1(VAR_1->netdev);

 FUNC_2(VAR_1->netdev, &VAR_1->napi, VAR_0, VAR_2->rx_weight);
 FUNC_0(&VAR_1->napi);
}
