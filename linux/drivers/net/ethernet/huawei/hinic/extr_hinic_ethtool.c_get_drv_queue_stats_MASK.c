
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct hinic_txq_stats {int dummy; } ;
struct hinic_rxq_stats {int dummy; } ;
struct hinic_dev {size_t num_qps; int * rxqs; int * txqs; } ;
struct TYPE_4__ {int offset; int size; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,struct hinic_rxq_stats*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *,struct hinic_txq_stats*) ;

__attribute__((used)) static void FUNC_3(struct hinic_dev *VAR_2, u64 *VAR_3)
{
 struct hinic_txq_stats VAR_4;
 struct hinic_rxq_stats VAR_5;
 u16 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 char *VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_2->num_qps; VAR_8++) {
  if (!VAR_2->txqs)
   break;

  FUNC_2(&VAR_2->txqs[VAR_8], &VAR_4);
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++, VAR_6++) {
   VAR_9 = (char *)&VAR_4 +
    VAR_1[VAR_7].offset;
   VAR_3[VAR_6] = (VAR_1[VAR_7].size ==
     sizeof(u64)) ? *(u64 *)VAR_9 : *(u32 *)VAR_9;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_2->num_qps; VAR_8++) {
  if (!VAR_2->rxqs)
   break;

  FUNC_1(&VAR_2->rxqs[VAR_8], &VAR_5);
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++, VAR_6++) {
   VAR_9 = (char *)&VAR_5 +
    VAR_0[VAR_7].offset;
   VAR_3[VAR_6] = (VAR_0[VAR_7].size ==
     sizeof(u64)) ? *(u64 *)VAR_9 : *(u32 *)VAR_9;
  }
 }
}
