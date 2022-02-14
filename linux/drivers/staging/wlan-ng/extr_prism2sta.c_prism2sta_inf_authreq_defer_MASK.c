
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct wlandevice {int netdev; struct hfa384x* priv; } ;
struct TYPE_8__ {int algorithm; int * sta_addr; } ;
struct TYPE_9__ {TYPE_3__ authreq; } ;
struct hfa384x_inf_frame {TYPE_4__ info; } ;
struct hfa384x_authenticate_station_data {scalar_t__ status; int algorithm; int * address; } ;
struct TYPE_10__ {int cnt; int ** addr; } ;
struct TYPE_7__ {int cnt; int cnt1; int ** addr1; int ** addr; int modify; } ;
struct TYPE_6__ {int cnt; int cnt1; int ** addr1; int ** addr; int modify; } ;
struct hfa384x {int accessmode; TYPE_5__ authlist; TYPE_2__ deny; TYPE_1__ allow; } ;
typedef int rec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct hfa384x*,int ,struct hfa384x_authenticate_station_data*,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct wlandevice *VAR_6,
     struct hfa384x_inf_frame *VAR_7)
{
 struct hfa384x *VAR_8 = VAR_6->priv;
 struct hfa384x_authenticate_station_data VAR_9;

 int VAR_10, VAR_11, VAR_12, VAR_13;
 u8 *VAR_14;






 FUNC_1(VAR_9.address, VAR_7->info.authreq.sta_addr);
 VAR_9.status = FUNC_0(VAR_4);





 switch (VAR_8->accessmode) {
 case 128:






  for (VAR_10 = 0; VAR_10 < VAR_8->authlist.cnt; VAR_10++)
   if (FUNC_2(VAR_9.address,
          VAR_8->authlist.addr[VAR_10])) {
    VAR_9.status = FUNC_0(VAR_3);
    break;
   }

  break;

 case 131:





  VAR_9.status = FUNC_0(VAR_3);
  break;

 case 130:
  if (VAR_8->allow.modify == 0) {
   VAR_13 = VAR_8->allow.cnt;
   VAR_14 = VAR_8->allow.addr[0];
  } else {
   VAR_13 = VAR_8->allow.cnt1;
   VAR_14 = VAR_8->allow.addr1[0];
  }

  for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++, VAR_14 += VAR_0)
   if (FUNC_2(VAR_9.address, VAR_14)) {
    VAR_9.status = FUNC_0(VAR_3);
    break;
   }

  break;

 case 129:
  if (VAR_8->deny.modify == 0) {
   VAR_13 = VAR_8->deny.cnt;
   VAR_14 = VAR_8->deny.addr[0];
  } else {
   VAR_13 = VAR_8->deny.cnt1;
   VAR_14 = VAR_8->deny.addr1[0];
  }

  VAR_9.status = FUNC_0(VAR_3);

  for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++, VAR_14 += VAR_0)
   if (FUNC_2(VAR_9.address, VAR_14)) {
    VAR_9.status = FUNC_0(VAR_4);
    break;
   }

  break;
 }
 VAR_11 = 0;

 if (VAR_9.status == FUNC_0(VAR_3)) {
  for (VAR_10 = 0; VAR_10 < VAR_8->authlist.cnt; VAR_10++)
   if (FUNC_2(VAR_9.address,
          VAR_8->authlist.addr[VAR_10]))
    break;

  if (VAR_10 >= VAR_8->authlist.cnt) {
   if (VAR_8->authlist.cnt >= VAR_5) {
    VAR_9.status = FUNC_0(VAR_2);
   } else {
    FUNC_1(VAR_8->authlist.addr[VAR_8->authlist.cnt],
      VAR_9.address);
    VAR_8->authlist.cnt++;
    VAR_11 = 1;
   }
  }
 }







 VAR_9.algorithm = VAR_7->info.authreq.algorithm;

 VAR_12 = FUNC_3(VAR_8, VAR_1,
     &VAR_9, sizeof(VAR_9));
 if (VAR_12) {
  if (VAR_11)
   VAR_8->authlist.cnt--;
  FUNC_4(VAR_6->netdev,
      "setconfig(authenticatestation) failed, result=%d\n",
      VAR_12);
 }
}
