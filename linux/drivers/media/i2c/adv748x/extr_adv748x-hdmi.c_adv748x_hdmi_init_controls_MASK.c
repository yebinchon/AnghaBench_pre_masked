
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct adv748x_state {int mutex; } ;
struct TYPE_8__ {int error; int * lock; } ;
struct TYPE_7__ {TYPE_2__* ctrl_handler; } ;
struct adv748x_hdmi {TYPE_2__ ctrl_hdl; TYPE_1__ sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct adv748x_state* FUNC_1 (struct adv748x_hdmi*) ;
 int VAR_18 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct adv748x_hdmi *VAR_19)
{
 struct adv748x_state *VAR_20 = FUNC_1(VAR_19);

 FUNC_3(&VAR_19->ctrl_hdl, 5);


 VAR_19->ctrl_hdl.lock = &VAR_20->mutex;

 FUNC_5(&VAR_19->ctrl_hdl, &VAR_17,
     VAR_12, VAR_2,
     VAR_1, 1, VAR_0);
 FUNC_5(&VAR_19->ctrl_hdl, &VAR_17,
     VAR_13, VAR_5,
     VAR_4, 1, VAR_3);
 FUNC_5(&VAR_19->ctrl_hdl, &VAR_17,
     VAR_15, VAR_11,
     VAR_10, 1, VAR_9);
 FUNC_5(&VAR_19->ctrl_hdl, &VAR_17,
     VAR_14, VAR_8,
     VAR_7, 1, VAR_6);






 FUNC_6(&VAR_19->ctrl_hdl, &VAR_17,
         VAR_16,
         FUNC_0(VAR_18) - 1,
         0, 0, VAR_18);

 VAR_19->sd.ctrl_handler = &VAR_19->ctrl_hdl;
 if (VAR_19->ctrl_hdl.error) {
  FUNC_2(&VAR_19->ctrl_hdl);
  return VAR_19->ctrl_hdl.error;
 }

 return FUNC_4(&VAR_19->ctrl_hdl);
}
