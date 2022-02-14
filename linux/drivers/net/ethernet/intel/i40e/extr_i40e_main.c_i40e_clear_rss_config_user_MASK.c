
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int * rss_lut_user; int * rss_hkey_user; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->rss_hkey_user);
 VAR_0->rss_hkey_user = ((void*)0);

 FUNC_0(VAR_0->rss_lut_user);
 VAR_0->rss_lut_user = ((void*)0);
}
