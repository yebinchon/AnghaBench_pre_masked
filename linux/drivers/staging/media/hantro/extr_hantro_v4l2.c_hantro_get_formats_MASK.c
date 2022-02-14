
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hantro_fmt {int dummy; } ;
struct hantro_ctx {TYPE_1__* dev; } ;
struct TYPE_4__ {unsigned int num_enc_fmts; unsigned int num_dec_fmts; struct hantro_fmt* dec_fmts; struct hantro_fmt* enc_fmts; } ;
struct TYPE_3__ {TYPE_2__* variant; } ;


 scalar_t__ FUNC_0 (struct hantro_ctx const*) ;

__attribute__((used)) static const struct hantro_fmt *
FUNC_1(const struct hantro_ctx *VAR_0, unsigned int *VAR_1)
{
 const struct hantro_fmt *VAR_2;

 if (FUNC_0(VAR_0)) {
  VAR_2 = VAR_0->dev->variant->enc_fmts;
  *VAR_1 = VAR_0->dev->variant->num_enc_fmts;
 } else {
  VAR_2 = VAR_0->dev->variant->dec_fmts;
  *VAR_1 = VAR_0->dev->variant->num_dec_fmts;
 }

 return VAR_2;
}
