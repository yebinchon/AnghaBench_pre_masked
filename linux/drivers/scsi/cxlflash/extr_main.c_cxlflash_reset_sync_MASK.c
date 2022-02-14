
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxlflash_cfg {scalar_t__ async_reset_cookie; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cxlflash_cfg *VAR_0)
{
 if (VAR_0->async_reset_cookie == 0)
  return;


 FUNC_0(VAR_0->async_reset_cookie + 1);
 VAR_0->async_reset_cookie = 0;
}
