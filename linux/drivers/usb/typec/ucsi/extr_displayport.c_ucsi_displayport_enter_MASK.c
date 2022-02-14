
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ucsi_dp {int vdo_size; TYPE_3__* con; int work; int * vdo_data; int header; scalar_t__ initialized; int override; } ;
struct ucsi_control {int dummy; } ;
struct typec_altmode {int dev; } ;
typedef int cur ;
struct TYPE_8__ {TYPE_2__* ppm; } ;
struct TYPE_7__ {int lock; struct typec_altmode** port_altmode; TYPE_4__* ucsi; int num; } ;
struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ucsi_control,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct ucsi_dp* FUNC_8 (struct typec_altmode*) ;
 struct typec_altmode* FUNC_9 (struct typec_altmode*) ;
 int FUNC_10 (TYPE_4__*,struct ucsi_control*,int*,int) ;

__attribute__((used)) static int FUNC_11(struct typec_altmode *VAR_6)
{
 struct ucsi_dp *VAR_7 = FUNC_8(VAR_6);
 struct ucsi_control VAR_8;
 u8 VAR_9 = 0;
 int VAR_10;

 FUNC_5(&VAR_7->con->lock);

 if (!VAR_7->override && VAR_7->initialized) {
  const struct typec_altmode *VAR_11 = FUNC_9(VAR_6);

  FUNC_4(&VAR_11->dev,
    "firmware doesn't support alternate mode overriding\n");
  FUNC_6(&VAR_7->con->lock);
  return -VAR_3;
 }

 FUNC_0(VAR_8, VAR_7->con->num);
 VAR_10 = FUNC_10(VAR_7->con->ucsi, &VAR_8, &VAR_9, sizeof(VAR_9));
 if (VAR_10 < 0) {
  if (VAR_7->con->ucsi->ppm->data->version > 0x0100) {
   FUNC_6(&VAR_7->con->lock);
   return VAR_10;
  }
  VAR_9 = 0xff;
 }

 if (VAR_9 != 0xff) {
  FUNC_6(&VAR_7->con->lock);
  if (VAR_7->con->port_altmode[VAR_9] == VAR_6)
   return 0;
  return -VAR_2;
 }







 VAR_7->header = FUNC_1(VAR_5, 1, VAR_1);
 VAR_7->header |= FUNC_3(VAR_4);
 VAR_7->header |= FUNC_2(VAR_0);

 VAR_7->vdo_data = ((void*)0);
 VAR_7->vdo_size = 1;

 FUNC_7(&VAR_7->work);

 FUNC_6(&VAR_7->con->lock);

 return 0;
}
