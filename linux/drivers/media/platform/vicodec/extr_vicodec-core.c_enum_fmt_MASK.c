
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* m2m_ctx; } ;
struct vicodec_ctx {scalar_t__ is_stateless; scalar_t__ is_enc; TYPE_3__ fh; } ;
struct v4l2_fwht_pixfmt_info {int id; int pixenc; int components_num; int height_div; int width_div; } ;
struct v4l2_fmtdesc {int flags; int pixelformat; scalar_t__ index; int type; } ;
struct TYPE_8__ {struct v4l2_fwht_pixfmt_info* info; } ;
struct TYPE_5__ {int q; } ;
struct TYPE_6__ {TYPE_1__ cap_q_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (struct vicodec_ctx*,int ) ;
 scalar_t__ VAR_5 ;
 struct v4l2_fwht_pixfmt_info* FUNC_2 (int ,int ,int ,int ,scalar_t__) ;
 struct v4l2_fwht_pixfmt_info* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct v4l2_fmtdesc *VAR_6, struct vicodec_ctx *VAR_7,
      bool VAR_8)
{
 bool VAR_9 = (VAR_7->is_enc && VAR_8) || (!VAR_7->is_enc && !VAR_8);

 if (FUNC_0(VAR_6->type) && !VAR_5)
  return -VAR_0;
 if (!FUNC_0(VAR_6->type) && VAR_5)
  return -VAR_0;

 if (VAR_9) {
  const struct v4l2_fwht_pixfmt_info *VAR_10 =
     FUNC_1(VAR_7, VAR_6->type)->info;

  if (VAR_7->is_enc ||
      !FUNC_4(&VAR_7->fh.m2m_ctx->cap_q_ctx.q))
   VAR_10 = FUNC_3(VAR_6->index);
  else
   VAR_10 = FUNC_2(VAR_10->width_div,
           VAR_10->height_div,
           VAR_10->components_num,
           VAR_10->pixenc,
           VAR_6->index);
  if (!VAR_10)
   return -VAR_0;
  VAR_6->pixelformat = VAR_10->id;
 } else {
  if (VAR_6->index)
   return -VAR_0;
  VAR_6->pixelformat = VAR_7->is_stateless ?
   VAR_4 : VAR_3;
  if (!VAR_7->is_enc && !VAR_7->is_stateless)
   VAR_6->flags = VAR_2 |
       VAR_1;
 }
 return 0;
}
