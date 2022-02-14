
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_6__ {scalar_t__ queue_id_stride; } ;
struct TYPE_5__ {scalar_t__ read_addr_cnt; scalar_t__ read_addr_stride; } ;
struct qla82xx_md_entry_queue {scalar_t__ select_addr; scalar_t__ op_count; scalar_t__ read_addr; TYPE_2__ q_strd; TYPE_1__ rd_strd; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
typedef int qla82xx_md_entry_hdr_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(scsi_qla_host_t *VAR_0,
 qla82xx_md_entry_hdr_t *VAR_1, uint32_t **VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_0->hw;
 uint32_t VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 uint32_t VAR_10, VAR_11, VAR_12;
 struct qla82xx_md_entry_queue *VAR_13;
 uint32_t *VAR_14 = *VAR_2;

 VAR_13 = (struct qla82xx_md_entry_queue *)VAR_1;
 VAR_4 = VAR_13->select_addr;
 VAR_8 = VAR_13->rd_strd.read_addr_cnt;
 VAR_6 = VAR_13->rd_strd.read_addr_stride;
 VAR_12 = VAR_13->op_count;

 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  FUNC_1(VAR_3, VAR_4, VAR_9, 1);
  VAR_5 = VAR_13->read_addr;
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   VAR_7 = FUNC_1(VAR_3, VAR_5, 0, 0);
   *VAR_14++ = FUNC_0(VAR_7);
   VAR_5 += VAR_6;
  }
  VAR_9 += VAR_13->q_strd.queue_id_stride;
 }
 *VAR_2 = VAR_14;
}
