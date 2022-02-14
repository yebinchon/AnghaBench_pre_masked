
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {TYPE_2__ interval; } ;
struct v4l2_mbus_framefmt {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; } ;
struct s5k6aa_interval {int reg_fr_time; TYPE_3__ size; } ;
struct s5k6aa {int sd; struct s5k6aa_interval const* fiv; TYPE_1__* preset; } ;
struct TYPE_4__ {struct v4l2_mbus_framefmt mbus_fmt; } ;


 unsigned int FUNC_0 (struct s5k6aa_interval*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int) ;
 int VAR_2 ;
 struct s5k6aa_interval* VAR_3 ;
 int FUNC_2 (int,int ,int *,char*,int) ;

__attribute__((used)) static int FUNC_3(struct s5k6aa *VAR_4,
           struct v4l2_subdev_frame_interval *VAR_5)
{
 struct v4l2_mbus_framefmt *VAR_6 = &VAR_4->preset->mbus_fmt;
 const struct s5k6aa_interval *VAR_7 = &VAR_3[0];
 unsigned int VAR_8, VAR_9 = VAR_1;
 unsigned int VAR_10, VAR_11;

 if (VAR_5->interval.denominator == 0)
  return -VAR_0;

 VAR_11 = VAR_5->interval.numerator * 10000 / VAR_5->interval.denominator;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
  const struct s5k6aa_interval *VAR_12 = &VAR_3[VAR_10];

  if (VAR_6->width > VAR_12->size.width ||
      VAR_6->height > VAR_12->size.height)
   continue;

  VAR_8 = FUNC_1(VAR_12->reg_fr_time - VAR_11);
  if (VAR_8 < VAR_9) {
   VAR_7 = VAR_12;
   VAR_9 = VAR_8;
  }
 }
 VAR_4->fiv = VAR_7;

 FUNC_2(1, VAR_2, &VAR_4->sd, "Changed frame interval to %d us\n",
   VAR_7->reg_fr_time * 100);
 return 0;
}
