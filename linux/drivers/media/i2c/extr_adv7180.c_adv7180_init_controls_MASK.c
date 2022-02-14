
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int error; } ;
struct TYPE_7__ {TYPE_2__* ctrl_handler; } ;
struct adv7180_state {TYPE_2__ ctrl_hdl; TYPE_1__ sd; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct adv7180_state *VAR_18)
{
 FUNC_1(&VAR_18->ctrl_hdl, 4);

 FUNC_4(&VAR_18->ctrl_hdl, &VAR_17,
     VAR_12, VAR_2,
     VAR_1, 1, VAR_0);
 FUNC_4(&VAR_18->ctrl_hdl, &VAR_17,
     VAR_13, VAR_5,
     VAR_4, 1, VAR_3);
 FUNC_4(&VAR_18->ctrl_hdl, &VAR_17,
     VAR_15, VAR_11,
     VAR_10, 1, VAR_9);
 FUNC_4(&VAR_18->ctrl_hdl, &VAR_17,
     VAR_14, VAR_8,
     VAR_7, 1, VAR_6);
 FUNC_3(&VAR_18->ctrl_hdl, &VAR_16, ((void*)0));

 VAR_18->sd.ctrl_handler = &VAR_18->ctrl_hdl;
 if (VAR_18->ctrl_hdl.error) {
  int VAR_19 = VAR_18->ctrl_hdl.error;

  FUNC_0(&VAR_18->ctrl_hdl);
  return VAR_19;
 }
 FUNC_2(&VAR_18->ctrl_hdl);

 return 0;
}
