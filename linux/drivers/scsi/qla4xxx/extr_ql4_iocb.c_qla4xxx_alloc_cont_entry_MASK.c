
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct scsi_qla_host {int request_in; scalar_t__ request_ptr; } ;
struct TYPE_2__ {int entryCount; scalar_t__ systemDefined; int entryType; } ;
struct continuation_t1_entry {TYPE_1__ hdr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_qla_host*) ;

__attribute__((used)) static struct continuation_t1_entry *
FUNC_2(struct scsi_qla_host *VAR_1)
{
 struct continuation_t1_entry *VAR_2;

 VAR_2 = (struct continuation_t1_entry *)VAR_1->request_ptr;

 FUNC_1(VAR_1);


 VAR_2->hdr.entryType = VAR_0;
 VAR_2->hdr.entryCount = 1;
 VAR_2->hdr.systemDefined = (uint8_t) FUNC_0(VAR_1->request_in);

 return VAR_2;
}
