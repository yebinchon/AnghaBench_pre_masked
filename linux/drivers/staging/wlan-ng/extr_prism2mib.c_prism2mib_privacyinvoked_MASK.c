
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int hostwep; } ;
struct p80211msg_dot11req_mibset {int dummy; } ;
struct mibrec {int parm2; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mibrec*,int,struct wlandevice*,struct hfa384x*,struct p80211msg_dot11req_mibset*,void*) ;

__attribute__((used)) static int FUNC_1(struct mibrec *VAR_4,
        int VAR_5,
        struct wlandevice *VAR_6,
        struct hfa384x *VAR_7,
        struct p80211msg_dot11req_mibset *VAR_8,
        void *VAR_9)
{
 if (VAR_6->hostwep & VAR_2) {
  if (VAR_6->hostwep & VAR_2)
   VAR_4->parm2 |= VAR_0;
  if (VAR_6->hostwep & VAR_3)
   VAR_4->parm2 |= VAR_1;
 }

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
