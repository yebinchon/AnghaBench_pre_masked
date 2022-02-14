
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pixelformat; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
struct vivid_dev {void* overlay_cap_owner; TYPE_3__* fmt_cap; TYPE_2__ fb_cap; int * fb_vbase_cap; scalar_t__ multiplanar; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vivid_dev*,int,char*) ;
 struct vivid_dev* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_3, void *VAR_4, unsigned VAR_5)
{
 struct vivid_dev *VAR_6 = FUNC_1(VAR_3);

 if (VAR_6->multiplanar)
  return -VAR_2;

 if (VAR_5 && VAR_6->fb_vbase_cap == ((void*)0))
  return -VAR_1;

 if (VAR_5 && VAR_6->fb_cap.fmt.pixelformat != VAR_6->fmt_cap->fourcc) {
  FUNC_0(VAR_6, 1, "mismatch between overlay and video capture pixelformats\n");
  return -VAR_1;
 }

 if (VAR_6->overlay_cap_owner && VAR_6->overlay_cap_owner != VAR_4)
  return -VAR_0;
 VAR_6->overlay_cap_owner = VAR_5 ? VAR_4 : ((void*)0);
 return 0;
}
