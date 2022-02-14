
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlandevice {int dummy; } ;
struct p80211pstrd {int len; int data; } ;
struct p80211msg_dot11req_mibset {int dummy; } ;
struct mibrec {int parm2; int parm1; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfa384x*,int ,int *,int ) ;
 int FUNC_1 (struct hfa384x*,int ,int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,struct p80211pstrd*,int ) ;

__attribute__((used)) static int FUNC_5(struct mibrec *VAR_1,
       int VAR_2,
       struct wlandevice *VAR_3,
       struct hfa384x *VAR_4,
       struct p80211msg_dot11req_mibset *VAR_5,
       void *VAR_6)
{
 int VAR_7;
 struct p80211pstrd *VAR_8 = VAR_6;
 u8 VAR_9[VAR_0];

 if (VAR_2) {
  VAR_7 =
      FUNC_0(VAR_4, VAR_1->parm1, VAR_9, VAR_1->parm2);
  FUNC_4(VAR_9, VAR_8, VAR_1->parm2);
 } else {
  FUNC_3(VAR_9, 0, VAR_1->parm2);
  FUNC_2(VAR_9, VAR_8->data, VAR_8->len);
  VAR_7 =
      FUNC_1(VAR_4, VAR_1->parm1, VAR_9, VAR_1->parm2);
 }

 return VAR_7;
}
