
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iss_pipeline {int frame_number; } ;
struct TYPE_2__ {int entity; } ;
struct iss_csi2_device {scalar_t__ frame_skip; int output; int regs1; int iss; TYPE_1__ subdev; int stopping; int wait; } ;
struct iss_csi2_ctx_cfg {unsigned int ctxnum; int frame; int format_id; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iss_csi2_device*,struct iss_csi2_ctx_cfg*) ;
 int FUNC_5 (struct iss_csi2_device*,unsigned int,int) ;
 int FUNC_6 (struct iss_csi2_device*) ;
 int FUNC_7 (struct iss_csi2_device*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 struct iss_pipeline* FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct iss_csi2_device *VAR_4,
    struct iss_csi2_ctx_cfg *VAR_5)
{
 unsigned int VAR_6 = VAR_5->ctxnum;
 u32 VAR_7;

 VAR_7 = FUNC_8(VAR_4->iss, VAR_4->regs1, FUNC_1(VAR_6));
 FUNC_9(VAR_4->iss, VAR_4->regs1, FUNC_1(VAR_6), VAR_7);

 if (FUNC_10(&VAR_4->wait, &VAR_4->stopping))
  return;


 if (VAR_7 & VAR_2) {
  struct iss_pipeline *VAR_8 =
         FUNC_11(&VAR_4->subdev.entity);
  u16 VAR_9;
  u16 VAR_10;

  VAR_9 = FUNC_8(VAR_4->iss, VAR_4->regs1,
         FUNC_0(VAR_5->ctxnum))
        >> VAR_0;

  if (VAR_9 == 0) {




   FUNC_3(&VAR_8->frame_number);
  } else {







   VAR_10 = VAR_9 - VAR_5->frame;
   if (VAR_9 < VAR_5->frame)
    VAR_10--;
   VAR_5->frame = VAR_9;

   FUNC_2(VAR_10, &VAR_8->frame_number);
  }
 }

 if (!(VAR_7 & VAR_1))
  return;
 if (VAR_4->frame_skip) {
  VAR_4->frame_skip--;
  if (VAR_4->frame_skip == 0) {
   VAR_5->format_id = FUNC_6(VAR_4);
   FUNC_4(VAR_4, VAR_5);
   FUNC_5(VAR_4, VAR_6, 1);
  }
  return;
 }

 if (VAR_4->output & VAR_3)
  FUNC_7(VAR_4);
}
