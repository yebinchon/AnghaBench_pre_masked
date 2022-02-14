
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct config_group {int dummy; } ;
struct TYPE_4__ {struct config_group group; int type; } ;
struct TYPE_3__ {int bBitsPerPixel; int bDefaultFrameIndex; scalar_t__ bCopyProtect; scalar_t__ bmInterfaceFlags; scalar_t__ bAspectRatioY; scalar_t__ bAspectRatioX; int guidFormat; int bDescriptorSubType; int bDescriptorType; int bLength; } ;
struct uvcg_uncompressed {TYPE_2__ fmt; TYPE_1__ desc; } ;
typedef int guid ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct config_group*,char const*,int *) ;
 struct uvcg_uncompressed* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_6 ;

__attribute__((used)) static struct config_group *FUNC_4(struct config_group *VAR_7,
         const char *VAR_8)
{
 static char VAR_9[] = {
  'Y', 'U', 'Y', '2', 0x00, 0x00, 0x10, 0x00,
   0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71
 };
 struct uvcg_uncompressed *VAR_10;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_10->desc.bLength = VAR_4;
 VAR_10->desc.bDescriptorType = VAR_2;
 VAR_10->desc.bDescriptorSubType = VAR_5;
 FUNC_3(VAR_10->desc.guidFormat, VAR_9, sizeof(VAR_9));
 VAR_10->desc.bBitsPerPixel = 16;
 VAR_10->desc.bDefaultFrameIndex = 1;
 VAR_10->desc.bAspectRatioX = 0;
 VAR_10->desc.bAspectRatioY = 0;
 VAR_10->desc.bmInterfaceFlags = 0;
 VAR_10->desc.bCopyProtect = 0;

 VAR_10->fmt.type = VAR_3;
 FUNC_1(&VAR_10->fmt.group, VAR_8,
        &VAR_6);

 return &VAR_10->fmt.group;
}
