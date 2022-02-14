
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct efx_nic*,int ,int ,int *,int ,int) ;
 int FUNC_4 (struct efx_nic*,int ,int ,int ,int *,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_7)
{
 FUNC_1(VAR_6, VAR_3);
 int VAR_8;







 FUNC_0(VAR_4 != 0);
 FUNC_2(VAR_6, VAR_5,
         VAR_2);
 VAR_8 = FUNC_4(VAR_7, VAR_1, VAR_6, VAR_3,
    ((void*)0), 0, ((void*)0));
 if (VAR_8 == -VAR_0)
  VAR_8 = 0;
 if (VAR_8)
  FUNC_3(VAR_7, VAR_1, VAR_3,
           ((void*)0), 0, VAR_8);
 return VAR_8;
}
