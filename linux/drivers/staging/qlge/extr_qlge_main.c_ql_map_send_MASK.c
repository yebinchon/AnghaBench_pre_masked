
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tx_ring_desc {int map_cnt; int * map; int oal; } ;
struct tx_buf_desc {void* len; void* addr; } ;
struct sk_buff {int * data; } ;
struct ql_adapter {int ndev; TYPE_2__* pdev; } ;
struct ob_mac_iocb_req {struct tx_buf_desc* tbd; } ;
struct oal {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct ql_adapter*,int ,int ,char*,int) ;
 int FUNC_7 (struct ql_adapter*,int ,int ,int ,char*,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int *,int,int ) ;
 int FUNC_10 (struct ql_adapter*,struct tx_ring_desc*,int) ;
 int FUNC_11 (int *,int *,int ,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sk_buff*) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_15(struct ql_adapter *VAR_10,
         struct ob_mac_iocb_req *VAR_11,
         struct sk_buff *VAR_12, struct tx_ring_desc *VAR_13)
{
 int VAR_14 = FUNC_13(VAR_12);
 dma_addr_t VAR_15;
 int VAR_16, VAR_17, VAR_18 = 0;
 struct tx_buf_desc *VAR_19 = VAR_11->tbd;
 int VAR_20 = FUNC_14(VAR_12)->nr_frags;

 if (VAR_20) {
  FUNC_7(VAR_10, VAR_9, VAR_1, VAR_10->ndev,
        "frag_cnt = %d.\n", VAR_20);
 }



 VAR_15 = FUNC_9(VAR_10->pdev, VAR_12->data, VAR_14, VAR_4);

 VAR_17 = FUNC_8(VAR_10->pdev, VAR_15);
 if (VAR_17) {
  FUNC_6(VAR_10, VAR_9, VAR_10->ndev,
     "PCI mapping failed with error: %d\n", VAR_17);

  return VAR_2;
 }

 VAR_19->len = FUNC_0(VAR_14);
 VAR_19->addr = FUNC_1(VAR_15);
 FUNC_3(&VAR_13->map[VAR_18], VAR_7, VAR_15);
 FUNC_4(&VAR_13->map[VAR_18], VAR_8, VAR_14);
 VAR_18++;
 for (VAR_16 = 0; VAR_16 < VAR_20; VAR_16++, VAR_18++) {
  skb_frag_t *VAR_21 = &FUNC_14(VAR_12)->frags[VAR_16];
  VAR_19++;
  if (VAR_16 == 6 && VAR_20 > 7) {
   VAR_15 = FUNC_9(VAR_10->pdev, &VAR_13->oal,
          sizeof(struct oal),
          VAR_4);
   VAR_17 = FUNC_8(VAR_10->pdev, VAR_15);
   if (VAR_17) {
    FUNC_6(VAR_10, VAR_9, VAR_10->ndev,
       "PCI mapping outbound address list with error: %d\n",
       VAR_17);
    goto map_error;
   }

   VAR_19->addr = FUNC_1(VAR_15);





   VAR_19->len =
       FUNC_0((sizeof(struct tx_buf_desc) *
      (VAR_20 - VAR_16)) | VAR_5);
   FUNC_3(&VAR_13->map[VAR_18], VAR_7,
        VAR_15);
   FUNC_4(&VAR_13->map[VAR_18], VAR_8,
       sizeof(struct oal));
   VAR_19 = (struct tx_buf_desc *)&VAR_13->oal;
   VAR_18++;
  }

  VAR_15 = FUNC_11(&VAR_10->pdev->dev, VAR_21, 0, FUNC_12(VAR_21),
           VAR_0);

  VAR_17 = FUNC_2(&VAR_10->pdev->dev, VAR_15);
  if (VAR_17) {
   FUNC_6(VAR_10, VAR_9, VAR_10->ndev,
      "PCI mapping frags failed with error: %d.\n",
      VAR_17);
   goto map_error;
  }

  VAR_19->addr = FUNC_1(VAR_15);
  VAR_19->len = FUNC_0(FUNC_12(VAR_21));
  FUNC_3(&VAR_13->map[VAR_18], VAR_7, VAR_15);
  FUNC_4(&VAR_13->map[VAR_18], VAR_8,
      FUNC_12(VAR_21));

 }

 VAR_13->map_cnt = VAR_18;

 VAR_19->len = FUNC_0(FUNC_5(VAR_19->len) | VAR_6);
 return VAR_3;

map_error:






 FUNC_10(VAR_10, VAR_13, VAR_18);
 return VAR_2;
}
