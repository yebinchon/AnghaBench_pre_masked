
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uvc_menu_info {unsigned int value; } ;
struct uvc_control_mapping {unsigned int (* get ) (struct uvc_control_mapping*,int ,int const*) ;scalar_t__ v4l2_type; unsigned int menu_count; struct uvc_menu_info* menu_info; } ;
typedef unsigned int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct uvc_control_mapping*,int ,int const*) ;

__attribute__((used)) static s32 FUNC_1(struct uvc_control_mapping *VAR_2,
    const u8 *VAR_3)
{
 s32 VAR_4 = VAR_2->get(VAR_2, VAR_0, VAR_3);

 if (VAR_2->v4l2_type == VAR_1) {
  const struct uvc_menu_info *VAR_5 = VAR_2->menu_info;
  unsigned int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_2->menu_count; ++VAR_6, ++VAR_5) {
   if (VAR_5->value == VAR_4) {
    VAR_4 = VAR_6;
    break;
   }
  }
 }

 return VAR_4;
}
