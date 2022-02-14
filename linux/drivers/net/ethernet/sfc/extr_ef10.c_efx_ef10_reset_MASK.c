
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_4, enum reset_type VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4, VAR_5);




 if (VAR_5 == VAR_3 && VAR_6 == -VAR_0)
  VAR_6 = 0;







 if ((VAR_5 == VAR_1 ||
      VAR_5 == VAR_2) && !VAR_6)
  FUNC_0(VAR_4);
 return VAR_6;
}
