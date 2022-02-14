
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_8__ {scalar_t__ init_tag_value; scalar_t__ tag_value_stride; } ;
struct TYPE_7__ {scalar_t__ read_addr_cnt; scalar_t__ read_addr_stride; } ;
struct TYPE_6__ {scalar_t__ write_value; } ;
struct qla82xx_md_entry_cache {scalar_t__ op_count; scalar_t__ read_addr; scalar_t__ control_addr; scalar_t__ tag_reg_addr; TYPE_3__ addr_ctrl; TYPE_2__ read_ctrl; TYPE_1__ cache_ctrl; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
typedef int qla82xx_md_entry_hdr_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(scsi_qla_host_t *VAR_0,
 qla82xx_md_entry_hdr_t *VAR_1, uint32_t **VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_0->hw;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14;
 struct qla82xx_md_entry_cache *VAR_15;
 uint32_t *VAR_16 = *VAR_2;

 VAR_15 = (struct qla82xx_md_entry_cache *)VAR_1;
 VAR_10 = VAR_15->op_count;
 VAR_5 = VAR_15->read_addr;
 VAR_6 = VAR_15->control_addr;
 VAR_14 = VAR_15->cache_ctrl.write_value;

 VAR_7 = VAR_15->tag_reg_addr;
 VAR_11 = VAR_15->addr_ctrl.init_tag_value;
 VAR_12 = VAR_15->read_ctrl.read_addr_cnt;

 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  FUNC_1(VAR_3, VAR_7, VAR_11, 1);
  FUNC_1(VAR_3, VAR_6, VAR_14, 1);
  VAR_4 = VAR_5;
  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
   VAR_13 = FUNC_1(VAR_3, VAR_4, 0, 0);
   *VAR_16++ = FUNC_0(VAR_13);
   VAR_4 += VAR_15->read_ctrl.read_addr_stride;
  }
  VAR_11 += VAR_15->addr_ctrl.tag_value_stride;
 }
 *VAR_2 = VAR_16;
}
