
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union fotg210_shadow {void* ptr; } ;
struct fotg210_hcd {int * periodic; union fotg210_shadow* pshadow; } ;
typedef int __hc32 ;


 int FUNC_0 (struct fotg210_hcd*,int ) ;
 union fotg210_shadow* FUNC_1 (struct fotg210_hcd*,union fotg210_shadow*,int ) ;
 int * FUNC_2 (struct fotg210_hcd*,union fotg210_shadow*,int ) ;

__attribute__((used)) static void FUNC_3(struct fotg210_hcd *VAR_0, unsigned VAR_1,
  void *VAR_2)
{
 union fotg210_shadow *VAR_3 = &VAR_0->pshadow[VAR_1];
 __hc32 *VAR_4 = &VAR_0->periodic[VAR_1];
 union fotg210_shadow VAR_5 = *VAR_3;


 while (VAR_5.ptr && VAR_5.ptr != VAR_2) {
  VAR_3 = FUNC_1(VAR_0, VAR_3,
    FUNC_0(VAR_0, *VAR_4));
  VAR_4 = FUNC_2(VAR_0, &VAR_5,
    FUNC_0(VAR_0, *VAR_4));
  VAR_5 = *VAR_3;
 }

 if (!VAR_5.ptr)
  return;




 *VAR_3 = *FUNC_1(VAR_0, &VAR_5,
   FUNC_0(VAR_0, *VAR_4));

 *VAR_4 = *FUNC_2(VAR_0, &VAR_5,
   FUNC_0(VAR_0, *VAR_4));
}
