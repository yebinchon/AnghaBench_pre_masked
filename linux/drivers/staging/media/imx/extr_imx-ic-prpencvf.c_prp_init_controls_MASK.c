
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct prp_priv {struct v4l2_ctrl_handler ctrl_hdlr; struct imx_ic_priv* ic_priv; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct imx_ic_priv {TYPE_1__ sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_ctrl_handler*) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct prp_priv *VAR_4)
{
 struct imx_ic_priv *VAR_5 = VAR_4->ic_priv;
 struct v4l2_ctrl_handler *VAR_6 = &VAR_4->ctrl_hdlr;
 int VAR_7;

 FUNC_1(VAR_6, 3);

 FUNC_3(VAR_6, &VAR_3, VAR_0,
     0, 1, 1, 0);
 FUNC_3(VAR_6, &VAR_3, VAR_2,
     0, 1, 1, 0);
 FUNC_3(VAR_6, &VAR_3, VAR_1,
     0, 270, 90, 0);

 VAR_5->sd.ctrl_handler = VAR_6;

 if (VAR_6->error) {
  VAR_7 = VAR_6->error;
  goto out_free;
 }

 FUNC_2(VAR_6);
 return 0;

out_free:
 FUNC_0(VAR_6);
 return VAR_7;
}
