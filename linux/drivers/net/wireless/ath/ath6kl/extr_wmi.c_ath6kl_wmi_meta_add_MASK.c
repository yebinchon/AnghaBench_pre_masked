
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_tx_meta_v2 {int dummy; } ;
struct wmi_tx_meta_v1 {int rate_plcy_id; int pkt_id; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;


 int FUNC_1 (struct wmi_tx_meta_v2*,struct wmi_tx_meta_v2*,int) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_3(struct wmi *VAR_2, struct sk_buff *VAR_3,
          u8 *VAR_4, void *VAR_5)
{
 struct wmi_tx_meta_v1 *VAR_6;
 struct wmi_tx_meta_v2 *VAR_7;

 if (FUNC_0(VAR_3 == ((void*)0) || VAR_4 == ((void*)0)))
  return -VAR_0;

 switch (*VAR_4) {
 case 129:
  FUNC_2(VAR_3, VAR_1);
  VAR_6 = (struct wmi_tx_meta_v1 *) VAR_3->data;
  VAR_6->pkt_id = 0;
  VAR_6->rate_plcy_id = 0;
  *VAR_4 = 129;
  break;
 case 128:
  FUNC_2(VAR_3, VAR_1);
  VAR_7 = (struct wmi_tx_meta_v2 *) VAR_3->data;
  FUNC_1(VAR_7, (struct wmi_tx_meta_v2 *) VAR_5,
         sizeof(struct wmi_tx_meta_v2));
  break;
 }

 return 0;
}
