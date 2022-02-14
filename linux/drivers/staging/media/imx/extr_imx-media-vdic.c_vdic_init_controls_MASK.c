
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct vdic_priv {TYPE_1__ sd; struct v4l2_ctrl_handler ctrl_hdlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_ctrl_handler*) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct vdic_priv *VAR_4)
{
 struct v4l2_ctrl_handler *VAR_5 = &VAR_4->ctrl_hdlr;
 int VAR_6;

 FUNC_1(VAR_5, 1);

 FUNC_3(VAR_5, &VAR_3,
         VAR_1,
         VAR_0, 0, VAR_0,
         VAR_2);

 VAR_4->sd.ctrl_handler = VAR_5;

 if (VAR_5->error) {
  VAR_6 = VAR_5->error;
  goto out_free;
 }

 FUNC_2(VAR_5);
 return 0;

out_free:
 FUNC_0(VAR_5);
 return VAR_6;
}
