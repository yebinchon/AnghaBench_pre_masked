
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int code; } ;
struct csis_pix_format {int code; int pix_width_alignment; } ;
struct TYPE_2__ {int height; int width; int code; } ;
struct csi_state {TYPE_1__ format_mbus; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct csis_pix_format* FUNC_0 (int ) ;
 struct csis_pix_format* VAR_2 ;
 struct csi_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *,int,int ,int ,int *,int,int ,int,int ) ;

__attribute__((used)) static struct csis_pix_format const *
FUNC_3(struct v4l2_subdev *VAR_3, struct v4l2_mbus_framefmt *VAR_4)
{
 struct csi_state *VAR_5 = FUNC_1(VAR_3);
 struct csis_pix_format const *VAR_6;

 VAR_6 = FUNC_0(VAR_4->code);
 if (!VAR_6)
  VAR_6 = &VAR_2[0];

 FUNC_2(&VAR_4->width, 1, VAR_1,
         VAR_6->pix_width_alignment,
         &VAR_4->height, 1, VAR_0, 1,
         0);

 VAR_5->format_mbus.code = VAR_6->code;
 VAR_5->format_mbus.width = VAR_4->width;
 VAR_5->format_mbus.height = VAR_4->height;

 return VAR_6;
}
