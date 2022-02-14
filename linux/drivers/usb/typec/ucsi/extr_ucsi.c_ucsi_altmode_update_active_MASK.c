
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct ucsi_control {int dummy; } ;
struct ucsi_connector {struct typec_altmode const** partner_altmode; int * port_altmode; TYPE_3__* ucsi; int num; } ;
struct typec_altmode {int dummy; } ;
typedef int cur ;
struct TYPE_6__ {int dev; TYPE_2__* ppm; } ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int version; } ;


 int FUNC_0 (struct ucsi_control,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,char*) ;
 struct typec_altmode* FUNC_2 (int ) ;
 int FUNC_3 (struct typec_altmode const*,int) ;
 int FUNC_4 (TYPE_3__*,struct ucsi_control*,size_t*,int) ;

void FUNC_5(struct ucsi_connector *VAR_1)
{
 const struct typec_altmode *VAR_2 = ((void*)0);
 struct ucsi_control VAR_3;
 int VAR_4;
 u8 VAR_5;
 int VAR_6;

 FUNC_0(VAR_3, VAR_1->num);
 VAR_4 = FUNC_4(VAR_1->ucsi, &VAR_3, &VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0) {
  if (VAR_1->ucsi->ppm->data->version > 0x0100) {
   FUNC_1(VAR_1->ucsi->dev,
    "GET_CURRENT_CAM command failed\n");
   return;
  }
  VAR_5 = 0xff;
 }

 if (VAR_5 < VAR_0)
  VAR_2 = FUNC_2(VAR_1->port_altmode[VAR_5]);

 for (VAR_6 = 0; VAR_1->partner_altmode[VAR_6]; VAR_6++)
  FUNC_3(VAR_1->partner_altmode[VAR_6],
         VAR_1->partner_altmode[VAR_6] == VAR_2);
}
