
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int dummy; } ;
struct ef4_channel {int eventq_mask; int eventq; struct ef4_nic* efx; } ;
typedef int ef4_qword_t ;


 int FUNC_0 (struct ef4_nic*,int *,unsigned int) ;

int FUNC_1(struct ef4_channel *VAR_0)
{
 struct ef4_nic *VAR_1 = VAR_0->efx;
 unsigned VAR_2;

 VAR_2 = VAR_0->eventq_mask + 1;
 return FUNC_0(VAR_1, &VAR_0->eventq,
     VAR_2 * sizeof(ef4_qword_t));
}
