
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vmci_ctx {TYPE_1__* cred; } ;
typedef int kuid_t ;
struct TYPE_2__ {int uid; } ;


 int FUNC_0 (int ,int ) ;
 struct vmci_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct vmci_ctx*) ;
 scalar_t__ FUNC_3 () ;

bool FUNC_4(u32 VAR_0, kuid_t VAR_1)
{
 bool VAR_2 = 0;

 if (FUNC_3()) {
  struct vmci_ctx *VAR_3 = FUNC_1(VAR_0);
  if (VAR_3) {
   if (VAR_3->cred)
    VAR_2 = FUNC_0(VAR_3->cred->uid, VAR_1);
   FUNC_2(VAR_3);
  }
 }

 return VAR_2;
}
