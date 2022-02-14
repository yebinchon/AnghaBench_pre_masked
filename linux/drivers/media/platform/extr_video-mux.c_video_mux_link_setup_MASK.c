
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct video_mux {size_t active; int lock; int mux; int * format_mbus; } ;
struct v4l2_subdev {int dev; } ;
struct media_pad {int flags; size_t index; TYPE_1__* entity; } ;
struct media_entity {size_t num_pads; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 struct v4l2_subdev* FUNC_1 (struct media_entity*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t) ;
 struct video_mux* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct media_entity *VAR_3,
    const struct media_pad *VAR_4,
    const struct media_pad *VAR_5, u32 VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_1(VAR_3);
 struct video_mux *VAR_8 = FUNC_6(VAR_7);
 u16 VAR_9 = VAR_3->num_pads - 1;
 int VAR_10 = 0;





 if (VAR_4->flags & VAR_2)
  return 0;

 FUNC_0(VAR_7->dev, "link setup '%s':%d->'%s':%d[%d]",
  VAR_5->entity->name, VAR_5->index, VAR_4->entity->name,
  VAR_4->index, VAR_6 & VAR_1);

 FUNC_2(&VAR_8->lock);

 if (VAR_6 & VAR_1) {
  if (VAR_8->active == VAR_4->index)
   goto out;

  if (VAR_8->active >= 0) {
   VAR_10 = -VAR_0;
   goto out;
  }

  FUNC_0(VAR_7->dev, "setting %d active\n", VAR_4->index);
  VAR_10 = FUNC_5(VAR_8->mux, VAR_4->index);
  if (VAR_10 < 0)
   goto out;
  VAR_8->active = VAR_4->index;


  VAR_8->format_mbus[VAR_9] = VAR_8->format_mbus[VAR_8->active];
 } else {
  if (VAR_8->active != VAR_4->index)
   goto out;

  FUNC_0(VAR_7->dev, "going inactive\n");
  FUNC_4(VAR_8->mux);
  VAR_8->active = -1;
 }

out:
 FUNC_3(&VAR_8->lock);
 return VAR_10;
}
