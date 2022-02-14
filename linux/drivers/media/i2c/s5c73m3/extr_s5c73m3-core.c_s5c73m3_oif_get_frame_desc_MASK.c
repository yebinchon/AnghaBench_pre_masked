
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_frame_desc {int num_entries; int * entry; } ;
struct TYPE_2__ {int * entry; } ;
struct s5c73m3 {int lock; TYPE_1__ frame_desc; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct s5c73m3* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, unsigned int VAR_3,
      struct v4l2_mbus_frame_desc *VAR_4)
{
 struct s5c73m3 *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 if (VAR_3 != VAR_1 || VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_5->lock);
 VAR_4->num_entries = 2;
 for (VAR_6 = 0; VAR_6 < VAR_4->num_entries; VAR_6++)
  VAR_4->entry[VAR_6] = VAR_5->frame_desc.entry[VAR_6];
 FUNC_1(&VAR_5->lock);

 return 0;
}
