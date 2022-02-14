
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlandevice {int netdev; struct hfa384x* priv; } ;
struct TYPE_3__ {int assocstatus; } ;
struct hfa384x_inf_frame {TYPE_1__ info; } ;
struct hfa384x_assoc_status {scalar_t__ assocstatus; scalar_t__ reason; int sta_addr; } ;
struct TYPE_4__ {int cnt; int* assoc; int * addr; } ;
struct hfa384x {TYPE_2__ authlist; } ;
typedef int rec ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct hfa384x_assoc_status*,int *,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct wlandevice *VAR_3,
          struct hfa384x_inf_frame *VAR_4)
{
 struct hfa384x *VAR_5 = VAR_3->priv;
 struct hfa384x_assoc_status VAR_6;
 int VAR_7;

 FUNC_2(&VAR_6, &VAR_4->info.assocstatus, sizeof(VAR_6));
 FUNC_1(&VAR_6.assocstatus);
 FUNC_1(&VAR_6.reason);
 for (VAR_7 = 0; VAR_7 < VAR_5->authlist.cnt; VAR_7++)
  if (FUNC_0(VAR_6.sta_addr, VAR_5->authlist.addr[VAR_7]))
   break;

 if (VAR_7 >= VAR_5->authlist.cnt) {
  if (VAR_6.assocstatus != VAR_0)
   FUNC_3(VAR_3->netdev,
        "assocstatus info frame received for non-authenticated station.\n");
 } else {
  VAR_5->authlist.assoc[VAR_7] =
      (VAR_6.assocstatus == VAR_2 ||
       VAR_6.assocstatus == VAR_1);

  if (VAR_6.assocstatus == VAR_0)
   FUNC_3(VAR_3->netdev,
        "authfail assocstatus info frame received for authenticated station.\n");
 }
}
