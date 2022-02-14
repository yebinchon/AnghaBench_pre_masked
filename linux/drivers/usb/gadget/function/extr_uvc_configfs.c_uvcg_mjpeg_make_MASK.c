
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct config_group {int dummy; } ;
struct TYPE_4__ {struct config_group group; int type; } ;
struct TYPE_3__ {int bDefaultFrameIndex; scalar_t__ bCopyProtect; scalar_t__ bmInterfaceFlags; scalar_t__ bAspectRatioY; scalar_t__ bAspectRatioX; int bDescriptorSubType; int bDescriptorType; int bLength; } ;
struct uvcg_mjpeg {TYPE_2__ fmt; TYPE_1__ desc; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct config_group*,char const*,int *) ;
 struct uvcg_mjpeg* FUNC_2 (int,int ) ;
 int VAR_6 ;

__attribute__((used)) static struct config_group *FUNC_3(struct config_group *VAR_7,
         const char *VAR_8)
{
 struct uvcg_mjpeg *VAR_9;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->desc.bLength = VAR_4;
 VAR_9->desc.bDescriptorType = VAR_2;
 VAR_9->desc.bDescriptorSubType = VAR_5;
 VAR_9->desc.bDefaultFrameIndex = 1;
 VAR_9->desc.bAspectRatioX = 0;
 VAR_9->desc.bAspectRatioY = 0;
 VAR_9->desc.bmInterfaceFlags = 0;
 VAR_9->desc.bCopyProtect = 0;

 VAR_9->fmt.type = VAR_3;
 FUNC_1(&VAR_9->fmt.group, VAR_8,
        &VAR_6);

 return &VAR_9->fmt.group;
}
