
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req_que {scalar_t__ num_outstanding_cmds; void* outstanding_cmds; } ;
struct qla_hw_data {scalar_t__ cur_fw_xcb_count; scalar_t__ cur_fw_iocb_count; } ;
typedef int srb_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int ,int *,int,char*,struct req_que*) ;
 int VAR_5 ;

int
FUNC_3(struct qla_hw_data *VAR_6, struct req_que *VAR_7)
{

 if (VAR_7->outstanding_cmds)
  return VAR_4;

 if (!FUNC_0(VAR_6))
  VAR_7->num_outstanding_cmds = VAR_0;
 else {
  if (VAR_6->cur_fw_xcb_count <= VAR_6->cur_fw_iocb_count)
   VAR_7->num_outstanding_cmds = VAR_6->cur_fw_xcb_count;
  else
   VAR_7->num_outstanding_cmds = VAR_6->cur_fw_iocb_count;
 }

 VAR_7->outstanding_cmds = FUNC_1(VAR_7->num_outstanding_cmds,
     sizeof(srb_t *),
     VAR_1);

 if (!VAR_7->outstanding_cmds) {




  VAR_7->num_outstanding_cmds = VAR_2;
  VAR_7->outstanding_cmds = FUNC_1(VAR_7->num_outstanding_cmds,
      sizeof(srb_t *),
      VAR_1);

  if (!VAR_7->outstanding_cmds) {
   FUNC_2(VAR_5, ((void*)0), 0x0126,
       "Failed to allocate memory for "
       "outstanding_cmds for req_que %p.\n", VAR_7);
   VAR_7->num_outstanding_cmds = 0;
   return VAR_3;
  }
 }

 return VAR_4;
}
