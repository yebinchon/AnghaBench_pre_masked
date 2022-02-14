
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_input {unsigned int index; int audioset; scalar_t__ capabilities; int std; int type; int name; } ;
struct file {int dummy; } ;
struct em28xx {scalar_t__* amux_map; scalar_t__ is_webcam; TYPE_2__* v4l2; } ;
struct TYPE_6__ {size_t type; } ;
struct TYPE_4__ {int tvnorms; } ;
struct TYPE_5__ {TYPE_1__ vdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int ,int ,int) ;
 struct em28xx* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
        struct v4l2_input *VAR_9)
{
 struct em28xx *VAR_10 = FUNC_2(VAR_7);
 unsigned int VAR_11;
 int VAR_12;

 VAR_11 = VAR_9->index;
 if (VAR_11 >= VAR_3)
  return -VAR_0;
 if (!FUNC_0(VAR_11)->type)
  return -VAR_0;

 VAR_9->type = VAR_4;

 FUNC_1(VAR_9->name, VAR_6[FUNC_0(VAR_11)->type], sizeof(VAR_9->name));

 if (FUNC_0(VAR_11)->type == VAR_2)
  VAR_9->type = VAR_5;

 VAR_9->std = VAR_10->v4l2->vdev.tvnorms;

 if (VAR_10->is_webcam)
  VAR_9->capabilities = 0;


 VAR_9->audioset = 0;
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  if (VAR_10->amux_map[VAR_12] != VAR_1)
   VAR_9->audioset |= 1 << VAR_12;

 return 0;
}
