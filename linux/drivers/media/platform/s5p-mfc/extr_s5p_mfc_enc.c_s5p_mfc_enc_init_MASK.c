
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix_mp; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct s5p_mfc_ctx {void* dst_fmt; void* src_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct v4l2_format*,int ) ;

void FUNC_1(struct s5p_mfc_ctx *VAR_4)
{
 struct v4l2_format VAR_5;
 VAR_5.fmt.pix_mp.pixelformat = VAR_1;
 VAR_4->src_fmt = FUNC_0(&VAR_5, VAR_3);
 VAR_5.fmt.pix_mp.pixelformat = VAR_0;
 VAR_4->dst_fmt = FUNC_0(&VAR_5, VAR_2);
}
