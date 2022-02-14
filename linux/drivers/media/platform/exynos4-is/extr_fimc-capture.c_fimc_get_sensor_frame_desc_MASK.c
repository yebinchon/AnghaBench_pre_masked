
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_pads; } ;
struct v4l2_subdev {int v4l2_dev; TYPE_1__ entity; } ;
struct v4l2_plane_pix_format {scalar_t__ sizeimage; } ;
struct v4l2_mbus_frame_desc {unsigned int num_entries; TYPE_2__* entry; } ;
struct TYPE_4__ {scalar_t__ length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct v4l2_subdev*,int,int ,int,struct v4l2_mbus_frame_desc*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4,
          struct v4l2_plane_pix_format *VAR_5,
          unsigned int VAR_6, bool VAR_7)
{
 struct v4l2_mbus_frame_desc VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_8.entry[VAR_9].length = VAR_5[VAR_9].sizeimage;

 VAR_11 = VAR_4->entity.num_pads - 1;
 if (VAR_7)
  VAR_10 = FUNC_1(VAR_4, VAR_11, VAR_3, VAR_11, &VAR_8);
 else
  VAR_10 = FUNC_1(VAR_4, VAR_11, VAR_2, VAR_11, &VAR_8);

 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_6 != VAR_8.num_entries)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_5[VAR_9].sizeimage = VAR_8.entry[VAR_9].length;

 if (VAR_8.entry[0].length > VAR_1) {
  FUNC_0(VAR_4->v4l2_dev, "Unsupported buffer size: %u\n",
    VAR_8.entry[0].length);

  return -VAR_0;
 }

 return 0;
}
