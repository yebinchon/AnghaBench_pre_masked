
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu3_uapi_shd_grid_config {int block_height_log2; unsigned int grid_height_per_slice; scalar_t__ y_start; } ;
struct imgu_abi_shd_transfer_luts_set_data {unsigned char set_number; } ;
struct imgu_abi_shd_intra_frame_operations_data {struct imgu_abi_shd_transfer_luts_set_data* transfer_data; struct imgu_abi_acc_process_lines_cmd_data* process_lines_data; struct imgu_abi_acc_operation* operation_list; } ;
struct imgu_abi_acc_process_lines_cmd_data {unsigned int lines; unsigned char cfg_set; } ;
struct imgu_abi_acc_operation {void* op_indicator; int op_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (struct imgu_abi_shd_intra_frame_operations_data*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct imgu_abi_shd_intra_frame_operations_data *VAR_10,
        const struct ipu3_uapi_shd_grid_config *VAR_11,
        unsigned int VAR_12)
{
 unsigned int VAR_13 = 1 << VAR_11->block_height_log2;
 unsigned int VAR_14 = VAR_11->grid_height_per_slice;
 unsigned int VAR_15 = VAR_14 * VAR_13;


 unsigned int VAR_16 = (unsigned int)-VAR_11->y_start;
 unsigned int VAR_17 =
    VAR_15 - (VAR_16 % VAR_15);
 unsigned int VAR_18;
 unsigned int VAR_19;

 struct imgu_abi_acc_operation *VAR_20;
 struct imgu_abi_acc_process_lines_cmd_data *VAR_21;
 struct imgu_abi_shd_transfer_luts_set_data *VAR_22;

 unsigned int VAR_23, VAR_24, VAR_25;
 unsigned char VAR_26, VAR_27;






 unsigned char VAR_28 = 0;


 bool VAR_29;

 bool VAR_30;





 if (VAR_12 > VAR_17) {
  VAR_18 =
   (VAR_12 - VAR_17) % VAR_15;
  VAR_19 = VAR_18 > 0 ?
   (VAR_12 - VAR_17) / VAR_15 + 2 :
   (VAR_12 - VAR_17) / VAR_15 + 1;
  VAR_28 = (VAR_15 - VAR_18 <= VAR_13 ||
      VAR_18 == 0) ? 1 : 0;
 } else {
  VAR_18 = 0;
  VAR_19 = 1;
  VAR_17 = VAR_12;
  VAR_28 = VAR_15 - VAR_12 <= VAR_13 ? 1 : 0;
 }


 VAR_20 = VAR_10->operation_list;
 VAR_23 = 0;
 VAR_21 = VAR_10->process_lines_data;
 VAR_24 = 0;
 VAR_22 = VAR_10->transfer_data;
 VAR_25 = 0;

 FUNC_0(VAR_10, 0, sizeof(*VAR_10));


 VAR_26 = 0;
 VAR_27 = 0;






 VAR_29 = 0;
 VAR_30 = 1;

 while (VAR_29 || VAR_30) {

  if (VAR_30) {
   if (VAR_23 >= VAR_6 ||
       VAR_25 >= VAR_8)
    return -VAR_0;
   VAR_20[VAR_23].op_type =
    VAR_2;
   VAR_20[VAR_23].op_indicator = VAR_5;
   VAR_23++;
   VAR_22[VAR_25].set_number = VAR_26;
   VAR_25++;
   VAR_26 = (VAR_26 + 1) % VAR_9;
  }


  if (VAR_29) {
   if (VAR_23 >= VAR_6 ||
       VAR_24 >= VAR_7)
    return -VAR_0;
   VAR_20[VAR_23].op_type =
    VAR_1;





   if (VAR_24 == 0 && VAR_19 != 1)
    VAR_20[VAR_23].op_indicator =
     VAR_5;




   else if (VAR_24 == VAR_19 - 1)
    VAR_20[VAR_23].op_indicator =
     VAR_4;





   else
    VAR_20[VAR_23].op_indicator =
     VAR_3;

   VAR_23++;


   if (VAR_24 == 0)
    VAR_21[VAR_24].lines = VAR_17;

   else if (VAR_24 == VAR_19 - 1 &&
     VAR_18 > 0)
    VAR_21[VAR_24].lines = VAR_18;
   else
    VAR_21[VAR_24].lines = VAR_15;

   VAR_21[VAR_24].cfg_set = VAR_27;
   VAR_24++;
   VAR_27 = (VAR_27 + 1) % VAR_9;
  }






  if (VAR_25 == VAR_9 ||
      VAR_25 == VAR_19 + VAR_28) {
   VAR_30 = 0;
   VAR_29 = 1;
  }





  if (VAR_24 == 2) {
   VAR_30 = 1;
   VAR_29 = 1;
  }


  if (VAR_25 == VAR_19 + VAR_28)
   VAR_30 = 0;
  if (VAR_24 == VAR_19)
   VAR_29 = 0;
 }

 return 0;
}
