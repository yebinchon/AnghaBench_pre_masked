
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ainf_volume {int data_pad; int last_data_size; int used_ebs; int vol_type; int compat; int leb_count; int highest_lnum; int vol_id; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(const struct ubi_ainf_volume *VAR_0)
{
 FUNC_0("Volume attaching information dump:\n");
 FUNC_0("\tvol_id         %d\n", VAR_0->vol_id);
 FUNC_0("\thighest_lnum   %d\n", VAR_0->highest_lnum);
 FUNC_0("\tleb_count      %d\n", VAR_0->leb_count);
 FUNC_0("\tcompat         %d\n", VAR_0->compat);
 FUNC_0("\tvol_type       %d\n", VAR_0->vol_type);
 FUNC_0("\tused_ebs       %d\n", VAR_0->used_ebs);
 FUNC_0("\tlast_data_size %d\n", VAR_0->last_data_size);
 FUNC_0("\tdata_pad       %d\n", VAR_0->data_pad);
}
