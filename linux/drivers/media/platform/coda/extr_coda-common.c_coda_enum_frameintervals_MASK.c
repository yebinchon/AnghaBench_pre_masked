
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int numerator; int denominator; } ;
struct TYPE_8__ {int numerator; int denominator; } ;
struct TYPE_7__ {int numerator; int denominator; } ;
struct TYPE_10__ {TYPE_4__ step; TYPE_3__ max; TYPE_2__ min; } ;
struct v4l2_frmivalenum {scalar_t__ pixel_format; TYPE_5__ stepwise; int type; scalar_t__ index; } ;
struct file {int dummy; } ;
struct coda_ctx {TYPE_1__* cvd; int vdoa; } ;
struct TYPE_6__ {scalar_t__* src_formats; scalar_t__* dst_formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct coda_ctx* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
        struct v4l2_frmivalenum *VAR_6)
{
 struct coda_ctx *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;

 if (VAR_6->index)
  return -VAR_1;


 if (!VAR_7->vdoa && VAR_6->pixel_format == VAR_3)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_6->pixel_format == VAR_7->cvd->src_formats[VAR_8] ||
      VAR_6->pixel_format == VAR_7->cvd->dst_formats[VAR_8])
   break;
 }
 if (VAR_8 == VAR_0)
  return -VAR_1;

 VAR_6->type = VAR_2;
 VAR_6->stepwise.min.numerator = 1;
 VAR_6->stepwise.min.denominator = 65535;
 VAR_6->stepwise.max.numerator = 65536;
 VAR_6->stepwise.max.denominator = 1;
 VAR_6->stepwise.step.numerator = 1;
 VAR_6->stepwise.step.denominator = 1;

 return 0;
}
