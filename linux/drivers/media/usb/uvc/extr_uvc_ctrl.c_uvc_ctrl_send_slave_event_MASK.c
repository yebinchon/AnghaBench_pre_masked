
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uvc_video_chain {int dummy; } ;
struct uvc_fh {int dummy; } ;
struct uvc_control_mapping {int dummy; } ;
struct uvc_control {int entity; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uvc_video_chain*,struct uvc_control*,struct uvc_control_mapping*,int *) ;
 int FUNC_1 (int ,int ,struct uvc_control_mapping**,struct uvc_control**,int ) ;
 int FUNC_2 (struct uvc_video_chain*,struct uvc_fh*,struct uvc_control*,struct uvc_control_mapping*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct uvc_video_chain *VAR_2,
 struct uvc_fh *VAR_3, struct uvc_control *VAR_4, u32 VAR_5)
{
 struct uvc_control_mapping *VAR_6 = ((void*)0);
 struct uvc_control *VAR_7 = ((void*)0);
 u32 VAR_8 = VAR_0;
 s32 VAR_9 = 0;

 FUNC_1(VAR_4->entity, VAR_5, &VAR_6, &VAR_7, 0);
 if (VAR_7 == ((void*)0))
  return;

 if (FUNC_0(VAR_2, VAR_7, VAR_6, &VAR_9) == 0)
  VAR_8 |= VAR_1;

 FUNC_2(VAR_2, VAR_3, VAR_7, VAR_6, VAR_9, VAR_8);
}
