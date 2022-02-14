
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct venus_inst {int dummy; } ;
struct venus_format {int dummy; } ;
struct TYPE_7__ {int numerator; void* denominator; } ;
struct TYPE_6__ {int numerator; int denominator; } ;
struct TYPE_5__ {int numerator; void* denominator; } ;
struct TYPE_8__ {TYPE_3__ step; TYPE_2__ max; TYPE_1__ min; } ;
struct v4l2_frmivalenum {scalar_t__ width; scalar_t__ height; TYPE_4__ stepwise; scalar_t__ index; int pixel_format; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct venus_format* FUNC_0 (struct venus_inst*,int ,int ) ;
 scalar_t__ FUNC_1 (struct venus_inst*) ;
 scalar_t__ FUNC_2 (struct venus_inst*) ;
 scalar_t__ FUNC_3 (struct venus_inst*) ;
 scalar_t__ FUNC_4 (struct venus_inst*) ;
 void* FUNC_5 (struct venus_inst*) ;
 int FUNC_6 (struct venus_inst*) ;
 struct venus_inst* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_4, void *VAR_5,
        struct v4l2_frmivalenum *VAR_6)
{
 struct venus_inst *VAR_7 = FUNC_7(VAR_4);
 const struct venus_format *VAR_8;

 VAR_6->type = VAR_3;

 VAR_8 = FUNC_0(VAR_7, VAR_6->pixel_format,
     VAR_1);
 if (!VAR_8) {
  VAR_8 = FUNC_0(VAR_7, VAR_6->pixel_format,
      VAR_2);
  if (!VAR_8)
   return -VAR_0;
 }

 if (VAR_6->index)
  return -VAR_0;

 if (!VAR_6->width || !VAR_6->height)
  return -VAR_0;

 if (VAR_6->width > FUNC_3(VAR_7) ||
     VAR_6->width < FUNC_4(VAR_7) ||
     VAR_6->height > FUNC_1(VAR_7) ||
     VAR_6->height < FUNC_2(VAR_7))
  return -VAR_0;

 VAR_6->stepwise.min.numerator = 1;
 VAR_6->stepwise.min.denominator = FUNC_5(VAR_7);
 VAR_6->stepwise.max.numerator = 1;
 VAR_6->stepwise.max.denominator = FUNC_6(VAR_7);
 VAR_6->stepwise.step.numerator = 1;
 VAR_6->stepwise.step.denominator = FUNC_5(VAR_7);

 return 0;
}
