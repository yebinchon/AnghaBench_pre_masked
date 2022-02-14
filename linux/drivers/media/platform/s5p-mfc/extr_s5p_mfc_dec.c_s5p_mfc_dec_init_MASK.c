
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix_mp; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct s5p_mfc_ctx {void* dst_fmt; void* src_fmt; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (struct v4l2_format*,int ) ;
 int FUNC_3 (int,char*,void*,void*) ;

void FUNC_4(struct s5p_mfc_ctx *VAR_6)
{
 struct v4l2_format VAR_7;
 VAR_7.fmt.pix_mp.pixelformat = VAR_2;
 VAR_6->src_fmt = FUNC_2(&VAR_7, VAR_0);
 if (FUNC_1(VAR_6->dev))
  VAR_7.fmt.pix_mp.pixelformat = VAR_3;
 else if (FUNC_0(VAR_6->dev))
  VAR_7.fmt.pix_mp.pixelformat = VAR_5;
 else
  VAR_7.fmt.pix_mp.pixelformat = VAR_4;
 VAR_6->dst_fmt = FUNC_2(&VAR_7, VAR_1);
 FUNC_3(2, "Default src_fmt is %p, dest_fmt is %p\n",
   VAR_6->src_fmt, VAR_6->dst_fmt);
}
