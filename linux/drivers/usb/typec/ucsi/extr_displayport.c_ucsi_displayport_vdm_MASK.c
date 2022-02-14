
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int conf; } ;
struct ucsi_dp {int initialized; TYPE_2__* con; int work; int header; TYPE_1__ data; int override; } ;
struct typec_altmode {int dev; } ;
struct TYPE_4__ {int lock; } ;



 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ucsi_dp* FUNC_9 (struct typec_altmode*) ;
 struct typec_altmode* FUNC_10 (struct typec_altmode*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct ucsi_dp*) ;
 int FUNC_13 (struct ucsi_dp*) ;

__attribute__((used)) static int FUNC_14(struct typec_altmode *VAR_5,
    u32 VAR_6, const u32 *VAR_7, int VAR_8)
{
 struct ucsi_dp *VAR_9 = FUNC_9(VAR_5);
 int VAR_10 = FUNC_1(VAR_6);
 int VAR_11 = FUNC_0(VAR_6);

 FUNC_6(&VAR_9->con->lock);

 if (!VAR_9->override && VAR_9->initialized) {
  const struct typec_altmode *VAR_12 = FUNC_10(VAR_5);

  FUNC_5(&VAR_12->dev,
    "firmware doesn't support alternate mode overriding\n");
  FUNC_7(&VAR_9->con->lock);
  return -VAR_2;
 }

 switch (VAR_10) {
 case 130:
  VAR_9->header = FUNC_2(VAR_4, 1, VAR_11);
  VAR_9->header |= FUNC_4(VAR_3);

  switch (VAR_11) {
  case 128:
   if (FUNC_13(VAR_9))
    VAR_9->header |= FUNC_3(VAR_1);
   else
    VAR_9->header |= FUNC_3(VAR_0);
   break;
  case 129:
   VAR_9->data.conf = *VAR_7;
   if (FUNC_12(VAR_9)) {
    VAR_9->header |= FUNC_3(VAR_1);
   } else {
    VAR_9->header |= FUNC_3(VAR_0);
    if (VAR_9->initialized)
     FUNC_11(VAR_9->con);
    else
     VAR_9->initialized = 1;
   }
   break;
  default:
   VAR_9->header |= FUNC_3(VAR_0);
   break;
  }

  FUNC_8(&VAR_9->work);
  break;
 default:
  break;
 }

 FUNC_7(&VAR_9->con->lock);

 return 0;
}
