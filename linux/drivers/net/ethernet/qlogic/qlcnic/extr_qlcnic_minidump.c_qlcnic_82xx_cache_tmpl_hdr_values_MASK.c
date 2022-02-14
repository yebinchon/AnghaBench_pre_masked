
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_fw_dump {int use_pex_dma; int cap_mask; int offset; int num_entries; int version; int tmpl_hdr_size; struct qlcnic_82xx_dump_template_hdr* tmpl_hdr; } ;
struct qlcnic_82xx_dump_template_hdr {int capabilities; int cap_mask; int drv_cap_mask; int offset; int num_entries; int version; int size; } ;


 int VAR_0 ;

void FUNC_0(struct qlcnic_fw_dump *VAR_1)
{
 struct qlcnic_82xx_dump_template_hdr *VAR_2;

 VAR_2 = VAR_1->tmpl_hdr;
 VAR_1->tmpl_hdr_size = VAR_2->size;
 VAR_1->version = VAR_2->version;
 VAR_1->num_entries = VAR_2->num_entries;
 VAR_1->offset = VAR_2->offset;

 VAR_2->drv_cap_mask = VAR_2->cap_mask;
 VAR_1->cap_mask = VAR_2->cap_mask;

 VAR_1->use_pex_dma = (VAR_2->capabilities & VAR_0) ? 1 : 0;
}
