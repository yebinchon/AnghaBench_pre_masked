
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union fotg210_shadow {int * ptr; TYPE_1__* itd; } ;
struct fotg210_hcd {scalar_t__ isoc_count; int * periodic; union fotg210_shadow* pshadow; } ;
typedef int __hc32 ;
struct TYPE_2__ {int* hw_transaction; int hw_next; union fotg210_shadow itd_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct fotg210_hcd*) ;
 int FUNC_1 (struct fotg210_hcd*,int ) ;



 int FUNC_2 (struct fotg210_hcd*,char*,int ,unsigned int,int *) ;
 int FUNC_3 (struct fotg210_hcd*,int ) ;
 int FUNC_4 (struct fotg210_hcd*,TYPE_1__*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static inline int FUNC_8(struct fotg210_hcd *VAR_1, unsigned VAR_2,
  unsigned VAR_3, bool VAR_4)
{
 unsigned VAR_5;
 bool VAR_6;
 union fotg210_shadow VAR_7, *VAR_8;
 __hc32 VAR_9, *VAR_10;


 VAR_8 = &VAR_1->pshadow[VAR_2];
 VAR_10 = &VAR_1->periodic[VAR_2];
 VAR_7.ptr = VAR_8->ptr;
 VAR_9 = FUNC_1(VAR_1, *VAR_10);
 VAR_6 = 0;

 while (VAR_7.ptr) {
  switch (FUNC_3(VAR_1, VAR_9)) {
  case 129:





   if (VAR_2 == VAR_3 && VAR_4) {
    FUNC_5();
    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
     if (VAR_7.itd->hw_transaction[VAR_5] &
       FUNC_0(VAR_1))
      break;
    }
    if (VAR_5 < 8) {
     VAR_8 = &VAR_7.itd->itd_next;
     VAR_10 = &VAR_7.itd->hw_next;
     VAR_9 = FUNC_1(VAR_1,
       VAR_7.itd->hw_next);
     VAR_7 = *VAR_8;
     break;
    }
   }






   *VAR_8 = VAR_7.itd->itd_next;
   *VAR_10 = VAR_7.itd->hw_next;
   VAR_9 = FUNC_1(VAR_1, VAR_7.itd->hw_next);
   FUNC_7();
   VAR_6 = FUNC_4(VAR_1, VAR_7.itd);
   VAR_7 = *VAR_8;
   break;
  default:
   FUNC_2(VAR_1, "corrupt type %d frame %d shadow %p\n",
     VAR_9, VAR_2, VAR_7.ptr);

  case 128:
  case 130:

   VAR_7.ptr = ((void*)0);
   break;
  }


  if (FUNC_6(VAR_6 && VAR_1->isoc_count > 0))
   return -VAR_0;
 }
 return 0;
}
