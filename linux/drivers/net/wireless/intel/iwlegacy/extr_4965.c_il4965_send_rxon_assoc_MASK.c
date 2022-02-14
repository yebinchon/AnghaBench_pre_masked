
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_rxon_cmd {scalar_t__ flags; scalar_t__ filter_flags; scalar_t__ cck_basic_rates; scalar_t__ ofdm_ht_single_stream_basic_rates; scalar_t__ ofdm_ht_dual_stream_basic_rates; scalar_t__ rx_chain; scalar_t__ ofdm_basic_rates; } ;
struct il_priv {struct il_rxon_cmd staging; int mutex; struct il_rxon_cmd active; } ;
struct il4965_rxon_assoc_cmd {scalar_t__ flags; scalar_t__ filter_flags; scalar_t__ ofdm_basic_rates; scalar_t__ cck_basic_rates; scalar_t__ ofdm_ht_single_stream_basic_rates; scalar_t__ ofdm_ht_dual_stream_basic_rates; scalar_t__ rx_chain_select_flags; scalar_t__ reserved; } ;
typedef int rxon_assoc ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct il_priv*,int ,int,struct il4965_rxon_assoc_cmd*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_1)
{
 int VAR_2 = 0;
 struct il4965_rxon_assoc_cmd VAR_3;
 const struct il_rxon_cmd *VAR_4 = &VAR_1->staging;
 const struct il_rxon_cmd *VAR_5 = &VAR_1->active;

 FUNC_2(&VAR_1->mutex);

 if (VAR_4->flags == VAR_5->flags &&
     VAR_4->filter_flags == VAR_5->filter_flags &&
     VAR_4->cck_basic_rates == VAR_5->cck_basic_rates &&
     VAR_4->ofdm_ht_single_stream_basic_rates ==
     VAR_5->ofdm_ht_single_stream_basic_rates &&
     VAR_4->ofdm_ht_dual_stream_basic_rates ==
     VAR_5->ofdm_ht_dual_stream_basic_rates &&
     VAR_4->rx_chain == VAR_5->rx_chain &&
     VAR_4->ofdm_basic_rates == VAR_5->ofdm_basic_rates) {
  FUNC_0("Using current RXON_ASSOC.  Not resending.\n");
  return 0;
 }

 VAR_3.flags = VAR_1->staging.flags;
 VAR_3.filter_flags = VAR_1->staging.filter_flags;
 VAR_3.ofdm_basic_rates = VAR_1->staging.ofdm_basic_rates;
 VAR_3.cck_basic_rates = VAR_1->staging.cck_basic_rates;
 VAR_3.reserved = 0;
 VAR_3.ofdm_ht_single_stream_basic_rates =
     VAR_1->staging.ofdm_ht_single_stream_basic_rates;
 VAR_3.ofdm_ht_dual_stream_basic_rates =
     VAR_1->staging.ofdm_ht_dual_stream_basic_rates;
 VAR_3.rx_chain_select_flags = VAR_1->staging.rx_chain;

 VAR_2 =
     FUNC_1(VAR_1, VAR_0, sizeof(VAR_3),
      &VAR_3, ((void*)0));

 return VAR_2;
}
