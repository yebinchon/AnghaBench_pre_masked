
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_xu_control_mapping {int v4l2_type; int menu_count; int menu_info; int data_type; int offset; int size; int selector; int entity; int name; int id; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_control_mapping {int v4l2_type; int menu_count; struct uvc_control_mapping* menu_info; int data_type; int offset; int size; int selector; int entity; int name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uvc_control_mapping*) ;
 int FUNC_1 (struct uvc_control_mapping*) ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_2 (struct uvc_control_mapping*) ;
 struct uvc_control_mapping* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct uvc_control_mapping* FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct uvc_video_chain*,struct uvc_control_mapping*) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int FUNC_8(struct uvc_video_chain *VAR_6,
 struct uvc_xu_control_mapping *VAR_7)
{
 struct uvc_control_mapping *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_3);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_8->id = VAR_7->id;
 FUNC_4(VAR_8->name, VAR_7->name, sizeof(VAR_8->name));
 FUNC_4(VAR_8->entity, VAR_7->entity, sizeof(VAR_8->entity));
 VAR_8->selector = VAR_7->selector;
 VAR_8->size = VAR_7->size;
 VAR_8->offset = VAR_7->offset;
 VAR_8->v4l2_type = VAR_7->v4l2_type;
 VAR_8->data_type = VAR_7->data_type;

 switch (VAR_7->v4l2_type) {
 case 129:
 case 131:
 case 130:
  break;

 case 128:



  if (VAR_7->menu_count == 0 ||
      VAR_7->menu_count > VAR_4) {
   VAR_10 = -VAR_0;
   goto free_map;
  }

  VAR_9 = VAR_7->menu_count * sizeof(*VAR_8->menu_info);
  VAR_8->menu_info = FUNC_5(VAR_7->menu_info, VAR_9);
  if (FUNC_0(VAR_8->menu_info)) {
   VAR_10 = FUNC_1(VAR_8->menu_info);
   goto free_map;
  }

  VAR_8->menu_count = VAR_7->menu_count;
  break;

 default:
  FUNC_7(VAR_5, "Unsupported V4L2 control type "
     "%u.\n", VAR_7->v4l2_type);
  VAR_10 = -VAR_2;
  goto free_map;
 }

 VAR_10 = FUNC_6(VAR_6, VAR_8);

 FUNC_2(VAR_8->menu_info);
free_map:
 FUNC_2(VAR_8);

 return VAR_10;
}
