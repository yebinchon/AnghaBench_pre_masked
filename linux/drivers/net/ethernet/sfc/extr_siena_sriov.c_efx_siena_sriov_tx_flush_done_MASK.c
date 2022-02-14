
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {int flush_waitq; int txq_count; int txq_mask; } ;
struct efx_nic {int dummy; } ;
typedef int efx_qword_t ;


 unsigned int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (struct siena_vf*) ;
 scalar_t__ FUNC_3 (struct efx_nic*,unsigned int,struct siena_vf**,unsigned int*) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct efx_nic *VAR_1, efx_qword_t *VAR_2)
{
 struct siena_vf *VAR_3;
 unsigned VAR_4, VAR_5;

 VAR_4 = FUNC_0(*VAR_2, VAR_0);
 if (FUNC_3(VAR_1, VAR_4, &VAR_3, &VAR_5))
  return;

 if (!FUNC_4(VAR_5, VAR_3->txq_mask))
  return;

 FUNC_1(VAR_5, VAR_3->txq_mask);
 --VAR_3->txq_count;

 if (FUNC_2(VAR_3))
  FUNC_5(&VAR_3->flush_waitq);
}
