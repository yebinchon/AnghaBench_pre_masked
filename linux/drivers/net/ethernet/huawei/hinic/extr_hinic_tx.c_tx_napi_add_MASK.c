
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_txq {int napi; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hinic_txq *VAR_1, int VAR_2)
{
 FUNC_1(VAR_1->netdev, &VAR_1->napi, VAR_0, VAR_2);
 FUNC_0(&VAR_1->napi);
}
