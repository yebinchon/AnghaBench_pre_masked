
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int dummy; } ;
struct qla82xx_md_entry_rdrom {int read_addr; int read_data_size; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
typedef int qla82xx_md_entry_hdr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qla_hw_data*,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_2(scsi_qla_host_t *VAR_2,
 qla82xx_md_entry_hdr_t *VAR_3, uint32_t **VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_2->hw;
 uint32_t VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9;
 struct qla82xx_md_entry_rdrom *VAR_10;
 uint32_t *VAR_11 = *VAR_4;

 VAR_10 = (struct qla82xx_md_entry_rdrom *)VAR_3;
 VAR_6 = VAR_10->read_addr;
 VAR_9 = VAR_10->read_data_size/sizeof(uint32_t);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  FUNC_1(VAR_5, VAR_1,
      (VAR_6 & 0xFFFF0000), 1);
  VAR_7 = FUNC_1(VAR_5,
      VAR_0 +
      (VAR_6 & 0x0000FFFF), 0, 0);
  *VAR_11++ = FUNC_0(VAR_7);
  VAR_6 += sizeof(uint32_t);
 }
 *VAR_4 = VAR_11;
}
