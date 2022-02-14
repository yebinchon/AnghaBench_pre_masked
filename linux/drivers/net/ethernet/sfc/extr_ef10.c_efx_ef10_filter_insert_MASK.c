
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int filter_sem; } ;
struct efx_filter_spec {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct efx_nic*,struct efx_filter_spec*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static s32 FUNC_3(struct efx_nic *VAR_0,
      struct efx_filter_spec *VAR_1,
      bool VAR_2)
{
 s32 VAR_3;

 FUNC_0(&VAR_0->filter_sem);
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->filter_sem);

 return VAR_3;
}
