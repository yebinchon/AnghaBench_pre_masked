
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_frame_desc {int num_entries; TYPE_1__* entry; } ;
struct s5c73m3 {int lock; struct v4l2_mbus_frame_desc frame_desc; } ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s5c73m3* FUNC_3 (struct v4l2_subdev*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_5, unsigned int VAR_6,
          struct v4l2_mbus_frame_desc *VAR_7)
{
 struct s5c73m3 *VAR_8 = FUNC_3(VAR_5);
 struct v4l2_mbus_frame_desc *VAR_9 = &VAR_8->frame_desc;
 int VAR_10;

 if (VAR_6 != VAR_1 || VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->entry[0].length = 10 * VAR_3;
 VAR_7->entry[1].length = FUNC_0(VAR_4, VAR_7->entry[1].length,
        VAR_2);
 VAR_7->num_entries = 2;

 FUNC_1(&VAR_8->lock);
 for (VAR_10 = 0; VAR_10 < VAR_7->num_entries; VAR_10++)
  VAR_9->entry[VAR_10] = VAR_7->entry[VAR_10];
 FUNC_2(&VAR_8->lock);

 return 0;
}
