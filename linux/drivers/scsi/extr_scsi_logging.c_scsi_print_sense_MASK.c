
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int sense_buffer; TYPE_1__* request; int device; } ;
struct TYPE_2__ {int tag; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd const*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

void FUNC_2(const struct scsi_cmnd *VAR_1)
{
 FUNC_1(VAR_1->device, FUNC_0(VAR_1), VAR_1->request->tag,
        VAR_1->sense_buffer, VAR_0);
}
