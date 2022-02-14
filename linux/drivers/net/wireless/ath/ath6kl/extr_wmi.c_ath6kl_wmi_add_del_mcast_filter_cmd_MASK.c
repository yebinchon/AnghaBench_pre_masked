
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_mcast_filter_add_del_cmd {int mcast_mac; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct wmi*,int,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ,int*,int ) ;

int FUNC_4(struct wmi *VAR_6, u8 VAR_7,
     u8 *VAR_8, bool VAR_9)
{
 struct sk_buff *VAR_10;
 struct wmi_mcast_filter_add_del_cmd *VAR_11;
 int VAR_12;

 if ((VAR_8[0] != 0x33 || VAR_8[1] != 0x33) &&
     (VAR_8[0] != 0x01 || VAR_8[1] != 0x00 ||
     VAR_8[2] != 0x5e || VAR_8[3] > 0x7f)) {
  FUNC_0("invalid multicast filter address\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_2(sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = (struct wmi_mcast_filter_add_del_cmd *) VAR_10->data;
 FUNC_3(VAR_11->mcast_mac, VAR_8, VAR_0);
 VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_10,
      VAR_9 ? VAR_5 :
      VAR_4,
      VAR_3);

 return VAR_12;
}
