
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_self_tests {int registers; } ;
struct efx_nic {int dummy; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct efx_nic*,int ,int ) ;
 int FUNC_2 (struct efx_nic*,int) ;
 int FUNC_3 (struct efx_nic*,int) ;
 int FUNC_4 (struct efx_nic*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_2, struct efx_self_tests *VAR_3)
{
 enum reset_type VAR_4 = VAR_0;
 int VAR_5, VAR_6;

 FUNC_3(VAR_2, VAR_4);




 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (VAR_5)
  goto out;

 VAR_3->registers =
  FUNC_1(VAR_2, VAR_1,
      FUNC_0(VAR_1))
  ? -1 : 1;

 VAR_5 = FUNC_2(VAR_2, VAR_4);
out:
 VAR_6 = FUNC_4(VAR_2, VAR_4, VAR_5 == 0);
 return VAR_5 ? VAR_5 : VAR_6;
}
