
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hinic_txq {int napi; TYPE_1__* sq; int netdev; } ;
struct hinic_dev {int hwdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int msix_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 struct hinic_dev* FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct hinic_txq *VAR_4 = VAR_3;
 struct hinic_dev *VAR_5;

 VAR_5 = FUNC_3(VAR_4->netdev);


 FUNC_1(VAR_5->hwdev,
       VAR_4->sq->msix_entry,
       VAR_0);

 FUNC_0(VAR_5->hwdev, VAR_4->sq->msix_entry);

 FUNC_2(&VAR_4->napi);
 return VAR_1;
}
