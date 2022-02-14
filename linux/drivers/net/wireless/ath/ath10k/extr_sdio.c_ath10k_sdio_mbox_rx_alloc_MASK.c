
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_sdio {int n_rx_pkts; TYPE_1__* rx_pkts; } ;
struct ath10k_htc_hdr {int flags; int len; int eid; } ;
struct ath10k {int dummy; } ;
struct TYPE_4__ {int alloc_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (struct ath10k_sdio*,size_t) ;
 int FUNC_1 (struct ath10k*,TYPE_1__*,struct ath10k_htc_hdr*,size_t,size_t,size_t*) ;
 int FUNC_2 (TYPE_1__*,size_t,size_t,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 struct ath10k_sdio* FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*,char*,int,...) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_8,
         u32 VAR_9[], int VAR_10)
{
 struct ath10k_sdio *VAR_11 = FUNC_4(VAR_8);
 struct ath10k_htc_hdr *VAR_12;
 size_t VAR_13, VAR_14;
 bool VAR_15;
 int VAR_16, VAR_17;

 if (VAR_10 > VAR_5) {
  FUNC_5(VAR_8,
       "the total number of pkgs to be fetched (%u) exceeds maximum %u\n",
       VAR_10,
       VAR_5);
  VAR_16 = -VAR_7;
  goto err;
 }

 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
  VAR_12 = (struct ath10k_htc_hdr *)&VAR_9[VAR_17];
  VAR_15 = 0;

  if (FUNC_6(VAR_12->len) >
      VAR_3) {
   FUNC_5(VAR_8,
        "payload length %d exceeds max htc length: %zu\n",
        FUNC_6(VAR_12->len),
        VAR_3);
   VAR_16 = -VAR_7;
   goto err;
  }

  VAR_14 = FUNC_6(VAR_12->len) + sizeof(*VAR_12);
  VAR_13 = FUNC_0(VAR_11, VAR_14);

  if (VAR_13 > VAR_4) {
   FUNC_5(VAR_8,
        "rx buffer requested with invalid htc_hdr length (%d, 0x%x): %d\n",
        VAR_12->eid, VAR_12->flags,
        FUNC_6(VAR_12->len));
   VAR_16 = -VAR_6;
   goto err;
  }

  if (VAR_12->flags & VAR_2) {




   size_t VAR_18;

   VAR_16 = FUNC_1(VAR_8,
        &VAR_11->rx_pkts[VAR_17],
        VAR_12,
        VAR_13,
        VAR_14,
        &VAR_18);

   if (VAR_16) {
    FUNC_5(VAR_8, "alloc_bundle error %d\n", VAR_16);
    goto err;
   }

   VAR_10 += VAR_18;
   VAR_17 += VAR_18;

   VAR_15 = 1;
  }





  if (VAR_12->flags & VAR_1)
   VAR_13 += VAR_0;

  VAR_16 = FUNC_2(&VAR_11->rx_pkts[VAR_17],
          VAR_14,
          VAR_13,
          VAR_15,
          VAR_15);
  if (VAR_16) {
   FUNC_5(VAR_8, "alloc_rx_pkt error %d\n", VAR_16);
   goto err;
  }
 }

 VAR_11->n_rx_pkts = VAR_17;

 return 0;

err:
 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
  if (!VAR_11->rx_pkts[VAR_17].alloc_len)
   break;
  FUNC_3(&VAR_11->rx_pkts[VAR_17]);
 }

 return VAR_16;
}
