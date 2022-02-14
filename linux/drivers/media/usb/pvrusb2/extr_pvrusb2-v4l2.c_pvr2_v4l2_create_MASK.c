
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mc_head; int check_func; } ;
struct pvr2_v4l2 {void* dev_radio; TYPE_2__ channel; void* dev_video; } ;
struct pvr2_context {int dummy; } ;
struct TYPE_3__ {int hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*,struct pvr2_context*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,struct pvr2_v4l2*) ;
 int FUNC_4 (struct pvr2_v4l2*) ;
 int FUNC_5 (void*,struct pvr2_v4l2*,int ) ;
 int VAR_5 ;

struct pvr2_v4l2 *FUNC_6(struct pvr2_context *VAR_6)
{
 struct pvr2_v4l2 *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7),VAR_0);
 if (!VAR_7) return VAR_7;
 FUNC_1(&VAR_7->channel,VAR_6);
 FUNC_3(VAR_2,"Creating pvr2_v4l2 id=%p",VAR_7);

 VAR_7->channel.check_func = VAR_5;


 VAR_7->dev_video = FUNC_0(sizeof(*VAR_7->dev_video),VAR_0);
 if (!VAR_7->dev_video) goto fail;
 FUNC_5(VAR_7->dev_video,VAR_7,VAR_3);
 if (FUNC_2(VAR_7->channel.mc_head->hdw) &
     (1 << VAR_1)) {
  VAR_7->dev_radio = FUNC_0(sizeof(*VAR_7->dev_radio),VAR_0);
  if (!VAR_7->dev_radio) goto fail;
  FUNC_5(VAR_7->dev_radio,VAR_7,VAR_4);
 }

 return VAR_7;
 fail:
 FUNC_3(VAR_2,"Failure creating pvr2_v4l2 id=%p",VAR_7);
 FUNC_4(VAR_7);
 return ((void*)0);
}
