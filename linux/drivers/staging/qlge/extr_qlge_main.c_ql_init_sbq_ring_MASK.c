
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {int sbq_len; struct bq_desc* sbq; int * sbq_base; } ;
struct ql_adapter {int dummy; } ;
struct bq_desc {int index; int * addr; } ;
typedef int __le64 ;


 int FUNC_0 (struct bq_desc*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ql_adapter *VAR_0,
    struct rx_ring *VAR_1)
{
 int VAR_2;
 struct bq_desc *VAR_3;
 __le64 *VAR_4 = VAR_1->sbq_base;

 FUNC_0(VAR_1->sbq, 0, VAR_1->sbq_len * sizeof(struct bq_desc));
 for (VAR_2 = 0; VAR_2 < VAR_1->sbq_len; VAR_2++) {
  VAR_3 = &VAR_1->sbq[VAR_2];
  FUNC_0(VAR_3, 0, sizeof(*VAR_3));
  VAR_3->index = VAR_2;
  VAR_3->addr = VAR_4;
  VAR_4++;
 }
}
