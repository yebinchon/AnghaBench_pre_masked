
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_sdio {int n_rx_pkts; int * rx_pkts; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ath10k*,int *) ;
 struct ath10k_sdio* FUNC_2 (struct ath10k*) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_0)
{
 struct ath10k_sdio *VAR_1 = FUNC_2(VAR_0);
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_rx_pkts; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0,
       &VAR_1->rx_pkts[VAR_3]);
  if (VAR_2)
   goto err;
 }

 return 0;

err:

 for (; VAR_3 < VAR_1->n_rx_pkts; VAR_3++)
  FUNC_0(&VAR_1->rx_pkts[VAR_3]);

 return VAR_2;
}
