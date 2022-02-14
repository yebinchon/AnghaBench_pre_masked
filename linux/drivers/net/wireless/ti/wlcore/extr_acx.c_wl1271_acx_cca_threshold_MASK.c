
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tx_energy_detection; } ;
struct TYPE_4__ {int rx_cca_threshold; } ;
struct TYPE_6__ {TYPE_2__ tx; TYPE_1__ rx; } ;
struct wl1271 {TYPE_3__ conf; } ;
struct acx_energy_detection {int tx_energy_detection; int rx_cca_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx_energy_detection*) ;
 struct acx_energy_detection* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_energy_detection*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4)
{
 struct acx_energy_detection *VAR_5;
 int VAR_6;

 FUNC_4(VAR_1, "acx cca threshold");

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_5->rx_cca_threshold = FUNC_0(VAR_4->conf.rx.rx_cca_threshold);
 VAR_5->tx_energy_detection = VAR_4->conf.tx.tx_energy_detection;

 VAR_6 = FUNC_3(VAR_4, VAR_0,
       VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0)
  FUNC_5("failed to set cca threshold: %d", VAR_6);

out:
 FUNC_1(VAR_5);
 return VAR_6;
}
