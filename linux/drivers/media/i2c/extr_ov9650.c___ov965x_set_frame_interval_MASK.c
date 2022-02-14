
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int denominator; scalar_t__ numerator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; } ;
struct v4l2_mbus_framefmt {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_6__ {int numerator; int denominator; } ;
struct TYPE_5__ {scalar_t__ width; scalar_t__ height; } ;
struct ov965x_interval {TYPE_3__ interval; TYPE_2__ size; } ;
struct ov965x {int sd; struct ov965x_interval const* fiv; struct v4l2_mbus_framefmt format; } ;


 unsigned int FUNC_0 (struct ov965x_interval*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 struct ov965x_interval* VAR_2 ;
 int FUNC_3 (int,int ,int *,char*,int) ;

__attribute__((used)) static int FUNC_4(struct ov965x *VAR_3,
           struct v4l2_subdev_frame_interval *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5 = &VAR_3->format;
 const struct ov965x_interval *VAR_6 = &VAR_2[0];
 u64 VAR_7, VAR_8, VAR_9 = ~0ULL;
 unsigned int VAR_10;

 if (VAR_4->interval.denominator == 0)
  return -VAR_0;

 VAR_7 = (u64)VAR_4->interval.numerator * 10000;
 FUNC_2(VAR_7, VAR_4->interval.denominator);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  const struct ov965x_interval *VAR_11 = &VAR_2[VAR_10];

  if (VAR_5->width != VAR_11->size.width ||
      VAR_5->height != VAR_11->size.height)
   continue;
  VAR_8 = FUNC_1((u64)(VAR_11->interval.numerator * 10000) /
       VAR_11->interval.denominator - VAR_7);
  if (VAR_8 < VAR_9) {
   VAR_6 = VAR_11;
   VAR_9 = VAR_8;
  }
 }
 VAR_3->fiv = VAR_6;

 FUNC_3(1, VAR_1, &VAR_3->sd, "Changed frame interval to %u us\n",
   VAR_6->interval.numerator * 1000000 / VAR_6->interval.denominator);

 return 0;
}
