
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct venus_inst {int out_width; int out_height; int opb_fmt; int dpb_fmt; void* output_buf_size; void* output2_buf_size; void* dpb_buftype; void* opb_buftype; TYPE_2__* fmt_cap; struct venus_core* core; } ;
struct venus_core {TYPE_1__* res; } ;
struct hfi_enable {int enable; } ;
struct TYPE_4__ {int pixfmt; } ;
struct TYPE_3__ {scalar_t__ hfi_version; } ;


 int FUNC_0 (int,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct venus_core*) ;
 scalar_t__ FUNC_2 (struct venus_core*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct venus_inst*,int,struct hfi_enable*) ;
 scalar_t__ FUNC_4 (int) ;
 void* FUNC_5 (int,int,int) ;
 int FUNC_6 (struct venus_inst*,int ,int*,int*,int) ;
 int FUNC_7 (struct venus_inst*,void*,void*) ;
 int FUNC_8 (struct venus_inst*,int ) ;
 int FUNC_9 (struct venus_inst*) ;
 int FUNC_10 (struct venus_inst*,int,int) ;
 int FUNC_11 (struct venus_inst*,int,int,void*) ;
 int FUNC_12 (struct venus_inst*,int,void*) ;
 int FUNC_13 (struct venus_inst*,int ) ;

__attribute__((used)) static int FUNC_14(struct venus_inst *VAR_6)
{
 struct venus_core *VAR_7 = VAR_6->core;
 struct hfi_enable VAR_8 = { .enable = 1 };
 u32 VAR_9 = VAR_6->out_width;
 u32 VAR_10 = VAR_6->out_height;
 u32 VAR_11, VAR_12;
 bool VAR_13 = 0;
 u32 VAR_14;
 int VAR_15;

 VAR_15 = FUNC_13(VAR_6, VAR_5);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_8(VAR_6, VAR_4);
 if (VAR_15)
  return VAR_15;

 if (VAR_7->res->hfi_version == VAR_3) {
  VAR_14 = VAR_2;
  VAR_15 = FUNC_3(VAR_6, VAR_14, &VAR_8);
  if (VAR_15)
   return VAR_15;
 }


 if (VAR_9 > 1920 && VAR_10 > FUNC_0(1080, 32))
  VAR_13 = 1;


 if (FUNC_2(VAR_7))
  VAR_13 = 1;

 VAR_15 = FUNC_6(VAR_6, VAR_6->fmt_cap->pixfmt, &VAR_11,
     &VAR_12, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_6->output_buf_size =
   FUNC_5(VAR_11, VAR_9, VAR_10);
 VAR_6->output2_buf_size =
   FUNC_5(VAR_12, VAR_9, VAR_10);

 if (FUNC_4(VAR_11)) {
  VAR_6->opb_buftype = VAR_1;
  VAR_6->opb_fmt = VAR_12;
  VAR_6->dpb_buftype = VAR_0;
  VAR_6->dpb_fmt = VAR_11;
 } else if (FUNC_4(VAR_12)) {
  VAR_6->opb_buftype = VAR_0;
  VAR_6->opb_fmt = VAR_11;
  VAR_6->dpb_buftype = VAR_1;
  VAR_6->dpb_fmt = VAR_12;
 } else {
  VAR_6->opb_buftype = VAR_0;
  VAR_6->opb_fmt = VAR_11;
  VAR_6->dpb_buftype = 0;
  VAR_6->dpb_fmt = 0;
 }

 VAR_15 = FUNC_12(VAR_6, VAR_6->opb_fmt,
       VAR_6->opb_buftype);
 if (VAR_15)
  return VAR_15;

 if (VAR_6->dpb_fmt) {
  VAR_15 = FUNC_10(VAR_6, 0, 1);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_12(VAR_6, VAR_6->dpb_fmt,
        VAR_6->dpb_buftype);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_11(VAR_6, VAR_9, VAR_10,
        VAR_1);
  if (VAR_15)
   return VAR_15;
 }

 if (FUNC_1(VAR_7) || FUNC_2(VAR_7)) {
  if (VAR_6->output2_buf_size) {
   VAR_15 = FUNC_7(VAR_6,
             VAR_6->output2_buf_size,
             VAR_1);
   if (VAR_15)
    return VAR_15;
  }

  if (VAR_6->output_buf_size) {
   VAR_15 = FUNC_7(VAR_6,
             VAR_6->output_buf_size,
             VAR_0);
   if (VAR_15)
    return VAR_15;
  }
 }

 VAR_15 = FUNC_9(VAR_6);
 if (VAR_15)
  return VAR_15;

 return 0;
}
