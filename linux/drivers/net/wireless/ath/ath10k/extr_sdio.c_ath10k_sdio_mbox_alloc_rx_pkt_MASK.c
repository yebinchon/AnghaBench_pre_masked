
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_sdio_rx_data {size_t act_len; size_t alloc_len; int part_of_bundle; int last_in_bundle; int trailer_only; int skb; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k_sdio_rx_data *VAR_1,
      size_t VAR_2, size_t VAR_3,
      bool VAR_4,
      bool VAR_5)
{
 VAR_1->skb = FUNC_0(VAR_3);
 if (!VAR_1->skb)
  return -VAR_0;

 VAR_1->act_len = VAR_2;
 VAR_1->alloc_len = VAR_3;
 VAR_1->part_of_bundle = VAR_4;
 VAR_1->last_in_bundle = VAR_5;
 VAR_1->trailer_only = 0;

 return 0;
}
