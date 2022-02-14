
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmci_ctx {int lock; int pending_datagrams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vmci_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct vmci_ctx*) ;

int FUNC_4(u32 VAR_2, u32 *VAR_3)
{
 struct vmci_ctx *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == ((void*)0))
  return VAR_0;

 FUNC_0(&VAR_4->lock);
 if (VAR_3)
  *VAR_3 = VAR_4->pending_datagrams;
 FUNC_1(&VAR_4->lock);
 FUNC_3(VAR_4);

 return VAR_1;
}
