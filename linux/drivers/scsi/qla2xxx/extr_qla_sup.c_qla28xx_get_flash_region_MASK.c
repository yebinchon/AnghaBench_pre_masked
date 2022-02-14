
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {scalar_t__ flt; } ;
struct qla_flt_region {scalar_t__ start; } ;
struct qla_flt_header {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct qla_flt_region*,int) ;

__attribute__((used)) static int
FUNC_2(struct scsi_qla_host *VAR_2, uint32_t VAR_3,
    struct qla_flt_region *VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_2->hw;
 struct qla_flt_header *VAR_6;
 struct qla_flt_region *VAR_7;
 uint16_t VAR_8;
 int VAR_9 = VAR_0;

 if (!VAR_5->flt)
  return VAR_0;

 VAR_6 = (struct qla_flt_header *)VAR_5->flt;
 VAR_7 = (struct qla_flt_region *)&VAR_6[1];
 VAR_8 = FUNC_0(VAR_6->length) / sizeof(struct qla_flt_region);

 for (; VAR_8; VAR_8--, VAR_7++) {
  if (VAR_7->start == VAR_3) {
   FUNC_1((uint8_t *)VAR_4, VAR_7,
       sizeof(struct qla_flt_region));
   VAR_9 = VAR_1;
   break;
  }
 }

 return VAR_9;
}
