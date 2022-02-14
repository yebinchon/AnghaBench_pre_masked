
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_energy_detection {scalar_t__ tx_energy_detection; int rx_cca_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_energy_detection*) ;
 struct acx_energy_detection* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_energy_detection*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_5)
{
 struct acx_energy_detection *VAR_6;
 int VAR_7;

 FUNC_3(VAR_2, "acx cca threshold");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_4);
 if (!VAR_6)
  return -VAR_3;

 VAR_6->rx_cca_threshold = VAR_1;
 VAR_6->tx_energy_detection = 0;

 VAR_7 = FUNC_2(VAR_5, VAR_0,
       VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0)
  FUNC_4("failed to set cca threshold: %d", VAR_7);

 FUNC_0(VAR_6);
 return VAR_7;
}
