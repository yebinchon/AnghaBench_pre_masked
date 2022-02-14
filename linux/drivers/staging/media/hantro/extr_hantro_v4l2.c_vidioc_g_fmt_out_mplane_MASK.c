
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int dummy; } ;
struct TYPE_2__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct hantro_ctx {struct v4l2_pix_format_mplane src_fmt; } ;
struct file {int dummy; } ;


 struct hantro_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
       struct v4l2_format *VAR_2)
{
 struct v4l2_pix_format_mplane *VAR_3 = &VAR_2->fmt.pix_mp;
 struct hantro_ctx *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(4, "f->type = %d\n", VAR_2->type);

 *VAR_3 = VAR_4->src_fmt;

 return 0;
}
