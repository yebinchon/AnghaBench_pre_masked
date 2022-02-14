
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_compl_threshold; int tx_compl_timeout; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct acx_tx_config_options {void* tx_compl_threshold; void* tx_compl_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct acx_tx_config_options*) ;
 struct acx_tx_config_options* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_tx_config_options*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4)
{
 struct acx_tx_config_options *VAR_5;
 int VAR_6 = 0;

 FUNC_4(VAR_1, "acx tx config options");

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);

 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_5->tx_compl_timeout = FUNC_0(VAR_4->conf.tx.tx_compl_timeout);
 VAR_5->tx_compl_threshold = FUNC_0(VAR_4->conf.tx.tx_compl_threshold);
 VAR_6 = FUNC_3(VAR_4, VAR_0, VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0) {
  FUNC_5("Setting of tx options failed: %d", VAR_6);
  goto out;
 }

out:
 FUNC_1(VAR_5);
 return VAR_6;
}
