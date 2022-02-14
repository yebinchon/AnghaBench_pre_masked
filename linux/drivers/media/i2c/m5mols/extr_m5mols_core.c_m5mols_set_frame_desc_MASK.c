
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; } ;
struct v4l2_mbus_frame_desc {int num_entries; TYPE_2__* entry; } ;
struct TYPE_3__ {int buf_size; } ;
struct m5mols_info {int lock; TYPE_1__ cap; struct v4l2_mbus_framefmt* ffmt; } ;
struct TYPE_4__ {int length; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct m5mols_info* FUNC_3 (struct v4l2_subdev*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_5, unsigned int VAR_6,
     struct v4l2_mbus_frame_desc *VAR_7)
{
 struct m5mols_info *VAR_8 = FUNC_3(VAR_5);
 struct v4l2_mbus_framefmt *VAR_9 = &VAR_8->ffmt[VAR_2];

 if (VAR_6 != 0 || VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->entry[0].flags = VAR_3;
 VAR_7->num_entries = 1;
 VAR_7->entry[0].length = FUNC_0(VAR_4, VAR_7->entry[0].length,
          VAR_9->width * VAR_9->height,
          VAR_1);
 FUNC_1(&VAR_8->lock);
 VAR_8->cap.buf_size = VAR_7->entry[0].length;
 FUNC_2(&VAR_8->lock);

 return 0;
}
