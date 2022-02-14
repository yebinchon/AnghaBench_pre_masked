
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct htc_target {int max_xfer_szper_scatreq; scalar_t__ max_scat_entries; } ;
struct ath6kl_sdio {int scatter_enabled; TYPE_3__* func; } ;
struct ath6kl {struct htc_target* htc_target; } ;
struct TYPE_6__ {TYPE_2__* card; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ max_segs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ath6kl_sdio*,scalar_t__,int ,int) ;
 int FUNC_3 (struct ath6kl*) ;
 struct ath6kl_sdio* FUNC_4 (struct ath6kl*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct ath6kl *VAR_7)
{
 struct ath6kl_sdio *VAR_8 = FUNC_4(VAR_7);
 struct htc_target *VAR_9 = VAR_7->htc_target;
 int VAR_10 = 0;
 bool VAR_11 = 0;

 if (VAR_8->scatter_enabled)
  return 0;

 VAR_8->scatter_enabled = 1;


 if (VAR_8->func->card->host->max_segs < VAR_4) {
  FUNC_1("host only supports scatter of :%d entries, need: %d\n",
      VAR_8->func->card->host->max_segs,
      VAR_4);
  VAR_11 = 1;
 }

 if (!VAR_11) {
  VAR_10 = FUNC_2(VAR_8,
    VAR_4,
    VAR_5, VAR_11);

  if (!VAR_10) {
   FUNC_0(VAR_0,
       "hif-scatter enabled requests %d entries %d\n",
       VAR_5,
       VAR_4);

   VAR_9->max_scat_entries = VAR_4;
   VAR_9->max_xfer_szper_scatreq =
      VAR_6;
  } else {
   FUNC_3(VAR_7);
   FUNC_5("hif scatter resource setup failed, trying virtual scatter method\n");
  }
 }

 if (VAR_11 || VAR_10) {
  VAR_10 = FUNC_2(VAR_8,
    VAR_2,
    VAR_3, VAR_11);

  if (VAR_10) {
   FUNC_1("failed to alloc virtual scatter resources !\n");
   FUNC_3(VAR_7);
   return VAR_10;
  }

  FUNC_0(VAR_0,
      "virtual scatter enabled requests %d entries %d\n",
      VAR_3, VAR_2);

  VAR_9->max_scat_entries = VAR_2;
  VAR_9->max_xfer_szper_scatreq =
     VAR_1;
 }

 return 0;
}
