
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ucsi_connector {TYPE_2__* ucsi; struct typec_altmode** partner_altmode; int partner; struct typec_altmode** port_altmode; int port; } ;
struct typec_altmode_desc {void* mode; int svid; } ;
struct typec_altmode {int dummy; } ;
struct TYPE_3__ {int features; } ;
struct TYPE_4__ {int dev; TYPE_1__ cap; } ;


 int VAR_0 ;
 int FUNC_0 (struct typec_altmode*) ;
 int FUNC_1 (struct typec_altmode*) ;
 int VAR_1 ;




 int FUNC_2 (int ,char*,int ,void*) ;
 int FUNC_3 (int,struct typec_altmode*) ;
 struct typec_altmode* FUNC_4 (int ,struct typec_altmode_desc*) ;
 struct typec_altmode* FUNC_5 (int ,struct typec_altmode_desc*) ;
 void* FUNC_6 (struct typec_altmode**,int ) ;
 int FUNC_7 (struct typec_altmode**) ;
 struct typec_altmode* FUNC_8 (struct ucsi_connector*,int,int,struct typec_altmode_desc*) ;

__attribute__((used)) static int FUNC_9(struct ucsi_connector *VAR_2,
     struct typec_altmode_desc *VAR_3,
     u8 VAR_4)
{
 struct typec_altmode *VAR_5;
 bool VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = !!(VAR_2->ucsi->cap.features & VAR_1);

 switch (VAR_4) {
 case 131:
  VAR_8 = FUNC_7(VAR_2->port_altmode);
  if (VAR_8 < 0) {
   VAR_7 = VAR_8;
   goto err;
  }

  VAR_3->mode = FUNC_6(VAR_2->port_altmode,
          VAR_3->svid);

  switch (VAR_3->svid) {
  case 129:
  case 128:
   VAR_5 = FUNC_8(VAR_2, VAR_6, VAR_8, VAR_3);
   break;
  default:
   VAR_5 = FUNC_5(VAR_2->port, VAR_3);
   break;
  }

  if (FUNC_0(VAR_5)) {
   VAR_7 = FUNC_1(VAR_5);
   goto err;
  }

  VAR_2->port_altmode[VAR_8] = VAR_5;
  break;
 case 130:
  VAR_8 = FUNC_7(VAR_2->partner_altmode);
  if (VAR_8 < 0) {
   VAR_7 = VAR_8;
   goto err;
  }

  VAR_3->mode = FUNC_6(VAR_2->partner_altmode,
          VAR_3->svid);

  VAR_5 = FUNC_4(VAR_2->partner, VAR_3);
  if (FUNC_0(VAR_5)) {
   VAR_7 = FUNC_1(VAR_5);
   goto err;
  }

  VAR_2->partner_altmode[VAR_8] = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 FUNC_3(VAR_4, VAR_5);

 return 0;

err:
 FUNC_2(VAR_2->ucsi->dev, "failed to registers svid 0x%04x mode %d\n",
  VAR_3->svid, VAR_3->mode);

 return VAR_7;
}
