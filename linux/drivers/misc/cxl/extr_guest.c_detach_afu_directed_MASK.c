
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cxl_context {int process_token; TYPE_2__* afu; int pe_inserted; } ;
struct TYPE_4__ {TYPE_1__* guest; } ;
struct TYPE_3__ {int handle; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct cxl_context *VAR_0)
{
 if (!VAR_0->pe_inserted)
  return 0;
 if (FUNC_0(VAR_0->afu->guest->handle, VAR_0->process_token))
  return -1;
 return 0;
}
