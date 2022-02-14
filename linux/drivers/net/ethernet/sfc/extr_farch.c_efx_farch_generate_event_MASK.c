
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct efx_nic {int dummy; } ;
struct TYPE_6__ {scalar_t__* u32; } ;
typedef TYPE_1__ efx_qword_t ;
struct TYPE_7__ {scalar_t__* u32; } ;
typedef TYPE_2__ efx_oword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__,int ,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct efx_nic*,TYPE_2__*,int ) ;

void FUNC_3(struct efx_nic *VAR_4, unsigned int VAR_5,
         efx_qword_t *VAR_6)
{
 efx_oword_t VAR_7;

 FUNC_0(VAR_0 != 0 ||
       VAR_1 != 64);
 VAR_7.u32[0] = VAR_6->u32[0];
 VAR_7.u32[1] = VAR_6->u32[1];
 VAR_7.u32[2] = 0;
 VAR_7.u32[3] = 0;
 FUNC_1(VAR_7, VAR_2, VAR_5);
 FUNC_2(VAR_4, &VAR_7, VAR_3);
}
