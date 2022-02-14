
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wlandevice {int netdev; } ;
struct TYPE_2__ {int data; } ;
struct p80211msg_dot11req_mibset {TYPE_1__ resultcode; } ;
struct mibrec {int dummy; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mibrec*,int,struct wlandevice*,struct hfa384x*,struct p80211msg_dot11req_mibset*,void*) ;

__attribute__((used)) static int
FUNC_2(struct mibrec *VAR_1,
     int VAR_2,
     struct wlandevice *VAR_3,
     struct hfa384x *VAR_4,
     struct p80211msg_dot11req_mibset *VAR_5,
     void *VAR_6)
{
 u32 *VAR_7 = VAR_6;

 if (!VAR_2)
  if ((*VAR_7) % 2) {
   FUNC_0(VAR_3->netdev,
        "Attempt to set odd number FragmentationThreshold\n");
   VAR_5->resultcode.data =
       VAR_0;
   return 0;
  }

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
