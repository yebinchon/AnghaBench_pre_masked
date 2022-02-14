
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_ctrl {int flags; } ;
struct TYPE_5__ {int error; } ;
struct jpu_ctx {TYPE_1__ ctrl_handler; int encoder; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 struct v4l2_ctrl* FUNC_3 (TYPE_1__*,int *,int ,int ,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_4(struct jpu_ctx *VAR_5)
{
 struct v4l2_ctrl *VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5->ctrl_handler, 1);

 VAR_6 = FUNC_3(&VAR_5->ctrl_handler, &VAR_4,
     VAR_1,
     0, VAR_0 - 1, 1, 0);

 if (VAR_5->ctrl_handler.error) {
  VAR_7 = VAR_5->ctrl_handler.error;
  goto error_free;
 }

 if (!VAR_5->encoder)
  VAR_6->flags |= VAR_3 |
    VAR_2;

 VAR_7 = FUNC_2(&VAR_5->ctrl_handler);
 if (VAR_7 < 0)
  goto error_free;

 return 0;

error_free:
 FUNC_0(&VAR_5->ctrl_handler);
 return VAR_7;
}
