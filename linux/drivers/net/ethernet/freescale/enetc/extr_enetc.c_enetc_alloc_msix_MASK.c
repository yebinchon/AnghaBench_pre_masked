
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct enetc_ndev_priv {int bdr_int_num; int num_tx_rings; struct enetc_int_vector** int_vector; struct enetc_bdr** rx_ring; int rx_bd_count; int dev; int ndev; struct enetc_bdr** tx_ring; int tx_bd_count; TYPE_1__* si; } ;
struct enetc_bdr {int index; int bd_count; int dev; int ndev; } ;
struct enetc_int_vector {int count_tx_rings; int napi; struct enetc_bdr rx_ring; struct enetc_bdr* tx_ring; int tx_rings_map; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;
 int VAR_7 ;
 int FUNC_1 (struct enetc_int_vector*) ;
 struct enetc_int_vector* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pci_dev*,int,int,int ) ;
 int FUNC_6 (struct pci_dev*) ;

int FUNC_7(struct enetc_ndev_priv *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_8->si->pdev;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_15 = VAR_0 + VAR_8->bdr_int_num;

 VAR_13 = FUNC_5(VAR_9, VAR_15, VAR_15, VAR_6);

 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_13 != VAR_15)
  return -VAR_3;


 VAR_11 = VAR_8->num_tx_rings / VAR_8->bdr_int_num;
 VAR_10 = sizeof(struct enetc_int_vector) +
        sizeof(struct enetc_bdr) * VAR_11;

 for (VAR_12 = 0; VAR_12 < VAR_8->bdr_int_num; VAR_12++) {
  struct enetc_int_vector *VAR_16;
  struct enetc_bdr *VAR_17;
  int VAR_18;

  VAR_16 = FUNC_2(VAR_10, VAR_4);
  if (!VAR_16) {
   VAR_14 = -VAR_2;
   goto fail;
  }

  VAR_8->int_vector[VAR_12] = VAR_16;

  FUNC_3(VAR_8->ndev, &VAR_16->napi, VAR_7,
          VAR_5);
  VAR_16->count_tx_rings = VAR_11;

  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
   int VAR_19;


   if (VAR_8->bdr_int_num == VAR_1)
    VAR_19 = 2 * VAR_18 + VAR_12;
   else
    VAR_19 = VAR_18 + VAR_12 * VAR_11;

   FUNC_0(VAR_19, &VAR_16->tx_rings_map);
   VAR_17 = &VAR_16->tx_ring[VAR_18];
   VAR_17->index = VAR_19;
   VAR_17->ndev = VAR_8->ndev;
   VAR_17->dev = VAR_8->dev;
   VAR_17->bd_count = VAR_8->tx_bd_count;
   VAR_8->tx_ring[VAR_19] = VAR_17;
  }

  VAR_17 = &VAR_16->rx_ring;
  VAR_17->index = VAR_12;
  VAR_17->ndev = VAR_8->ndev;
  VAR_17->dev = VAR_8->dev;
  VAR_17->bd_count = VAR_8->rx_bd_count;
  VAR_8->rx_ring[VAR_12] = VAR_17;
 }

 return 0;

fail:
 while (VAR_12--) {
  FUNC_4(&VAR_8->int_vector[VAR_12]->napi);
  FUNC_1(VAR_8->int_vector[VAR_12]);
 }

 FUNC_6(VAR_9);

 return VAR_14;
}
