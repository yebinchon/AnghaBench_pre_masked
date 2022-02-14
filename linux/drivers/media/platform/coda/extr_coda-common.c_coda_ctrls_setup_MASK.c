
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ error; } ;
struct coda_ctx {scalar_t__ inst_type; TYPE_3__ ctrls; TYPE_2__* dev; TYPE_1__* cvd; } ;
struct TYPE_7__ {int v4l2_dev; } ;
struct TYPE_6__ {scalar_t__* dst_formats; scalar_t__* src_formats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct coda_ctx*) ;
 int FUNC_1 (struct coda_ctx*) ;
 int FUNC_2 (struct coda_ctx*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *,int ,int,int,int,int) ;
 int FUNC_6 (int *,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct coda_ctx *VAR_9)
{
 FUNC_3(&VAR_9->ctrls, 2);

 FUNC_5(&VAR_9->ctrls, &VAR_8,
  VAR_2, 0, 1, 1, 0);
 FUNC_5(&VAR_9->ctrls, &VAR_8,
  VAR_5, 0, 1, 1, 0);
 if (VAR_9->inst_type == VAR_0) {
  FUNC_5(&VAR_9->ctrls, &VAR_8,
      VAR_4,
      1, 1, 1, 1);
  if (VAR_9->cvd->dst_formats[0] == VAR_7)
   FUNC_2(VAR_9);
  else
   FUNC_1(VAR_9);
 } else {
  FUNC_5(&VAR_9->ctrls, &VAR_8,
      VAR_3,
      1, 1, 1, 1);
  if (VAR_9->cvd->src_formats[0] == VAR_6)
   FUNC_0(VAR_9);
 }

 if (VAR_9->ctrls.error) {
  FUNC_6(&VAR_9->dev->v4l2_dev,
   "control initialization error (%d)",
   VAR_9->ctrls.error);
  return -VAR_1;
 }

 return FUNC_4(&VAR_9->ctrls);
}
