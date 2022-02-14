
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vimc_pix_map {int bpp; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; scalar_t__ field; int pixelformat; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ field; int pixelformat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int ) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct v4l2_pix_format*) ;
 struct vimc_pix_map* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
        struct v4l2_format *VAR_9)
{
 struct v4l2_pix_format *VAR_10 = &VAR_9->fmt.pix;
 const struct vimc_pix_map *VAR_11;

 VAR_10->width = FUNC_0(VAR_6, VAR_10->width, VAR_4,
    VAR_2) & ~1;
 VAR_10->height = FUNC_0(VAR_6, VAR_10->height, VAR_3,
     VAR_1) & ~1;


 VAR_11 = FUNC_2(VAR_10->pixelformat);
 if (!VAR_11) {
  VAR_10->pixelformat = VAR_5.pixelformat;
  VAR_11 = FUNC_2(VAR_10->pixelformat);
 }

 VAR_10->bytesperline = VAR_10->width * VAR_11->bpp;
 VAR_10->sizeimage = VAR_10->bytesperline * VAR_10->height;

 if (VAR_10->field == VAR_0)
  VAR_10->field = VAR_5.field;

 FUNC_1(VAR_10);

 return 0;
}
