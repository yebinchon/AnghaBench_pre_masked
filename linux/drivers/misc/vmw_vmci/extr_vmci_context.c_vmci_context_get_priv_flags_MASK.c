
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmci_ctx {int priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmci_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct vmci_ctx*) ;
 scalar_t__ FUNC_2 () ;

u32 FUNC_3(u32 VAR_2)
{
 if (FUNC_2()) {
  u32 VAR_3;
  struct vmci_ctx *VAR_4;

  VAR_4 = FUNC_0(VAR_2);
  if (!VAR_4)
   return VAR_0;

  VAR_3 = VAR_4->priv_flags;
  FUNC_1(VAR_4);
  return VAR_3;
 }
 return VAR_1;
}
