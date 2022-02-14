
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_mode_info {int hact; int vact; } ;
struct ov5640_dev {int dummy; } ;
typedef enum ov5640_frame_rate { ____Placeholder_ov5640_frame_rate } ov5640_frame_rate ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ov5640_mode_info* FUNC_1 (int ,int ,int ,int ,int,int) ;
 int VAR_3 ;

__attribute__((used)) static const struct ov5640_mode_info *
FUNC_2(struct ov5640_dev *VAR_4, enum ov5640_frame_rate VAR_5,
   int VAR_6, int VAR_7, bool VAR_8)
{
 const struct ov5640_mode_info *VAR_9;

 VAR_9 = FUNC_1(VAR_2,
          FUNC_0(VAR_2),
          VAR_1, VAR_3,
          VAR_6, VAR_7);

 if (!VAR_9 ||
     (!VAR_8 && (VAR_9->hact != VAR_6 || VAR_9->vact != VAR_7)))
  return ((void*)0);


 if (VAR_5 == VAR_0 &&
     !(VAR_9->hact == 640 && VAR_9->vact == 480))
  return ((void*)0);

 return VAR_9;
}
