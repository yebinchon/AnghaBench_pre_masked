
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ks_wlan_private {int net_dev; } ;
struct hostif_hdr {int event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ks_wlan_private*,int ,int *,unsigned long) ;
 int FUNC_1 (struct ks_wlan_private*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct ks_wlan_private *VAR_5, u8 *VAR_6,
      unsigned long VAR_7)
{
 struct hostif_hdr *VAR_8;
 int VAR_9;

 VAR_8 = (struct hostif_hdr *)VAR_6;

 if (FUNC_2(VAR_8->event) < VAR_1 ||
     FUNC_2(VAR_8->event) > VAR_2) {
  FUNC_3(VAR_5->net_dev, "unknown event=%04X\n", VAR_8->event);
  return 0;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_0, VAR_6, VAR_7);
 if (VAR_9) {
  FUNC_3(VAR_5->net_dev, "write DATA_WINDOW\n");
  return VAR_9;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_4, VAR_3);
 if (VAR_9) {
  FUNC_3(VAR_5->net_dev, "write WRITE_STATUS_REG\n");
  return VAR_9;
 }

 return 0;
}
