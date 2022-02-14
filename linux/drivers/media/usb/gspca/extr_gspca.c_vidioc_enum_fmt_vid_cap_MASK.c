
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fmtdesc {int index; scalar_t__ pixelformat; } ;
struct TYPE_4__ {int nmodes; TYPE_1__* cam_mode; } ;
struct gspca_dev {TYPE_2__ cam; } ;
struct file {int dummy; } ;
typedef scalar_t__ __u32 ;
struct TYPE_3__ {scalar_t__ pixelformat; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 struct gspca_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_fmtdesc *VAR_3)
{
 struct gspca_dev *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6, VAR_7;
 __u32 VAR_8[8];


 VAR_7 = 0;
 for (VAR_5 = VAR_4->cam.nmodes; --VAR_5 >= 0; ) {
  VAR_8[VAR_7] = VAR_4->cam.cam_mode[VAR_5].pixelformat;
  VAR_6 = 0;
  for (;;) {
   if (VAR_8[VAR_6] == VAR_8[VAR_7])
    break;
   VAR_6++;
  }
  if (VAR_6 == VAR_7) {
   if (VAR_3->index == VAR_7)
    break;
   VAR_7++;
   if (VAR_7 >= FUNC_0(VAR_8))
    return -VAR_0;
  }
 }
 if (VAR_5 < 0)
  return -VAR_0;

 VAR_3->pixelformat = VAR_8[VAR_7];
 return 0;
}
