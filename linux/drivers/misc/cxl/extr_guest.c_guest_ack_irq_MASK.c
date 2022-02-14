
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cxl_context {int process_token; TYPE_2__* afu; } ;
struct TYPE_4__ {TYPE_1__* guest; } ;
struct TYPE_3__ {int handle; } ;


 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct cxl_context *VAR_0, u64 VAR_1, u64 VAR_2)
{
 return FUNC_0(VAR_0->afu->guest->handle, VAR_0->process_token,
    VAR_1 >> 32, (VAR_2 != 0));
}
