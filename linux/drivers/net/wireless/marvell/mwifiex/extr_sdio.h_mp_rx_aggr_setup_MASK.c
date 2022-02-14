
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int pkt_cnt; int start_port; int ports; scalar_t__* len_arr; int ** skb_arr; int buf_len; } ;
struct sdio_mmc_card {TYPE_1__ mpa_rx; scalar_t__ supports_sdio_new_mode; } ;



__attribute__((used)) static inline void FUNC_0(struct sdio_mmc_card *VAR_0,
        u16 VAR_1, u8 VAR_2)
{
 VAR_0->mpa_rx.buf_len += VAR_1;

 if (!VAR_0->mpa_rx.pkt_cnt)
  VAR_0->mpa_rx.start_port = VAR_2;

 if (VAR_0->supports_sdio_new_mode) {
  VAR_0->mpa_rx.ports |= (1 << VAR_2);
 } else {
  if (VAR_0->mpa_rx.start_port <= VAR_2)
   VAR_0->mpa_rx.ports |= 1 << (VAR_0->mpa_rx.pkt_cnt);
  else
   VAR_0->mpa_rx.ports |= 1 << (VAR_0->mpa_rx.pkt_cnt + 1);
 }
 VAR_0->mpa_rx.skb_arr[VAR_0->mpa_rx.pkt_cnt] = ((void*)0);
 VAR_0->mpa_rx.len_arr[VAR_0->mpa_rx.pkt_cnt] = VAR_1;
 VAR_0->mpa_rx.pkt_cnt++;
}
