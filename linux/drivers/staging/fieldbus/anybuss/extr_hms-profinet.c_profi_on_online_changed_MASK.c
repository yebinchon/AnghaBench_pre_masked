
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct profi_priv {int fbdev; } ;
struct anybuss_client {int dummy; } ;


 struct profi_priv* FUNC_0 (struct anybuss_client*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct anybuss_client *VAR_0, bool VAR_1)
{
 struct profi_priv *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->fbdev, VAR_1);
}
