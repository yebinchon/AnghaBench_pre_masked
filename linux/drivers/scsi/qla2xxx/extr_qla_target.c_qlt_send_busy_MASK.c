
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct qla_qpair {struct scsi_qla_host* vha; } ;
struct atio_from_isp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qla_qpair*,struct atio_from_isp*,int ) ;
 int FUNC_1 (struct scsi_qla_host*,struct atio_from_isp*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct qla_qpair *VAR_1, struct atio_from_isp *VAR_2,
    uint16_t VAR_3)
{
 int VAR_4 = 0;
 struct scsi_qla_host *VAR_5 = VAR_1->vha;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == -VAR_0)
  FUNC_1(VAR_5, VAR_2, VAR_3, 1);
}
