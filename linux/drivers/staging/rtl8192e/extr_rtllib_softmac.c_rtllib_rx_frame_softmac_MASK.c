
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct rtllib_rx_stats {int dummy; } ;
struct rtllib_hdr_3addr {int frame_ctl; } ;
struct rtllib_device {int softmac_features; int iw_mode; int proto_started; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtllib_device*,struct sk_buff*) ;
 int FUNC_3 (struct rtllib_device*,struct sk_buff*,struct rtllib_rx_stats*) ;
 int FUNC_4 (struct rtllib_device*,struct sk_buff*) ;
 int FUNC_5 (struct rtllib_device*,struct sk_buff*,struct rtllib_rx_stats*) ;
 int FUNC_6 (struct rtllib_device*,struct sk_buff*) ;

inline int FUNC_7(struct rtllib_device *VAR_2,
       struct sk_buff *VAR_3,
       struct rtllib_rx_stats *VAR_4, u16 VAR_5,
       u16 VAR_6)
{
 struct rtllib_hdr_3addr *VAR_7 = (struct rtllib_hdr_3addr *) VAR_3->data;
 u16 VAR_8;

 if (!VAR_2->proto_started)
  return 0;

 VAR_8 = FUNC_1(VAR_7->frame_ctl);
 switch (FUNC_0(VAR_8)) {
 case 134:
 case 128:
  if (FUNC_3(VAR_2, VAR_3, VAR_4) == 1)
   return 1;
  break;
 case 135:
 case 129:
  if ((VAR_2->softmac_features & VAR_0) &&
       VAR_2->iw_mode == VAR_1)
   FUNC_4(VAR_2, VAR_3);
  break;
 case 133:
  FUNC_5(VAR_2, VAR_3, VAR_4);
  break;
 case 131:
 case 132:
  FUNC_6(VAR_2, VAR_3);
  break;
 case 130:
  FUNC_2(VAR_2, VAR_3);
  break;
 default:
  return -1;
 }
 return 0;
}
