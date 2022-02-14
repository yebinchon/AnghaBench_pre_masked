
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fract {int dummy; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {size_t tvnorm; } ;
struct TYPE_3__ {struct v4l2_fract pixelaspect; } ;
struct TYPE_4__ {TYPE_1__ cropcap; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4,
         int VAR_5, struct v4l2_fract *VAR_6)
{
 struct bttv_fh *VAR_7 = VAR_4;
 struct bttv *VAR_8 = VAR_7->btv;

 if (VAR_5 != VAR_1)
  return -VAR_0;


 *VAR_6 = VAR_2[VAR_8->tvnorm].cropcap.pixelaspect;
 return 0;
}
