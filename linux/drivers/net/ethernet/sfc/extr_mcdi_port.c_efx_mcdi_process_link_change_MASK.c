
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct efx_nic {int link_state; } ;
typedef int efx_qword_t ;


 size_t FUNC_0 (size_t*) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct efx_nic*) ;
 size_t* VAR_4 ;
 int FUNC_4 (struct efx_nic*,size_t) ;
 int FUNC_5 (struct efx_nic*,int *,size_t,size_t,size_t) ;

void FUNC_6(struct efx_nic *VAR_5, efx_qword_t *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_1(*VAR_6, VAR_3);
 FUNC_2(VAR_9 >= FUNC_0(VAR_4));
 VAR_9 = VAR_4[VAR_9];

 VAR_7 = FUNC_1(*VAR_6, VAR_1);
 VAR_8 = FUNC_1(*VAR_6, VAR_0);
 VAR_10 = FUNC_1(*VAR_6, VAR_2);





 FUNC_5(VAR_5, &VAR_5->link_state, VAR_9, VAR_7, VAR_8);

 FUNC_4(VAR_5, VAR_10);

 FUNC_3(VAR_5);
}
