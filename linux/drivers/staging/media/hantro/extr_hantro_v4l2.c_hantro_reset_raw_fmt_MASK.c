
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format_mplane {int height; int width; } ;
struct hantro_fmt {int fourcc; } ;
struct hantro_ctx {struct v4l2_pix_format_mplane src_fmt; struct v4l2_pix_format_mplane dst_fmt; struct hantro_fmt const* vpu_dst_fmt; struct hantro_fmt const* vpu_src_fmt; } ;


 struct hantro_fmt* FUNC_0 (struct hantro_fmt const*,unsigned int,int) ;
 struct hantro_fmt* FUNC_1 (struct hantro_ctx*,unsigned int*) ;
 scalar_t__ FUNC_2 (struct hantro_ctx*) ;
 int FUNC_3 (struct v4l2_pix_format_mplane*,struct hantro_fmt const*) ;
 int FUNC_4 (struct v4l2_pix_format_mplane*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct hantro_ctx *VAR_0)
{
 const struct hantro_fmt *VAR_1, *VAR_2;
 struct v4l2_pix_format_mplane *VAR_3, *VAR_4;
 unsigned int VAR_5;

 VAR_2 = FUNC_1(VAR_0, &VAR_5);
 VAR_1 = FUNC_0(VAR_2, VAR_5, 0);

 if (FUNC_2(VAR_0)) {
  VAR_0->vpu_src_fmt = VAR_1;
  VAR_3 = &VAR_0->src_fmt;
  VAR_4 = &VAR_0->dst_fmt;
 } else {
  VAR_0->vpu_dst_fmt = VAR_1;
  VAR_3 = &VAR_0->dst_fmt;
  VAR_4 = &VAR_0->src_fmt;
 }

 FUNC_3(VAR_3, VAR_1);
 FUNC_4(VAR_3, VAR_1->fourcc,
       VAR_4->width,
       VAR_4->height);
}
