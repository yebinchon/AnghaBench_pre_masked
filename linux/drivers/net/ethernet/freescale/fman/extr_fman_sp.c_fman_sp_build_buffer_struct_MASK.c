
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct fman_sp_int_context_data_copy {int ext_buf_offset; int size; scalar_t__ int_context_offset; } ;
struct fman_sp_buffer_offsets {int prs_result_offset; int time_stamp_offset; int hash_result_offset; int data_offset; } ;
struct fman_sp_buf_margins {int start_margins; } ;
struct fman_prs_result {int dummy; } ;
struct fman_buffer_prefix_content {int priv_data_size; int data_align; scalar_t__ pass_prs_result; scalar_t__ pass_hash_result; scalar_t__ pass_time_stamp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct fman_sp_int_context_data_copy *
    VAR_2,
    struct fman_buffer_prefix_content *
    VAR_3,
    struct fman_sp_buf_margins *VAR_4,
    struct fman_sp_buffer_offsets *VAR_5,
    u8 *VAR_6)
{
 u32 VAR_7;


 VAR_2->ext_buf_offset = (u16)
  ((VAR_3->priv_data_size & (VAR_1 - 1)) ?
  ((VAR_3->priv_data_size + VAR_1) &
   ~(u16)(VAR_1 - 1)) :
  VAR_3->priv_data_size);



 VAR_5->prs_result_offset = (u32)VAR_0;
 VAR_5->time_stamp_offset = (u32)VAR_0;
 VAR_5->hash_result_offset = (u32)VAR_0;
 VAR_2->size =
     (u16)((VAR_3->pass_prs_result ? 32 : 0) +
    ((VAR_3->pass_time_stamp ||
    VAR_3->pass_hash_result) ? 16 : 0));


 VAR_2->int_context_offset =
     (u8)(VAR_3->pass_prs_result ? 32 :
   ((VAR_3->pass_time_stamp ||
   VAR_3->pass_hash_result) ? 64 : 0));

 if (VAR_3->pass_prs_result)
  VAR_5->prs_result_offset =
      VAR_2->ext_buf_offset;
 if (VAR_3->pass_time_stamp)
  VAR_5->time_stamp_offset =
      VAR_3->pass_prs_result ?
      (VAR_2->ext_buf_offset +
   sizeof(struct fman_prs_result)) :
      VAR_2->ext_buf_offset;
 if (VAR_3->pass_hash_result)



  VAR_5->hash_result_offset =
  VAR_3->pass_prs_result ?
   (VAR_2->ext_buf_offset +
    sizeof(struct fman_prs_result) + 8) :
   VAR_2->ext_buf_offset + 8;

 if (VAR_2->size)
  VAR_4->start_margins =
      (u16)(VAR_2->ext_buf_offset +
     VAR_2->size);
 else



  VAR_4->start_margins =
      VAR_3->priv_data_size;


 VAR_7 = (u32)(VAR_4->start_margins %
      VAR_3->data_align);
 if (VAR_7)
  VAR_4->start_margins +=
      (VAR_3->data_align - VAR_7);
 VAR_5->data_offset = VAR_4->start_margins;

 return 0;
}
