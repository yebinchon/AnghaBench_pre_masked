
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int dummy; } ;


 int FUNC_0 (struct xlgmac_pdata*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;
 int FUNC_2 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_3(struct xlgmac_pdata *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto err_alloc;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto err_alloc;

 return 0;

err_alloc:
 FUNC_2(VAR_0);

 return VAR_1;
}
