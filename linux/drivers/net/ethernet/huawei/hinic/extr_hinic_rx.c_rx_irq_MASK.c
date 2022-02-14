
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_rxq {int napi; int netdev; struct hinic_rq* rq; } ;
struct hinic_rq {int msix_entry; } ;
struct hinic_dev {int hwdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 struct hinic_dev* FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct hinic_rxq *VAR_4 = (struct hinic_rxq *)VAR_3;
 struct hinic_rq *VAR_5 = VAR_4->rq;
 struct hinic_dev *VAR_6;


 VAR_6 = FUNC_3(VAR_4->netdev);
 FUNC_1(VAR_6->hwdev,
       VAR_5->msix_entry,
       VAR_0);

 VAR_6 = FUNC_3(VAR_4->netdev);
 FUNC_0(VAR_6->hwdev, VAR_5->msix_entry);

 FUNC_2(&VAR_4->napi);
 return VAR_1;
}
