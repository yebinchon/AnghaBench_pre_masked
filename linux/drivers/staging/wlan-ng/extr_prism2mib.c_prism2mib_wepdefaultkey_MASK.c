
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wlandevice {int dummy; } ;
struct p80211pstrd {int len; int data; } ;
struct p80211msg_dot11req_mibset {int dummy; } ;
struct mibrec {int parm1; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfa384x*,int ,int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mibrec *VAR_3,
       int VAR_4,
       struct wlandevice *VAR_5,
       struct hfa384x *VAR_6,
       struct p80211msg_dot11req_mibset *VAR_7,
       void *VAR_8)
{
 int VAR_9;
 struct p80211pstrd *VAR_10 = VAR_8;
 u8 VAR_11[VAR_2];
 u16 VAR_12;

 if (VAR_4) {
  VAR_9 = 0;
 } else {
  VAR_12 = (VAR_10->len > 5) ? VAR_0 :
      VAR_1;
  FUNC_2(VAR_11, 0, VAR_12);
  FUNC_1(VAR_11, VAR_10->data, VAR_10->len);
  VAR_9 = FUNC_0(VAR_6, VAR_3->parm1, VAR_11, VAR_12);
 }

 return VAR_9;
}
