
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union fotg210_shadow {struct fotg210_itd* itd; scalar_t__ ptr; } ;
struct fotg210_itd {unsigned int frame; int itd_dma; scalar_t__ hw_next; union fotg210_shadow itd_next; } ;
struct fotg210_hcd {scalar_t__* periodic; union fotg210_shadow* pshadow; } ;
typedef scalar_t__ __hc32 ;


 scalar_t__ FUNC_0 (struct fotg210_hcd*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct fotg210_hcd*,int) ;
 union fotg210_shadow* FUNC_2 (struct fotg210_hcd*,union fotg210_shadow*,scalar_t__) ;
 scalar_t__* FUNC_3 (struct fotg210_hcd*,union fotg210_shadow*,scalar_t__) ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(struct fotg210_hcd *VAR_2, unsigned VAR_3,
  struct fotg210_itd *VAR_4)
{
 union fotg210_shadow *VAR_5 = &VAR_2->pshadow[VAR_3];
 __hc32 *VAR_6 = &VAR_2->periodic[VAR_3];
 union fotg210_shadow VAR_7 = *VAR_5;
 __hc32 VAR_8 = 0;


 while (VAR_7.ptr) {
  VAR_8 = FUNC_0(VAR_2, *VAR_6);
  if (VAR_8 == FUNC_1(VAR_2, VAR_1))
   break;
  VAR_5 = FUNC_2(VAR_2, VAR_5, VAR_8);
  VAR_6 = FUNC_3(VAR_2, &VAR_7, VAR_8);
  VAR_7 = *VAR_5;
 }

 VAR_4->itd_next = VAR_7;
 VAR_4->hw_next = *VAR_6;
 VAR_5->itd = VAR_4;
 VAR_4->frame = VAR_3;
 FUNC_4();
 *VAR_6 = FUNC_1(VAR_2, VAR_4->itd_dma | VAR_0);
}
