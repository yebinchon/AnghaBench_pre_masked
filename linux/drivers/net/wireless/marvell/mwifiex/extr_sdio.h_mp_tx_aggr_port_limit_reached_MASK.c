
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int start_port; } ;
struct sdio_mmc_card {int curr_wr_port; int mp_end_port; int mp_agg_pkt_limit; int max_ports; TYPE_1__ mpa_tx; scalar_t__ supports_sdio_new_mode; } ;



__attribute__((used)) static inline bool
FUNC_0(struct sdio_mmc_card *VAR_0)
{
 u16 VAR_1;

 if (VAR_0->curr_wr_port < VAR_0->mpa_tx.start_port) {
  if (VAR_0->supports_sdio_new_mode)
   VAR_1 = VAR_0->mp_end_port >> 1;
  else
   VAR_1 = VAR_0->mp_agg_pkt_limit;

  if (((VAR_0->max_ports - VAR_0->mpa_tx.start_port) +
      VAR_0->curr_wr_port) >= VAR_1)
   return 1;
 }

 if (!VAR_0->supports_sdio_new_mode)
  return 0;

 if ((VAR_0->curr_wr_port - VAR_0->mpa_tx.start_port) >=
     (VAR_0->mp_end_port >> 1))
  return 1;

 return 0;
}
