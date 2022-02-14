
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int rx_ring_count; int tx_ring_count; int ndev; int * tx_ring; int * rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct ql_adapter*,int *) ;
 scalar_t__ FUNC_2 (struct ql_adapter*) ;
 scalar_t__ FUNC_3 (struct ql_adapter*,int *) ;
 int FUNC_4 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_5(struct ql_adapter *VAR_2)
{
 int VAR_3;


 if (FUNC_2(VAR_2))
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->rx_ring_count; VAR_3++) {
  if (FUNC_1(VAR_2, &VAR_2->rx_ring[VAR_3]) != 0) {
   FUNC_0(VAR_2, VAR_1, VAR_2->ndev,
      "RX resource allocation failed.\n");
   goto err_mem;
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->tx_ring_count; VAR_3++) {
  if (FUNC_3(VAR_2, &VAR_2->tx_ring[VAR_3]) != 0) {
   FUNC_0(VAR_2, VAR_1, VAR_2->ndev,
      "TX resource allocation failed.\n");
   goto err_mem;
  }
 }
 return 0;

err_mem:
 FUNC_4(VAR_2);
 return -VAR_0;
}
