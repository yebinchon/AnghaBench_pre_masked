
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int error; } ;
struct nal_h264_hrd_parameters {unsigned int cpb_cnt_minus1; unsigned int* bit_rate_value_minus1; unsigned int* cpb_size_value_minus1; int time_offset_length; int dpb_output_delay_length_minus1; int cpb_removal_delay_length_minus1; int initial_cpb_removal_delay_length_minus1; int * cbr_flag; int cpb_size_scale; int bit_rate_scale; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbsp*,int *) ;
 int FUNC_1 (struct rbsp*,int,int *) ;
 int FUNC_2 (struct rbsp*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct rbsp *VAR_1,
      struct nal_h264_hrd_parameters *VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_2) {
  VAR_1->error = -VAR_0;
  return;
 }

 FUNC_2(VAR_1, &VAR_2->cpb_cnt_minus1);
 FUNC_1(VAR_1, 4, &VAR_2->bit_rate_scale);
 FUNC_1(VAR_1, 4, &VAR_2->cpb_size_scale);

 for (VAR_3 = 0; VAR_3 <= VAR_2->cpb_cnt_minus1; VAR_3++) {
  FUNC_2(VAR_1, &VAR_2->bit_rate_value_minus1[VAR_3]);
  FUNC_2(VAR_1, &VAR_2->cpb_size_value_minus1[VAR_3]);
  FUNC_0(VAR_1, &VAR_2->cbr_flag[VAR_3]);
 }

 FUNC_1(VAR_1, 5, &VAR_2->initial_cpb_removal_delay_length_minus1);
 FUNC_1(VAR_1, 5, &VAR_2->cpb_removal_delay_length_minus1);
 FUNC_1(VAR_1, 5, &VAR_2->dpb_output_delay_length_minus1);
 FUNC_1(VAR_1, 5, &VAR_2->time_offset_length);
}
