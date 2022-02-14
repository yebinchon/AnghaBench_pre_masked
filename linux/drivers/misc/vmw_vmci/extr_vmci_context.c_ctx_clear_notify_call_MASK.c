
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_ctx {scalar_t__ pending_datagrams; int pending_doorbell_array; } ;


 int FUNC_0 (struct vmci_ctx*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vmci_ctx *VAR_0)
{
 if (VAR_0->pending_datagrams == 0 &&
     FUNC_1(VAR_0->pending_doorbell_array) == 0)
  FUNC_0(VAR_0);
}
