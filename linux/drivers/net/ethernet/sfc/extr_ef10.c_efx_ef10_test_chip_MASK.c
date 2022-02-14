
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_self_tests {int memory; int registers; } ;
struct efx_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct efx_nic*,int ) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 int FUNC_2 (struct efx_nic*,int ,int *,int ,int *,int ,int *) ;
 int FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (struct efx_nic*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct efx_nic *VAR_5, struct efx_self_tests *VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_3(VAR_5, VAR_4);

 VAR_7 = FUNC_2(VAR_5, VAR_1,
     ((void*)0), 0, ((void*)0), 0, ((void*)0));
 if (VAR_7 != 0)
  goto out;

 VAR_6->memory = FUNC_0(VAR_5, VAR_2) ? -1 : 1;
 VAR_6->registers = FUNC_0(VAR_5, VAR_3) ? -1 : 1;

 VAR_7 = FUNC_1(VAR_5, VAR_4);

out:
 if (VAR_7 == -VAR_0)
  VAR_7 = 0;
 VAR_8 = FUNC_4(VAR_5, VAR_4, VAR_7 == 0);
 return VAR_7 ? VAR_7 : VAR_8;
}
