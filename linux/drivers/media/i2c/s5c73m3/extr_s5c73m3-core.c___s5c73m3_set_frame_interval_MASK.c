
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; } ;
struct TYPE_6__ {int numerator; } ;
struct TYPE_5__ {scalar_t__ width; scalar_t__ height; } ;
struct s5c73m3_interval {TYPE_3__ interval; TYPE_2__ size; } ;
struct s5c73m3_frame_size {scalar_t__ width; scalar_t__ height; } ;
struct s5c73m3 {int sensor_sd; struct s5c73m3_interval const* fiv; struct s5c73m3_frame_size** sensor_pix_size; } ;


 unsigned int FUNC_0 (struct s5c73m3_interval*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (int) ;
 int VAR_3 ;
 struct s5c73m3_interval* VAR_4 ;
 int FUNC_2 (int,int ,int *,char*,int) ;

__attribute__((used)) static int FUNC_3(struct s5c73m3 *VAR_5,
     struct v4l2_subdev_frame_interval *VAR_6)
{
 const struct s5c73m3_frame_size *VAR_7 =
      VAR_5->sensor_pix_size[VAR_1];
 const struct s5c73m3_interval *VAR_8 = &VAR_4[0];
 unsigned int VAR_9, VAR_10 = VAR_2;
 unsigned int VAR_11, VAR_12;

 if (VAR_6->interval.denominator == 0)
  return -VAR_0;

 VAR_12 = VAR_6->interval.numerator * 1000 / VAR_6->interval.denominator;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
  const struct s5c73m3_interval *VAR_13 = &VAR_4[VAR_11];

  if (VAR_7->width > VAR_13->size.width ||
      VAR_7->height > VAR_13->size.height)
   continue;

  VAR_9 = FUNC_1(VAR_13->interval.numerator / 1000 - VAR_12);
  if (VAR_9 < VAR_10) {
   VAR_8 = VAR_13;
   VAR_10 = VAR_9;
  }
 }
 VAR_5->fiv = VAR_8;

 FUNC_2(1, VAR_3, &VAR_5->sensor_sd,
   "Changed frame interval to %u us\n", VAR_8->interval.numerator);
 return 0;
}
