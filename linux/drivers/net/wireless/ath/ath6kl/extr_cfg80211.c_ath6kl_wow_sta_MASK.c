
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int const* dev_addr; int flags; } ;
struct ath6kl_vif {int fw_vif_idx; struct net_device* ndev; } ;
struct ath6kl {int wmi; } ;
typedef int discvr_pattern ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int,int,int const*,int const*) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct ath6kl *VAR_4, struct ath6kl_vif *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->ndev;
 static const u8 VAR_7[] = { 0xe0, 0x00, 0x00, 0xf8 };
 static const u8 VAR_8[] = { 0xf0, 0x00, 0x00, 0xf8 };
 u8 VAR_9 = 38;
 u8 VAR_10[VAR_0];
 int VAR_11;


 FUNC_2(VAR_10);
 VAR_11 = FUNC_1(VAR_4->wmi,
    VAR_5->fw_vif_idx, VAR_3,
    VAR_0, 0, VAR_6->dev_addr,
    VAR_10);
 if (VAR_11) {
  FUNC_0("failed to add WOW unicast pattern\n");
  return VAR_11;
 }





 if ((VAR_6->flags & VAR_1) ||
     (VAR_6->flags & VAR_2 && FUNC_3(VAR_6) > 0)) {
  VAR_11 = FUNC_1(VAR_4->wmi,
    VAR_5->fw_vif_idx, VAR_3,
    sizeof(VAR_7), VAR_9,
    VAR_7, VAR_8);
  if (VAR_11) {
   FUNC_0("failed to add WOW mDNS/SSDP/LLMNR pattern\n");
   return VAR_11;
  }
 }

 return 0;
}
