
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int xfersize; } ;
union cvmx_usbcx_hctsizx {TYPE_4__ s; void* u32; } ;
struct TYPE_5__ {scalar_t__ compsplt; scalar_t__ spltena; } ;
union cvmx_usbcx_hcspltx {TYPE_1__ s; void* u32; } ;
struct TYPE_6__ {scalar_t__ epdir; scalar_t__ eptype; } ;
union cvmx_usbcx_hccharx {TYPE_2__ s; void* u32; } ;
struct cvmx_usb_tx_fifo {size_t head; TYPE_3__* entry; } ;
struct octeon_hcd {int index; struct cvmx_usb_tx_fifo nonperiodic; struct cvmx_usb_tx_fifo periodic; } ;
struct TYPE_7__ {int channel; int size; int address; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct octeon_hcd*) ;
 void* FUNC_6 (struct octeon_hcd*,int ) ;

__attribute__((used)) static void FUNC_7(struct octeon_hcd *VAR_4, int VAR_5)
{
 union cvmx_usbcx_hccharx VAR_6;
 union cvmx_usbcx_hcspltx VAR_7;
 union cvmx_usbcx_hctsizx VAR_8;
 struct cvmx_usb_tx_fifo *VAR_9;


 VAR_6.u32 = FUNC_6(VAR_4,
   FUNC_0(VAR_5, VAR_4->index));
 if (VAR_6.s.epdir != VAR_0)
  return;


 VAR_7.u32 = FUNC_6(VAR_4,
    FUNC_1(VAR_5, VAR_4->index));
 if (VAR_7.s.spltena && VAR_7.s.compsplt)
  return;





 VAR_8.u32 = FUNC_6(VAR_4,
    FUNC_2(VAR_5, VAR_4->index));
 if (!VAR_8.s.xfersize)
  return;

 if ((VAR_6.s.eptype == VAR_1) ||
     (VAR_6.s.eptype == VAR_2))
  VAR_9 = &VAR_4->periodic;
 else
  VAR_9 = &VAR_4->nonperiodic;

 VAR_9->entry[VAR_9->head].channel = VAR_5;
 VAR_9->entry[VAR_9->head].address =
  FUNC_4(FUNC_3(VAR_4->index) +
       VAR_5 * 8);
 VAR_9->entry[VAR_9->head].size = (VAR_8.s.xfersize + 3) >> 2;
 VAR_9->head++;
 if (VAR_9->head > VAR_3)
  VAR_9->head = 0;

 FUNC_5(VAR_4);
}
