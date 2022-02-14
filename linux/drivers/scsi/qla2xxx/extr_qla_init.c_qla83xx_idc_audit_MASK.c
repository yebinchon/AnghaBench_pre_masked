
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int idc_audit_ts; int const portnum; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int,char*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void
FUNC_3(scsi_qla_host_t *VAR_3, int VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_3->hw;
 uint32_t VAR_6 = 0, VAR_7 = 0;

 switch (VAR_4) {
 case 128:
  VAR_5->idc_audit_ts = (FUNC_0(VAR_1) / 1000);
  VAR_6 = (VAR_5->portnum) |
      (128 << 7) | (VAR_5->idc_audit_ts << 8);
  FUNC_2(VAR_3, VAR_0, VAR_6);
  break;

 case 129:
  VAR_7 = ((FUNC_0(VAR_1) -
      FUNC_0(VAR_5->idc_audit_ts)) / 1000);
  VAR_6 = (VAR_5->portnum) |
      (129 << 7) | (VAR_7 << 8);
  FUNC_2(VAR_3, VAR_0, VAR_6);
  break;

 default:
  FUNC_1(VAR_2, VAR_3, 0xb078,
      "Invalid audit type specified.\n");
  break;
 }
}
