
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl1251 {int rx_config; int bssid; int tx_mgmt_frm_mod; int tx_mgmt_frm_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wl1251*,int ,int ,int ,int ) ;
 int FUNC_2 (struct wl1251*,int ,int ,int ,int ) ;
 int FUNC_3 (struct wl1251*,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct wl1251 *VAR_4, u8 VAR_5, u8 VAR_6,
         u16 VAR_7, u8 VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_2,
         VAR_1,
         VAR_4->tx_mgmt_frm_rate,
         VAR_4->tx_mgmt_frm_mod);
 if (VAR_9 < 0)
  goto out;





 if (FUNC_0(VAR_4->bssid))
  VAR_4->rx_config &= ~VAR_0;

 VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_3(VAR_4, VAR_3, 100);
 if (VAR_9 < 0)
  FUNC_4("join timeout");

out:
 return VAR_9;
}
