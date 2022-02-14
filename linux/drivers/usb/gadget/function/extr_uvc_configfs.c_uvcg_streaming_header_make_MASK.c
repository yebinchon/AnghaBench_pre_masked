
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item {int dummy; } ;
struct TYPE_2__ {int bTerminalLink; int bControlSize; int bDescriptorSubType; int bDescriptorType; } ;
struct uvcg_streaming_header {struct config_item item; TYPE_1__ desc; int formats; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct config_item*,char const*,int *) ;
 struct uvcg_streaming_header* FUNC_3 (int,int ) ;
 int VAR_5 ;

__attribute__((used)) static struct config_item
*FUNC_4(struct config_group *VAR_6, const char *VAR_7)
{
 struct uvcg_streaming_header *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_8->formats);
 VAR_8->desc.bDescriptorType = VAR_2;
 VAR_8->desc.bDescriptorSubType = VAR_4;
 VAR_8->desc.bTerminalLink = 3;
 VAR_8->desc.bControlSize = VAR_3;

 FUNC_2(&VAR_8->item, VAR_7, &VAR_5);

 return &VAR_8->item;
}
