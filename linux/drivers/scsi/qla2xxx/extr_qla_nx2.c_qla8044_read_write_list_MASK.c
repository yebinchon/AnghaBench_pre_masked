
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct qla8044_reset_entry_hdr {scalar_t__ count; scalar_t__ delay; } ;
struct qla8044_entry {int arg2; int arg1; } ;


 int FUNC_0 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct scsi_qla_host *VAR_0,
 struct qla8044_reset_entry_hdr *VAR_1)
{
 struct qla8044_entry *VAR_2;
 uint32_t VAR_3;

 VAR_2 = (struct qla8044_entry *)((char *)VAR_1 +
     sizeof(struct qla8044_reset_entry_hdr));

 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++, VAR_2++) {
  FUNC_0(VAR_0, VAR_2->arg1,
      VAR_2->arg2);
  if (VAR_1->delay)
   FUNC_1((uint32_t)(VAR_1->delay));
 }
}
