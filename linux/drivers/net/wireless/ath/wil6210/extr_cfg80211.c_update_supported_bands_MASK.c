
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {TYPE_2__** bands; } ;
struct wil6210_priv {int fw_capabilities; } ;
struct TYPE_3__ {int bw_config; int channels; } ;
struct TYPE_4__ {TYPE_1__ edmg_cap; int n_channels; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_priv*) ;
 struct wiphy* FUNC_3 (struct wil6210_priv*) ;

void FUNC_4(struct wil6210_priv *VAR_4)
{
 struct wiphy *VAR_5 = FUNC_3(VAR_4);

 FUNC_1(VAR_4, "update supported bands");

 VAR_5->bands[VAR_0]->n_channels =
      FUNC_2(VAR_4);

 if (FUNC_0(VAR_3, VAR_4->fw_capabilities)) {
  VAR_5->bands[VAR_0]->edmg_cap.channels =
       VAR_2;
  VAR_5->bands[VAR_0]->edmg_cap.bw_config =
            VAR_1;
 }
}
