
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct coda_ctx {TYPE_8__* mpeg4_level_ctrl; int ctrls; TYPE_7__* mpeg4_profile_ctrl; TYPE_6__* mpeg2_level_ctrl; TYPE_5__* mpeg2_profile_ctrl; TYPE_4__* h264_level_ctrl; TYPE_3__* dev; TYPE_1__* h264_profile_ctrl; } ;
struct TYPE_16__ {int flags; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {TYPE_2__* devtype; } ;
struct TYPE_10__ {scalar_t__ product; } ;
struct TYPE_9__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_0 (int *,int *,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct coda_ctx *VAR_20)
{
 u8 VAR_21;

 VAR_20->h264_profile_ctrl = FUNC_0(&VAR_20->ctrls,
  &VAR_19, VAR_4,
  VAR_13,
  ~((1 << VAR_12) |
    (1 << VAR_14) |
    (1 << VAR_13)),
  VAR_13);
 if (VAR_20->h264_profile_ctrl)
  VAR_20->h264_profile_ctrl->flags |= VAR_9;

 if (VAR_20->dev->devtype->product == VAR_2 ||
     VAR_20->dev->devtype->product == VAR_0)
  VAR_21 = VAR_10;
 else if (VAR_20->dev->devtype->product == VAR_1)
  VAR_21 = VAR_11;
 else
  return;
 VAR_20->h264_level_ctrl = FUNC_0(&VAR_20->ctrls,
  &VAR_19, VAR_3, VAR_21, 0, VAR_21);
 if (VAR_20->h264_level_ctrl)
  VAR_20->h264_level_ctrl->flags |= VAR_9;

 VAR_20->mpeg2_profile_ctrl = FUNC_0(&VAR_20->ctrls,
  &VAR_19, VAR_6,
  VAR_16, 0,
  VAR_16);
 if (VAR_20->mpeg2_profile_ctrl)
  VAR_20->mpeg2_profile_ctrl->flags |= VAR_9;

 VAR_20->mpeg2_level_ctrl = FUNC_0(&VAR_20->ctrls,
  &VAR_19, VAR_5,
  VAR_15, 0,
  VAR_15);
 if (VAR_20->mpeg2_level_ctrl)
  VAR_20->mpeg2_level_ctrl->flags |= VAR_9;

 VAR_20->mpeg4_profile_ctrl = FUNC_0(&VAR_20->ctrls,
  &VAR_19, VAR_8,
  VAR_18, 0,
  VAR_18);
 if (VAR_20->mpeg4_profile_ctrl)
  VAR_20->mpeg4_profile_ctrl->flags |= VAR_9;

 VAR_20->mpeg4_level_ctrl = FUNC_0(&VAR_20->ctrls,
  &VAR_19, VAR_7,
  VAR_17, 0,
  VAR_17);
 if (VAR_20->mpeg4_level_ctrl)
  VAR_20->mpeg4_level_ctrl->flags |= VAR_9;
}
