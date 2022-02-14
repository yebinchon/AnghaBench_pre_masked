
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {struct device* dev; } ;
struct wusb_dn_hdr {int bType; } ;
struct device {int dummy; } ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,char*,int,int,int ) ;
 int FUNC_2 (struct wusbhc*,int ) ;
 int FUNC_3 (struct wusbhc*,struct wusb_dn_hdr*,size_t) ;
 int FUNC_4 (struct wusbhc*,int ) ;

void FUNC_5(struct wusbhc *VAR_0, u8 VAR_1,
        struct wusb_dn_hdr *VAR_2, size_t VAR_3)
{
 struct device *VAR_4 = VAR_0->dev;

 if (VAR_3 < sizeof(struct wusb_dn_hdr)) {
  FUNC_0(VAR_4, "DN data shorter than DN header (%d < %d)\n",
   (int)VAR_3, (int)sizeof(struct wusb_dn_hdr));
  return;
 }
 switch (VAR_2->bType) {
 case 133:
  FUNC_3(VAR_0, VAR_2, VAR_3);
  break;
 case 134:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 132:
  FUNC_4(VAR_0, VAR_1);
  break;
 case 130:
 case 129:
 case 128:

  break;
 case 131:

  break;
 default:
  FUNC_1(VAR_4, "unknown DN %u (%d octets) from %u\n",
    VAR_2->bType, (int)VAR_3, VAR_1);
 }
}
