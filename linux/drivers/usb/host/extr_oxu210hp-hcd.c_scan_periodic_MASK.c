
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union ehci_shadow {int * ptr; TYPE_2__* qh; } ;
struct oxu_hcd {int periodic_size; unsigned int next_uframe; int* periodic; TYPE_1__* regs; union ehci_shadow* pshadow; } ;
typedef int __le32 ;
struct TYPE_10__ {int state; } ;
struct TYPE_9__ {int hw_next; int qtd_list; union ehci_shadow qh_next; } ;
struct TYPE_8__ {int frame_index; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

 int FUNC_2 (struct oxu_hcd*,TYPE_2__*) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (struct oxu_hcd*,char*,int,unsigned int,int *) ;
 TYPE_6__* FUNC_5 (struct oxu_hcd*) ;
 unsigned int FUNC_6 (struct oxu_hcd*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 unsigned int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (unsigned int) ;

__attribute__((used)) static void FUNC_11(struct oxu_hcd *VAR_0)
{
 unsigned VAR_1, VAR_2, VAR_3, VAR_4;
 unsigned VAR_5;

 VAR_4 = VAR_0->periodic_size << 3;






 VAR_3 = VAR_0->next_uframe;
 if (FUNC_0(FUNC_5(VAR_0)->state))
  VAR_2 = FUNC_9(&VAR_0->regs->frame_index);
 else
  VAR_2 = VAR_3 + VAR_4 - 1;
 VAR_2 %= VAR_4;

 for (;;) {
  union ehci_shadow VAR_6, *VAR_7;
  __le32 VAR_8, *VAR_9;


  VAR_1 = VAR_3 >> 3;
  if (VAR_1 != (VAR_2 >> 3)) {

   VAR_3 |= 0x07;
  }

restart:

  VAR_7 = &VAR_0->pshadow[VAR_1];
  VAR_9 = &VAR_0->periodic[VAR_1];
  VAR_6.ptr = VAR_7->ptr;
  VAR_8 = FUNC_1(*VAR_9);
  VAR_5 = 0;

  while (VAR_6.ptr != ((void*)0)) {
   union ehci_shadow VAR_10;

   switch (VAR_8) {
   case 128:

    VAR_10.qh = FUNC_7(VAR_6.qh);
    VAR_8 = FUNC_1(VAR_6.qh->hw_next);
    VAR_6 = VAR_6.qh->qh_next;
    VAR_5 = FUNC_6(VAR_0, VAR_10.qh);
    if (FUNC_10(FUNC_3(&VAR_10.qh->qtd_list)))
     FUNC_2(VAR_0, VAR_10.qh);
    FUNC_8(VAR_10.qh);
    break;
   default:
    FUNC_4(VAR_0, "corrupt type %d frame %d shadow %p\n",
     VAR_8, VAR_1, VAR_6.ptr);
    VAR_6.ptr = ((void*)0);
   }


   if (FUNC_10(VAR_5))
    goto restart;
  }
  if (VAR_3 == VAR_2) {
   unsigned VAR_11;

   if (!FUNC_0(FUNC_5(VAR_0)->state))
    break;
   VAR_0->next_uframe = VAR_3;
   VAR_11 = FUNC_9(&VAR_0->regs->frame_index) % VAR_4;
   if (VAR_3 == VAR_11)
    break;


   VAR_2 = VAR_11;
  } else {
   VAR_3++;
   VAR_3 %= VAR_4;
  }
 }
}
