
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item {int dummy; } ;
struct TYPE_2__ {int dwClockFrequency; int bcdUVC; int bDescriptorSubType; int bDescriptorType; int bLength; } ;
struct uvcg_control_header {struct config_item item; TYPE_1__ desc; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct config_item*,char const*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct uvcg_control_header* FUNC_5 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static struct config_item *FUNC_6(struct config_group *VAR_5,
          const char *VAR_6)
{
 struct uvcg_control_header *VAR_7;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->desc.bLength = FUNC_1(1);
 VAR_7->desc.bDescriptorType = VAR_2;
 VAR_7->desc.bDescriptorSubType = VAR_3;
 VAR_7->desc.bcdUVC = FUNC_3(0x0100);
 VAR_7->desc.dwClockFrequency = FUNC_4(48000000);

 FUNC_2(&VAR_7->item, VAR_6, &VAR_4);

 return &VAR_7->item;
}
