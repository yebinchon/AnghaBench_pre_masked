
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_setpmkid_cmd {int enable; int pmkid; int bssid; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct wmi *VAR_7, u8 VAR_8, const u8 *VAR_9,
       const u8 *VAR_10, bool VAR_11)
{
 struct sk_buff *VAR_12;
 struct wmi_setpmkid_cmd *VAR_13;
 int VAR_14;

 if (VAR_9 == ((void*)0))
  return -VAR_0;

 if (VAR_11 && VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_12 = FUNC_1(sizeof(*VAR_13));
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = (struct wmi_setpmkid_cmd *) VAR_12->data;
 FUNC_2(VAR_13->bssid, VAR_9, VAR_2);
 if (VAR_11) {
  FUNC_2(VAR_13->pmkid, VAR_10, sizeof(VAR_13->pmkid));
  VAR_13->enable = VAR_5;
 } else {
  FUNC_3(VAR_13->pmkid, 0, sizeof(VAR_13->pmkid));
  VAR_13->enable = VAR_4;
 }

 VAR_14 = FUNC_0(VAR_7, VAR_8, VAR_12, VAR_6,
      VAR_3);

 return VAR_14;
}
