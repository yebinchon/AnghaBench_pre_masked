
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct efx_channel {int eventq_mask; TYPE_1__ eventq; int efx; } ;
typedef int efx_qword_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct efx_channel *VAR_1)
{
 return FUNC_0(VAR_1->efx, &VAR_1->eventq.buf,
        (VAR_1->eventq_mask + 1) *
        sizeof(efx_qword_t),
        VAR_0);
}
