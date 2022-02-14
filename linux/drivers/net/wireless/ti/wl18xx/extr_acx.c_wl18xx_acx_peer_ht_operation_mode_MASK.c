
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlcore_peer_ht_operation_mode {int bandwidth; int hlid; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wlcore_peer_ht_operation_mode*) ;
 struct wlcore_peer_ht_operation_mode* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wlcore_peer_ht_operation_mode*,int) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_6, u8 VAR_7, bool VAR_8)
{
 struct wlcore_peer_ht_operation_mode *VAR_9;
 int VAR_10;

 FUNC_3(VAR_1, "acx peer ht operation mode hlid %d bw %d",
       VAR_7, VAR_8);

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_9->hlid = VAR_7;
 VAR_9->bandwidth = VAR_8 ? VAR_5 : VAR_4;

 VAR_10 = FUNC_2(VAR_6, VAR_0, VAR_9,
       sizeof(*VAR_9));

 if (VAR_10 < 0) {
  FUNC_4("acx peer ht operation mode failed: %d", VAR_10);
  goto out;
 }

out:
 FUNC_0(VAR_9);
 return VAR_10;

}
