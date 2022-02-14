
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_7__ {TYPE_1__* wiphy; } ;
struct mwifiex_private {TYPE_2__ wdev; } ;
struct TYPE_8__ {void* len; void* type; } ;
struct mwifiex_ie_types_pwr_capability {scalar_t__ max_pwr; scalar_t__ min_pwr; TYPE_3__ header; } ;
struct TYPE_9__ {void* len; void* type; } ;
struct mwifiex_ie_types_local_pwr_constraint {int constraint; int chan; TYPE_4__ header; } ;
struct mwifiex_ie_types_header {void* len; void* type; } ;
struct mwifiex_bssdescriptor {int local_constraint; int channel; scalar_t__ bss_band; } ;
struct ieee80211_supported_band {int n_channels; TYPE_5__* channels; } ;
struct TYPE_10__ {int center_freq; } ;
struct TYPE_6__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (size_t) ;

__attribute__((used)) static void
FUNC_3(struct mwifiex_private *VAR_4, u8 **VAR_5,
          struct mwifiex_bssdescriptor *VAR_6)
{
 struct mwifiex_ie_types_header *VAR_7;
 struct mwifiex_ie_types_pwr_capability *VAR_8;
 struct mwifiex_ie_types_local_pwr_constraint *VAR_9;
 struct ieee80211_supported_band *VAR_10;
 u8 VAR_11;
 int VAR_12;

 if (!VAR_5 || !(*VAR_5))
  return;

 VAR_11 = FUNC_2((u8) VAR_6->bss_band);
 VAR_10 = VAR_4->wdev.wiphy->bands[VAR_11];

 VAR_8 = (struct mwifiex_ie_types_pwr_capability *)*VAR_5;
 VAR_8->header.type = FUNC_0(VAR_1);
 VAR_8->header.len = FUNC_0(2);
 VAR_8->min_pwr = 0;
 VAR_8->max_pwr = 0;
 *VAR_5 += sizeof(*VAR_8);

 VAR_9 = (struct mwifiex_ie_types_local_pwr_constraint *)*VAR_5;
 VAR_9->header.type = FUNC_0(VAR_2);
 VAR_9->header.len = FUNC_0(2);
 VAR_9->chan = VAR_6->channel;
 VAR_9->constraint = VAR_6->local_constraint;
 *VAR_5 += sizeof(*VAR_9);

 VAR_7 = (struct mwifiex_ie_types_header *)*VAR_5;
 VAR_7->type = FUNC_0(VAR_0);
 VAR_7->len = FUNC_0(2 * VAR_10->n_channels + 2);
 *VAR_5 += sizeof(*VAR_7);
 *(*VAR_5)++ = VAR_3;
 *(*VAR_5)++ = 2 * VAR_10->n_channels;
 for (VAR_12 = 0; VAR_12 < VAR_10->n_channels; VAR_12++) {
  *(*VAR_5)++ = FUNC_1(
     VAR_10->channels[VAR_12].center_freq);
  *(*VAR_5)++ = 1;
 }
}
