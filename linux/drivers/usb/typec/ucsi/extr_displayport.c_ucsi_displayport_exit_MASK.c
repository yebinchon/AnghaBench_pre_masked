
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucsi_dp {int vdo_size; TYPE_1__* con; int work; int * vdo_data; int header; int offset; int override; } ;
struct ucsi_control {int raw_cmd; } ;
struct typec_altmode {int dev; } ;
struct TYPE_2__ {int lock; int ucsi; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct ucsi_dp* FUNC_8 (struct typec_altmode*) ;
 struct typec_altmode* FUNC_9 (struct typec_altmode*) ;
 int FUNC_10 (int ,struct ucsi_control*,int *,int ) ;

__attribute__((used)) static int FUNC_11(struct typec_altmode *VAR_5)
{
 struct ucsi_dp *VAR_6 = FUNC_8(VAR_5);
 struct ucsi_control VAR_7;
 int VAR_8 = 0;

 FUNC_5(&VAR_6->con->lock);

 if (!VAR_6->override) {
  const struct typec_altmode *VAR_9 = FUNC_9(VAR_5);

  FUNC_4(&VAR_9->dev,
    "firmware doesn't support alternate mode overriding\n");
  VAR_8 = -VAR_2;
  goto out_unlock;
 }

 VAR_7.raw_cmd = FUNC_0(VAR_6->con->num, 0, VAR_6->offset, 0);
 VAR_8 = FUNC_10(VAR_6->con->ucsi, &VAR_7, ((void*)0), 0);
 if (VAR_8 < 0)
  goto out_unlock;

 VAR_6->header = FUNC_1(VAR_4, 1, VAR_1);
 VAR_6->header |= FUNC_3(VAR_3);
 VAR_6->header |= FUNC_2(VAR_0);

 VAR_6->vdo_data = ((void*)0);
 VAR_6->vdo_size = 1;

 FUNC_7(&VAR_6->work);

out_unlock:
 FUNC_6(&VAR_6->con->lock);

 return VAR_8;
}
