
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int tx_res_if; int raw_fw_status; int fw_status; int quirks; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271*) ;
 int FUNC_2 (struct wl1271*) ;
 int FUNC_3 (struct wl1271*,int) ;
 int FUNC_4 (struct wl1271*) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 < 0)
  goto out;
 if (!FUNC_1(VAR_1))
  VAR_1->quirks &= ~VAR_0;



 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1->fw_status);
  FUNC_0(VAR_1->raw_fw_status);
  FUNC_0(VAR_1->tx_res_if);
 }

out:
 return VAR_3;
}
