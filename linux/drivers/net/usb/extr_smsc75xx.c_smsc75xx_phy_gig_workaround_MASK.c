
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_if_info {int phy_id; } ;
struct usbnet {int net; struct mii_if_info mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct usbnet*,int ,int*) ;
 int FUNC_4 (struct usbnet*,int ,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_4)
{
 struct mii_if_info *VAR_5 = &VAR_4->mii;
 int VAR_6 = 0, VAR_7 = 0;
 u32 VAR_8, VAR_9 = 0;


 FUNC_2(VAR_4->net, VAR_5->phy_id, VAR_1, 0x4040);


 do {
  VAR_9 = FUNC_1(VAR_4);
  FUNC_5(10000, 20000);
  VAR_7++;
 } while ((!VAR_9) && (VAR_7 < 1000));

 if (VAR_7 >= 1000) {
  FUNC_0(VAR_4->net, "Timeout waiting for PHY link up\n");
  return -VAR_0;
 }


 VAR_6 = FUNC_3(VAR_4, VAR_2, &VAR_8);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->net, "Failed to read PMT_CTL: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_8 |= VAR_3;

 VAR_6 = FUNC_4(VAR_4, VAR_2, VAR_8);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->net, "Failed to write PMT_CTL: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_7 = 0;
 do {
  FUNC_5(10000, 20000);
  VAR_6 = FUNC_3(VAR_4, VAR_2, &VAR_8);
  if (VAR_6 < 0) {
   FUNC_0(VAR_4->net, "Failed to read PMT_CTL: %d\n",
        VAR_6);
   return VAR_6;
  }
  VAR_7++;
 } while ((VAR_8 & VAR_3) && (VAR_7 < 100));

 if (VAR_7 >= 100) {
  FUNC_0(VAR_4->net, "timeout waiting for PHY Reset\n");
  return -VAR_0;
 }

 return 0;
}
