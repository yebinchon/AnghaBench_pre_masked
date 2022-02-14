
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_ctrl {int flags; } ;
struct TYPE_10__ {int error; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_3__ ctrl_handler; TYPE_2__* jpeg; } ;
struct TYPE_9__ {TYPE_1__* variant; } ;
struct TYPE_8__ {scalar_t__ version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *,int ,int ,int,int,int ) ;
 struct v4l2_ctrl* FUNC_4 (TYPE_3__*,int *,int ,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct s5p_jpeg_ctx *VAR_12)
{
 unsigned int VAR_13 = ~0x27;
 struct v4l2_ctrl *VAR_14;
 int VAR_15;

 FUNC_1(&VAR_12->ctrl_handler, 3);

 if (VAR_12->mode == VAR_2) {
  FUNC_3(&VAR_12->ctrl_handler, &VAR_11,
      VAR_5,
      0, 3, 1, VAR_0);

  FUNC_3(&VAR_12->ctrl_handler, &VAR_11,
      VAR_6,
      0, 0xffff, 1, 0);
  if (VAR_12->jpeg->variant->version == VAR_3)
   VAR_13 = ~0x06;
 }

 VAR_14 = FUNC_4(&VAR_12->ctrl_handler, &VAR_11,
          VAR_4,
          VAR_10, VAR_13,
          VAR_9);

 if (VAR_12->ctrl_handler.error) {
  VAR_15 = VAR_12->ctrl_handler.error;
  goto error_free;
 }

 if (VAR_12->mode == VAR_1)
  VAR_14->flags |= VAR_8 |
   VAR_7;

 VAR_15 = FUNC_2(&VAR_12->ctrl_handler);
 if (VAR_15 < 0)
  goto error_free;

 return VAR_15;

error_free:
 FUNC_0(&VAR_12->ctrl_handler);
 return VAR_15;
}
