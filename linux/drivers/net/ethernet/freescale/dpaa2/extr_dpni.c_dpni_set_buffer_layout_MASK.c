
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_cmd_set_buffer_layout {int qtype; void* tail_room; void* head_room; void* data_align; void* private_data_size; int flags; void* options; } ;
struct dpni_buffer_layout {int data_tail_room; int data_head_room; int data_align; int private_data_size; int pass_frame_status; int pass_parser_result; int pass_timestamp; int options; } ;
typedef enum dpni_queue_type { ____Placeholder_dpni_queue_type } dpni_queue_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_4,
      u32 VAR_5,
      u16 VAR_6,
      enum dpni_queue_type VAR_7,
      const struct dpni_buffer_layout *VAR_8)
{
 struct fsl_mc_command VAR_9 = { 0 };
 struct dpni_cmd_set_buffer_layout *VAR_10;


 VAR_9.header = FUNC_2(VAR_0,
       VAR_5,
       VAR_6);
 VAR_10 = (struct dpni_cmd_set_buffer_layout *)VAR_9.params;
 VAR_10->qtype = VAR_7;
 VAR_10->options = FUNC_0(VAR_8->options);
 FUNC_1(VAR_10->flags, VAR_3, VAR_8->pass_timestamp);
 FUNC_1(VAR_10->flags, VAR_2, VAR_8->pass_parser_result);
 FUNC_1(VAR_10->flags, VAR_1, VAR_8->pass_frame_status);
 VAR_10->private_data_size = FUNC_0(VAR_8->private_data_size);
 VAR_10->data_align = FUNC_0(VAR_8->data_align);
 VAR_10->head_room = FUNC_0(VAR_8->data_head_room);
 VAR_10->tail_room = FUNC_0(VAR_8->data_tail_room);


 return FUNC_3(VAR_4, &VAR_9);
}
