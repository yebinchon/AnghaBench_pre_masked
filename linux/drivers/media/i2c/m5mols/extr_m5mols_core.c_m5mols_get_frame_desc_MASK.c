
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_frame_desc {int num_entries; TYPE_3__* entry; } ;
struct TYPE_4__ {int buf_size; } ;
struct m5mols_info {int lock; TYPE_2__* ffmt; TYPE_1__ cap; } ;
struct TYPE_6__ {int flags; int pixelcode; int length; } ;
struct TYPE_5__ {int code; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct m5mols_info* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3, unsigned int VAR_4,
     struct v4l2_mbus_frame_desc *VAR_5)
{
 struct m5mols_info *VAR_6 = FUNC_2(VAR_3);

 if (VAR_4 != 0 || VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_6->lock);




 VAR_5->entry[0].length = VAR_6->cap.buf_size;
 VAR_5->entry[0].pixelcode = VAR_6->ffmt[VAR_1].code;
 FUNC_1(&VAR_6->lock);

 VAR_5->entry[0].flags = VAR_2;
 VAR_5->num_entries = 1;

 return 0;
}
