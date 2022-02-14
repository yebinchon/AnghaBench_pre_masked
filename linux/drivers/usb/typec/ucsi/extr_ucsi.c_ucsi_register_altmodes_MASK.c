
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ucsi_control {int dummy; } ;
struct ucsi_connector {TYPE_2__* ucsi; int num; scalar_t__* partner_altmode; } ;
struct ucsi_altmode {int roles; scalar_t__ svid; int mid; int vdo; } ;
struct typec_altmode_desc {int roles; scalar_t__ svid; int mid; int vdo; } ;
typedef int desc ;
typedef int alt ;
struct TYPE_3__ {int features; int num_alt_modes; } ;
struct TYPE_4__ {TYPE_1__ cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ucsi_control,int ,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ucsi_altmode*,int ,int) ;
 int FUNC_2 (struct ucsi_connector*,struct ucsi_altmode*,int ) ;
 int FUNC_3 (TYPE_2__*,struct ucsi_control*,struct ucsi_altmode*,int) ;

__attribute__((used)) static int FUNC_4(struct ucsi_connector *VAR_5, u8 VAR_6)
{
 int VAR_7 = VAR_2;
 struct typec_altmode_desc VAR_8;
 struct ucsi_altmode VAR_9[2];
 struct ucsi_control VAR_10;
 int VAR_11 = 1;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 if (!(VAR_5->ucsi->cap.features & VAR_1))
  return 0;

 if (VAR_6 == VAR_4 && VAR_5->partner_altmode[0])
  return 0;

 if (VAR_6 == VAR_3)
  VAR_7 = VAR_5->ucsi->cap.num_alt_modes;

 for (VAR_15 = 0; VAR_15 < VAR_7;) {
  FUNC_1(VAR_9, 0, sizeof(VAR_9));
  FUNC_0(VAR_10, VAR_6, VAR_5->num, VAR_15, 1);
  VAR_13 = FUNC_3(VAR_5->ucsi, &VAR_10, VAR_9, sizeof(VAR_9));
  if (VAR_13 <= 0)
   return VAR_13;







  VAR_11 = VAR_13 / sizeof(VAR_9[0]);
  VAR_15 += VAR_11;

  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
   if (!VAR_9[VAR_14].svid)
    return 0;

   FUNC_1(&VAR_8, 0, sizeof(VAR_8));
   VAR_8.vdo = VAR_9[VAR_14].mid;
   VAR_8.svid = VAR_9[VAR_14].svid;
   VAR_8.roles = VAR_0;

   VAR_12 = FUNC_2(VAR_5, &VAR_8, VAR_6);
   if (VAR_12)
    return VAR_12;
  }
 }

 return 0;
}
