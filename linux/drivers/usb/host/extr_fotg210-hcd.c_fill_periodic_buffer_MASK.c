
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union fotg210_shadow {TYPE_2__* itd; TYPE_1__* fstn; TYPE_3__* qh; scalar_t__ ptr; } ;
struct usb_hcd {int dummy; } ;
struct fotg210_qh_hw {int hw_next; int hw_info2; } ;
struct fotg210_hcd {unsigned int periodic_size; int lock; int * periodic; union fotg210_shadow* pshadow; } ;
struct debug_buffer {char* output_buf; unsigned int alloc_size; int bus; } ;
typedef unsigned int ssize_t ;
typedef int __hc32 ;
struct TYPE_6__ {union fotg210_shadow qh_next; int period; struct fotg210_qh_hw* hw; } ;
struct TYPE_5__ {union fotg210_shadow itd_next; int hw_next; } ;
struct TYPE_4__ {union fotg210_shadow fstn_next; int hw_next; int hw_prev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fotg210_hcd*,int ) ;



 struct usb_hcd* FUNC_1 (int ) ;
 int FUNC_2 (struct fotg210_hcd*,int ) ;
 int FUNC_3 (struct fotg210_hcd*,int *) ;
 struct fotg210_hcd* FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (union fotg210_shadow*) ;
 union fotg210_shadow* FUNC_6 (unsigned int,int,int ) ;
 scalar_t__ FUNC_7 (int) ;
 unsigned int FUNC_8 (char*,struct fotg210_hcd*,struct fotg210_qh_hw*,TYPE_3__*,unsigned int) ;
 unsigned int FUNC_9 (char*,unsigned int,char*,...) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_12(struct debug_buffer *VAR_4)
{
 struct usb_hcd *VAR_5;
 struct fotg210_hcd *VAR_6;
 unsigned long VAR_7;
 union fotg210_shadow VAR_8, *VAR_9;
 unsigned VAR_10, VAR_11, VAR_12;
 char *VAR_13;
 unsigned VAR_14;
 __hc32 VAR_15;

 VAR_9 = FUNC_6(VAR_0, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return 0;

 VAR_12 = 0;

 VAR_5 = FUNC_1(VAR_4->bus);
 VAR_6 = FUNC_4(VAR_5);
 VAR_13 = VAR_4->output_buf;
 VAR_11 = VAR_4->alloc_size;

 VAR_10 = FUNC_9(VAR_13, VAR_11, "size = %d\n", VAR_6->periodic_size);
 VAR_11 -= VAR_10;
 VAR_13 += VAR_10;




 FUNC_10(&VAR_6->lock, VAR_7);
 for (VAR_14 = 0; VAR_14 < VAR_6->periodic_size; VAR_14++) {
  VAR_8 = VAR_6->pshadow[VAR_14];
  if (FUNC_7(!VAR_8.ptr))
   continue;

  VAR_15 = FUNC_0(VAR_6, VAR_6->periodic[VAR_14]);

  VAR_10 = FUNC_9(VAR_13, VAR_11, "%4d: ", VAR_14);
  VAR_11 -= VAR_10;
  VAR_13 += VAR_10;

  do {
   struct fotg210_qh_hw *VAR_16;

   switch (FUNC_2(VAR_6, VAR_15)) {
   case 128:
    VAR_16 = VAR_8.qh->hw;
    VAR_10 = FUNC_9(VAR_13, VAR_11, " qh%d-%04x/%p",
      VAR_8.qh->period,
      FUNC_3(VAR_6,
       &VAR_16->hw_info2)

       & (VAR_2 | VAR_3),
      VAR_8.qh);
    VAR_11 -= VAR_10;
    VAR_13 += VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
     if (VAR_9[VAR_10].ptr != VAR_8.ptr)
      continue;
     if (VAR_8.qh->qh_next.ptr) {
      VAR_10 = FUNC_9(VAR_13, VAR_11,
        " ...");
      VAR_11 -= VAR_10;
      VAR_13 += VAR_10;
     }
     break;
    }

    if (VAR_10 == VAR_12) {
     VAR_10 = FUNC_8(VAR_13,
       VAR_6, VAR_16,
       VAR_8.qh, VAR_11);

     if (VAR_12 < VAR_0)
      VAR_9[VAR_12++].qh = VAR_8.qh;
    } else
     VAR_10 = 0;
    VAR_15 = FUNC_0(VAR_6, VAR_16->hw_next);
    VAR_8 = VAR_8.qh->qh_next;
    break;
   case 130:
    VAR_10 = FUNC_9(VAR_13, VAR_11,
      " fstn-%8x/%p",
      VAR_8.fstn->hw_prev, VAR_8.fstn);
    VAR_15 = FUNC_0(VAR_6, VAR_8.fstn->hw_next);
    VAR_8 = VAR_8.fstn->fstn_next;
    break;
   case 129:
    VAR_10 = FUNC_9(VAR_13, VAR_11,
      " itd/%p", VAR_8.itd);
    VAR_15 = FUNC_0(VAR_6, VAR_8.itd->hw_next);
    VAR_8 = VAR_8.itd->itd_next;
    break;
   }
   VAR_11 -= VAR_10;
   VAR_13 += VAR_10;
  } while (VAR_8.ptr);

  VAR_10 = FUNC_9(VAR_13, VAR_11, "\n");
  VAR_11 -= VAR_10;
  VAR_13 += VAR_10;
 }
 FUNC_11(&VAR_6->lock, VAR_7);
 FUNC_5(VAR_9);

 return VAR_4->alloc_size - VAR_11;
}
