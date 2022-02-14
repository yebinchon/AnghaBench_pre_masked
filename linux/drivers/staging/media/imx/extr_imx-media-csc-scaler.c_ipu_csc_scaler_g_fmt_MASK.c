
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; int type; } ;
struct ipu_csc_scaler_q_data {int cur_fmt; } ;
struct ipu_csc_scaler_ctx {int dummy; } ;
struct file {int dummy; } ;


 struct ipu_csc_scaler_ctx* FUNC_0 (void*) ;
 struct ipu_csc_scaler_q_data* FUNC_1 (struct ipu_csc_scaler_ctx*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
    struct v4l2_format *VAR_2)
{
 struct ipu_csc_scaler_ctx *VAR_3 = FUNC_0(VAR_1);
 struct ipu_csc_scaler_q_data *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2->type);

 VAR_2->fmt.pix = VAR_4->cur_fmt;

 return 0;
}
