
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venus_inst {scalar_t__ num_input_bufs; scalar_t__ num_output_bufs; TYPE_2__* core; } ;
struct hfi_buffer_requirements {scalar_t__ count_actual; } ;
typedef enum hfi_version { ____Placeholder_hfi_version } hfi_version ;
struct TYPE_4__ {TYPE_1__* res; } ;
struct TYPE_3__ {int hfi_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hfi_buffer_requirements*,int) ;
 int FUNC_1 (struct venus_inst*,int ,struct hfi_buffer_requirements*) ;

__attribute__((used)) static int FUNC_2(struct venus_inst *VAR_3)
{
 enum hfi_version VAR_4 = VAR_3->core->res->hfi_version;
 struct hfi_buffer_requirements VAR_5;
 int VAR_6;

 if (!VAR_3->num_input_bufs || !VAR_3->num_output_bufs)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_3->num_output_bufs < VAR_5.count_actual ||
     VAR_3->num_output_bufs < FUNC_0(&VAR_5, VAR_4))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_3->num_input_bufs < VAR_5.count_actual ||
     VAR_3->num_input_bufs < FUNC_0(&VAR_5, VAR_4))
  return -VAR_0;

 return 0;
}
