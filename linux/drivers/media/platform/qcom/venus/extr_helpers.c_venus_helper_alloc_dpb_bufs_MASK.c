
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct venus_inst {unsigned int dpb_buftype; unsigned int output_buf_size; unsigned int output2_buf_size; int dpbbufs; int dpb_fmt; struct venus_core* core; } ;
struct venus_core {TYPE_1__* res; struct device* dev; } ;
struct intbuf {unsigned int type; unsigned int size; int attrs; int list; int va; int da; } ;
struct hfi_buffer_requirements {int dummy; } ;
struct device {int dummy; } ;
typedef enum hfi_version { ____Placeholder_hfi_version } hfi_version ;
struct TYPE_2__ {int hfi_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct hfi_buffer_requirements*,int) ;
 int FUNC_1 (struct device*,unsigned int,int *,int ,int) ;
 int FUNC_2 (struct intbuf*) ;
 struct intbuf* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct venus_inst*) ;
 int FUNC_6 (struct venus_inst*,unsigned int,struct hfi_buffer_requirements*) ;

int FUNC_7(struct venus_inst *VAR_6)
{
 struct venus_core *VAR_7 = VAR_6->core;
 struct device *VAR_8 = VAR_7->dev;
 enum hfi_version VAR_9 = VAR_7->res->hfi_version;
 struct hfi_buffer_requirements VAR_10;
 u32 VAR_11 = VAR_6->dpb_buftype;
 unsigned int VAR_12 = 0;
 struct intbuf *VAR_13;
 unsigned int VAR_14;
 u32 VAR_15;
 int VAR_16;


 if (!VAR_6->dpb_fmt)
  return 0;

 if (VAR_6->dpb_buftype == VAR_4)
  VAR_12 = VAR_6->output_buf_size;
 else if (VAR_6->dpb_buftype == VAR_5)
  VAR_12 = VAR_6->output2_buf_size;

 if (!VAR_12)
  return 0;

 VAR_16 = FUNC_6(VAR_6, VAR_11, &VAR_10);
 if (VAR_16)
  return VAR_16;

 VAR_15 = FUNC_0(&VAR_10, VAR_9);

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_3);
  if (!VAR_13) {
   VAR_16 = -VAR_2;
   goto fail;
  }

  VAR_13->type = VAR_11;
  VAR_13->size = VAR_12;
  VAR_13->attrs = VAR_1 |
        VAR_0;
  VAR_13->va = FUNC_1(VAR_8, VAR_13->size, &VAR_13->da, VAR_3,
       VAR_13->attrs);
  if (!VAR_13->va) {
   FUNC_2(VAR_13);
   VAR_16 = -VAR_2;
   goto fail;
  }

  FUNC_4(&VAR_13->list, &VAR_6->dpbbufs);
 }

 return 0;

fail:
 FUNC_5(VAR_6);
 return VAR_16;
}
