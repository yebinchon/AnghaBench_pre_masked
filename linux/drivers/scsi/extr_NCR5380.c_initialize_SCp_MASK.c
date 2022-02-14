
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Message; scalar_t__ Status; scalar_t__ this_residual; int * ptr; TYPE_2__* buffer; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct TYPE_5__ {scalar_t__ length; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 TYPE_2__* FUNC_1 (struct scsi_cmnd*) ;
 int * FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_3(struct scsi_cmnd *VAR_0)
{





 if (FUNC_0(VAR_0)) {
  VAR_0->SCp.buffer = FUNC_1(VAR_0);
  VAR_0->SCp.ptr = FUNC_2(VAR_0->SCp.buffer);
  VAR_0->SCp.this_residual = VAR_0->SCp.buffer->length;
 } else {
  VAR_0->SCp.buffer = ((void*)0);
  VAR_0->SCp.ptr = ((void*)0);
  VAR_0->SCp.this_residual = 0;
 }

 VAR_0->SCp.Status = 0;
 VAR_0->SCp.Message = 0;
}
