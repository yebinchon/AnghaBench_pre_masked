
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl3501_card {int bssid; int cap_info; } ;
struct wl3501_assoc_req {int timeout; int listen_interval; int mac_addr; int cap_info; int sig_id; } ;
typedef int sig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wl3501_card*,struct wl3501_assoc_req*,int) ;

__attribute__((used)) static int FUNC_3(struct wl3501_card *VAR_2)
{
 struct wl3501_assoc_req VAR_3 = {
  .sig_id = VAR_1,
  .timeout = 1000,
  .listen_interval = 5,
  .cap_info = VAR_2->cap_info,
 };

 FUNC_1("entry");
 FUNC_0(VAR_3.mac_addr, VAR_2->bssid, VAR_0);
 return FUNC_2(VAR_2, &VAR_3, sizeof(VAR_3));
}
