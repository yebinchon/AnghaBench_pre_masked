
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_cu_creds {scalar_t__ new; int old; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ovl_cu_creds *VAR_0)
{
 if (VAR_0->new) {
  FUNC_1(VAR_0->old);
  FUNC_0(VAR_0->new);
 }
}
