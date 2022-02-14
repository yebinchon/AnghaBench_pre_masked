
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {scalar_t__ free_bss_buf; } ;


 int FUNC_0 (struct mlme_priv*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct mlme_priv *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0);
  if (VAR_0->free_bss_buf) {
   FUNC_1(VAR_0->free_bss_buf);
  }
 }
}
