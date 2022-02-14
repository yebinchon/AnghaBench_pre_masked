
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct qla_hw_data {int md_template_size; scalar_t__ md_tmplt_hdr; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;



int
FUNC_0(scsi_qla_host_t *VAR_0)
{
 struct qla_hw_data *VAR_1 = VAR_0->hw;
 uint64_t VAR_2 = 0;
 uint32_t *VAR_3 = (uint32_t *)VAR_1->md_tmplt_hdr;
 int VAR_4 = VAR_1->md_template_size/sizeof(uint32_t);

 while (VAR_4-- > 0)
  VAR_2 += *VAR_3++;
 while (VAR_2 >> 32)
  VAR_2 = (VAR_2 & 0xFFFFFFFF) + (VAR_2 >> 32);
 return ~VAR_2;
}
