
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rx_ring {int sbq_len; struct bq_desc* sbq; } ;
struct ql_adapter {int pdev; int ndev; } ;
struct TYPE_2__ {int * skb; } ;
struct bq_desc {TYPE_1__ p; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bq_desc*,int ) ;
 int FUNC_2 (struct bq_desc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ql_adapter *VAR_4, struct rx_ring *VAR_5)
{
 int VAR_6;
 struct bq_desc *VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5->sbq_len; VAR_6++) {
  VAR_7 = &VAR_5->sbq[VAR_6];
  if (VAR_7 == ((void*)0)) {
   FUNC_3(VAR_4, VAR_1, VAR_4->ndev,
      "sbq_desc %d is NULL.\n", VAR_6);
   return;
  }
  if (VAR_7->p.skb) {
   FUNC_4(VAR_4->pdev,
      FUNC_1(VAR_7, VAR_2),
      FUNC_2(VAR_7, VAR_3),
      VAR_0);
   FUNC_0(VAR_7->p.skb);
   VAR_7->p.skb = ((void*)0);
  }
 }
}
