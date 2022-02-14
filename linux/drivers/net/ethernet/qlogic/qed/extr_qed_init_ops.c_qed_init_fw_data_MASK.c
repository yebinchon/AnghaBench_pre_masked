
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union init_op {int dummy; } init_op ;
typedef int u8 ;
typedef int u32 ;
struct qed_fw_data {int* arr_data; int init_ops_size; int * modes_tree_buf; union init_op* init_ops; struct fw_ver_info* fw_ver_info; } ;
struct qed_dev {struct qed_fw_data* fw_data; } ;
struct init_raw_op {int dummy; } ;
struct fw_ver_info {int dummy; } ;
struct bin_buffer_hdr {int offset; int length; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct qed_dev*,char*) ;
 int VAR_4 ;

int FUNC_1(struct qed_dev *VAR_5, const u8 *VAR_6)
{
 struct qed_fw_data *VAR_7 = VAR_5->fw_data;
 struct bin_buffer_hdr *VAR_8;
 u32 VAR_9, VAR_10;

 if (!VAR_6) {
  FUNC_0(VAR_5, "Invalid fw data\n");
  return -VAR_4;
 }


 VAR_8 = (struct bin_buffer_hdr *)VAR_6;

 VAR_9 = VAR_8[VAR_1].offset;
 VAR_7->fw_ver_info = (struct fw_ver_info *)(VAR_6 + VAR_9);

 VAR_9 = VAR_8[VAR_0].offset;
 VAR_7->init_ops = (union init_op *)(VAR_6 + VAR_9);

 VAR_9 = VAR_8[VAR_3].offset;
 VAR_7->arr_data = (u32 *)(VAR_6 + VAR_9);

 VAR_9 = VAR_8[VAR_2].offset;
 VAR_7->modes_tree_buf = (u8 *)(VAR_6 + VAR_9);
 VAR_10 = VAR_8[VAR_0].length;
 VAR_7->init_ops_size = VAR_10 / sizeof(struct init_raw_op);

 return 0;
}
