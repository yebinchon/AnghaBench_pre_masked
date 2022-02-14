
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_format {int format; int which; } ;
struct TYPE_4__ {int pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct isi_format {int mbus_code; } ;
struct TYPE_3__ {int subdev; } ;
struct atmel_isi {struct isi_format const* current_fmt; struct v4l2_format fmt; TYPE_1__ entity; } ;


 int VAR_0 ;
 int FUNC_0 (struct atmel_isi*,struct v4l2_format*,struct isi_format const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_3(struct atmel_isi *VAR_3, struct v4l2_format *VAR_4)
{
 struct v4l2_subdev_format VAR_5 = {
  .which = VAR_0,
 };
 const struct isi_format *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_5.format, &VAR_4->fmt.pix,
         VAR_6->mbus_code);
 VAR_7 = FUNC_2(VAR_3->entity.subdev, VAR_1,
          VAR_2, ((void*)0), &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_3->fmt = *VAR_4;
 VAR_3->current_fmt = VAR_6;

 return 0;
}
