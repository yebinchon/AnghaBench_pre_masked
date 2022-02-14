
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_lines {unsigned short y_start; unsigned short grid_height; unsigned short block_height; unsigned short grid_height_per_slice; unsigned short const image_height; unsigned short max_op; unsigned short max_tr; scalar_t__ acc_enable; } ;
struct imgu_abi_acc_transfer_op_data {unsigned char set_number; } ;
struct imgu_abi_acc_process_lines_cmd_data {unsigned short lines; unsigned char cfg_set; } ;
struct imgu_abi_acc_operation {void* op_indicator; int op_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 unsigned short VAR_6 ;

__attribute__((used)) static int
FUNC_0(const struct process_lines *VAR_7,
      struct imgu_abi_acc_operation *VAR_8,
      struct imgu_abi_acc_process_lines_cmd_data *VAR_9,
      struct imgu_abi_acc_transfer_op_data *VAR_10)
{
 unsigned short VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 unsigned char VAR_14 = 0, VAR_15 = 0;
 const unsigned short VAR_16 =
   VAR_7->y_start + VAR_7->grid_height * VAR_7->block_height;
 const unsigned short VAR_17 =
   VAR_7->grid_height_per_slice * VAR_7->block_height;

 unsigned int VAR_18;
 unsigned short VAR_19;
 unsigned short VAR_20;

 unsigned short VAR_21;
 unsigned short VAR_22;

 if (VAR_7->grid_height_per_slice == 0)
  return -VAR_0;

 if (VAR_7->acc_enable && VAR_16 > VAR_7->image_height)
  return -VAR_0;

 VAR_22 = VAR_7->grid_height / VAR_7->grid_height_per_slice;
 if (VAR_22 * VAR_7->grid_height_per_slice < VAR_7->grid_height)
  VAR_22++;


 if (VAR_7->max_op == VAR_6) {
  VAR_19 = VAR_17 + VAR_7->y_start + 2;
  VAR_20 =
   (VAR_16 - VAR_19) -
   ((VAR_22 - 2) * VAR_17) + 4;
  VAR_18 =
   VAR_7->image_height - VAR_16 - 4;
 } else {
  VAR_19 = VAR_17 + VAR_7->y_start;
  VAR_20 =
   (VAR_16 - VAR_19) -
   ((VAR_22 - 2) * VAR_17);
  VAR_18 = VAR_7->image_height - VAR_16;
 }

 VAR_21 = VAR_22;
 if (VAR_18 > 0)
  VAR_21++;

 while (VAR_13 < VAR_22 || VAR_12 < VAR_21) {

  if (VAR_12 >= 2 || (VAR_12 == 1 && VAR_22 == 1)) {
   if (VAR_11 >= VAR_7->max_op || VAR_13 >= VAR_7->max_tr)
    return -VAR_0;

   VAR_8[VAR_11].op_type =
    VAR_2;

   if (VAR_13 == VAR_22 - 1)

    VAR_8[VAR_11].op_indicator =
     VAR_4;
   else if (VAR_13 == VAR_22 - 2)
    if (VAR_18 == 0)




     VAR_8[VAR_11].op_indicator =
      VAR_3;
    else




     VAR_8[VAR_11].op_indicator =
      VAR_5;
   else

    VAR_8[VAR_11].op_indicator =
     VAR_5;

   VAR_11++;
   if (VAR_10) {
    VAR_10[VAR_13].set_number = VAR_14;
    VAR_14 = 1 - VAR_14;
   }
   VAR_13++;
  }


  if (VAR_12 < VAR_21) {
   if (VAR_11 >= VAR_7->max_op || VAR_12 >= VAR_7->max_tr)
    return -VAR_0;

   VAR_8[VAR_11].op_type =
    VAR_1;
   if (VAR_12 == 0)
    if (VAR_21 == 1)

     VAR_8[VAR_11].op_indicator =
      VAR_3;
    else

     VAR_8[VAR_11].op_indicator =
      VAR_5;
   else

    VAR_8[VAR_11].op_indicator =
     VAR_3;

   VAR_11++;

   if (VAR_12 == 0)

    VAR_9[VAR_12].lines = VAR_19;
   else if (VAR_12 == VAR_22 - 1)

    VAR_9[VAR_12].lines = VAR_20;
   else if (VAR_12 == VAR_21 - 1)

    VAR_9[VAR_12].lines = VAR_18;
   else

    VAR_9[VAR_12].lines = VAR_17;

   if (VAR_10) {
    VAR_9[VAR_12].cfg_set = VAR_15;
    VAR_15 = 1 - VAR_15;
   }
   VAR_12++;
  }
 }

 return 0;
}
