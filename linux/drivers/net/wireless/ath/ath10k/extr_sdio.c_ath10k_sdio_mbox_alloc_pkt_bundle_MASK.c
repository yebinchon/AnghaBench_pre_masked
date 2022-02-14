
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_sdio_rx_data {int dummy; } ;
struct ath10k_htc_hdr {int len; int flags; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ) ;
 size_t VAR_2 ;
 int FUNC_1 (struct ath10k_sdio_rx_data*,size_t,size_t,int,int) ;
 int FUNC_2 (struct ath10k*,char*,int ,size_t) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_3,
          struct ath10k_sdio_rx_data *VAR_4,
          struct ath10k_htc_hdr *VAR_5,
          size_t VAR_6, size_t VAR_7,
          size_t *VAR_8)
{
 int VAR_9, VAR_10;

 *VAR_8 = FUNC_0(VAR_0, VAR_5->flags);

 if (*VAR_8 > VAR_2) {
  FUNC_2(VAR_3,
       "HTC bundle length %u exceeds maximum %u\n",
       FUNC_3(VAR_5->len),
       VAR_2);
  return -VAR_1;
 }







 for (VAR_10 = 0; VAR_10 < *VAR_8; VAR_10++) {
  VAR_9 = FUNC_1(&VAR_4[VAR_10],
          VAR_7,
          VAR_6,
          1,
          0);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
