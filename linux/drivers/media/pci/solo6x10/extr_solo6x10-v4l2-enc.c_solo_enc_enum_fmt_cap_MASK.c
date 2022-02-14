
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct solo_enc_dev {TYPE_1__* solo_dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct solo_enc_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
     struct v4l2_fmtdesc *VAR_6)
{
 struct solo_enc_dev *VAR_7 = FUNC_0(VAR_4);
 int VAR_8 = VAR_7->solo_dev->type;

 switch (VAR_6->index) {
 case 0:
  switch (VAR_8) {
  case 129:
   VAR_6->pixelformat = VAR_3;
   break;
  case 128:
   VAR_6->pixelformat = VAR_1;
   break;
  }
  break;
 case 1:
  VAR_6->pixelformat = VAR_2;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
