
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct qla8xxx_minidump_entry_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_qla_host*,struct qla8xxx_minidump_entry_hdr*,int **) ;
 int FUNC_1 (struct scsi_qla_host*,struct qla8xxx_minidump_entry_hdr*,int **) ;

__attribute__((used)) static int FUNC_2(struct scsi_qla_host *VAR_1,
    struct qla8xxx_minidump_entry_hdr *VAR_2,
    uint32_t **VAR_3)
{
 uint32_t *VAR_4 = *VAR_3;
 int VAR_5 = VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4);
 if (VAR_5 != VAR_0)
  VAR_5 = FUNC_0(VAR_1, VAR_2,
         &VAR_4);
 *VAR_3 = VAR_4;
 return VAR_5;
}
