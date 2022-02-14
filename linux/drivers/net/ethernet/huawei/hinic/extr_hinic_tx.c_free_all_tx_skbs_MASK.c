
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct hinic_txq {int free_sges; struct hinic_sq* sq; int netdev; } ;
struct hinic_sq_wqe {int dummy; } ;
struct hinic_sq {int dummy; } ;
struct hinic_dev {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (struct hinic_sq_wqe*,int ,int) ;
 int FUNC_1 (struct hinic_sq*,unsigned int) ;
 struct hinic_sq_wqe* FUNC_2 (struct hinic_sq*,struct sk_buff**,unsigned int,int *) ;
 struct hinic_sq_wqe* FUNC_3 (struct hinic_sq*,struct sk_buff**,unsigned int*,int *) ;
 struct hinic_dev* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct hinic_dev*,struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_7(struct hinic_txq *VAR_0)
{
 struct hinic_dev *VAR_1 = FUNC_4(VAR_0->netdev);
 struct hinic_sq *VAR_2 = VAR_0->sq;
 struct hinic_sq_wqe *VAR_3;
 unsigned int VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6;
 u16 VAR_7;

 while ((VAR_3 = FUNC_3(VAR_2, &VAR_5, &VAR_4, &VAR_7))) {
  VAR_3 = FUNC_2(VAR_2, &VAR_5, VAR_4, &VAR_7);
  if (!VAR_3)
   break;

  VAR_6 = FUNC_5(VAR_5)->nr_frags + 1;

  FUNC_0(VAR_3, VAR_0->free_sges, VAR_6);

  FUNC_1(VAR_2, VAR_4);

  FUNC_6(VAR_1, VAR_5, VAR_0->free_sges);
 }
}
