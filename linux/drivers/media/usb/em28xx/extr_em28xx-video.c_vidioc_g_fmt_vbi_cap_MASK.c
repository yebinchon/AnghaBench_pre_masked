
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sampling_rate; int* start; int reserved; int * count; scalar_t__ flags; scalar_t__ offset; int sample_format; int samples_per_line; } ;
struct TYPE_4__ {TYPE_1__ vbi; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct em28xx_v4l2 {int norm; int vbi_height; int vbi_width; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct em28xx* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
    struct v4l2_format *VAR_5)
{
 struct em28xx *VAR_6 = FUNC_1(VAR_3);
 struct em28xx_v4l2 *VAR_7 = VAR_6->v4l2;

 VAR_5->fmt.vbi.samples_per_line = VAR_7->vbi_width;
 VAR_5->fmt.vbi.sample_format = VAR_0;
 VAR_5->fmt.vbi.offset = 0;
 VAR_5->fmt.vbi.flags = 0;
 VAR_5->fmt.vbi.sampling_rate = 6750000 * 4 / 2;
 VAR_5->fmt.vbi.count[0] = VAR_7->vbi_height;
 VAR_5->fmt.vbi.count[1] = VAR_7->vbi_height;
 FUNC_0(VAR_5->fmt.vbi.reserved, 0, sizeof(VAR_5->fmt.vbi.reserved));


 if (VAR_7->norm & VAR_1) {

  VAR_5->fmt.vbi.start[0] = 10;
  VAR_5->fmt.vbi.start[1] = 273;
 } else if (VAR_7->norm & VAR_2) {

  VAR_5->fmt.vbi.start[0] = 6;
  VAR_5->fmt.vbi.start[1] = 318;
 }

 return 0;
}
