
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_rect {int height; int width; } ;
struct mt9t112_priv {int num_formats; TYPE_1__* format; struct v4l2_rect frame; } ;
struct TYPE_2__ {scalar_t__ code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mt9t112_priv *VAR_4,
         const struct v4l2_rect *VAR_5,
         u32 VAR_6)
{
 int VAR_7;




 for (VAR_7 = 0; VAR_7 < VAR_4->num_formats; VAR_7++)
  if (VAR_3[VAR_7].code == VAR_6)
   break;

 if (VAR_7 == VAR_4->num_formats)
  return -VAR_0;

 VAR_4->frame = *VAR_5;




 FUNC_0(&VAR_4->frame.width, 0, VAR_2, 0,
         &VAR_4->frame.height, 0, VAR_1, 0, 0);

 VAR_4->format = VAR_3 + VAR_7;

 return 0;
}
