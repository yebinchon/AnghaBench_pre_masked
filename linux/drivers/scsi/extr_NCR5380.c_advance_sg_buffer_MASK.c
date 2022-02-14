
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct scatterlist* buffer; scalar_t__ this_residual; int ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct scatterlist {scalar_t__ length; } ;


 int FUNC_0 (struct scatterlist*) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static inline void FUNC_3(struct scsi_cmnd *VAR_0)
{
 struct scatterlist *VAR_1 = VAR_0->SCp.buffer;

 if (!VAR_0->SCp.this_residual && VAR_1 && !FUNC_0(VAR_1)) {
  VAR_0->SCp.buffer = FUNC_1(VAR_1);
  VAR_0->SCp.ptr = FUNC_2(VAR_0->SCp.buffer);
  VAR_0->SCp.this_residual = VAR_0->SCp.buffer->length;
 }
}
