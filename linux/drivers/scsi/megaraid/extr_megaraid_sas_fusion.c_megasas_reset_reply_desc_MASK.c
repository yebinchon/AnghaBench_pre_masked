
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union MPI2_REPLY_DESCRIPTORS_UNION {int Words; } ;
struct megasas_instance {scalar_t__ msix_vectors; struct fusion_context* ctrl_context; } ;
struct fusion_context {int reply_q_depth; union MPI2_REPLY_DESCRIPTORS_UNION** reply_frames_desc; scalar_t__* last_reply_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct megasas_instance *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 struct fusion_context *VAR_5;
 union MPI2_REPLY_DESCRIPTORS_UNION *VAR_6;

 VAR_5 = VAR_1->ctrl_context;
 VAR_4 = VAR_1->msix_vectors > 0 ? VAR_1->msix_vectors : 1;
 for (VAR_2 = 0 ; VAR_2 < VAR_4 ; VAR_2++) {
  VAR_5->last_reply_idx[VAR_2] = 0;
  VAR_6 = VAR_5->reply_frames_desc[VAR_2];
  for (VAR_3 = 0 ; VAR_3 < VAR_5->reply_q_depth; VAR_3++, VAR_6++)
   VAR_6->Words = FUNC_0(VAR_0);
 }
}
