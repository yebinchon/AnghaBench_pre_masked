
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct efx_nic {scalar_t__ membase; } ;
typedef int efx_qword_t ;


 int FUNC_0 (int ,int ,int ,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct efx_nic*,scalar_t__,int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_4, unsigned VAR_5,
     u64 *VAR_6, unsigned VAR_7)
{
 efx_qword_t VAR_8;
 unsigned VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {
  FUNC_0(VAR_8,
         VAR_1, 0,
         VAR_0,
         VAR_6 ? VAR_6[VAR_9] >> 12 : 0,
         VAR_2, 0);
  FUNC_1(VAR_4, VAR_4->membase + VAR_3,
    &VAR_8, VAR_5 + VAR_9);
 }
}
