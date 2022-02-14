
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int bEndpointAddress; } ;
struct usb_host_endpoint {struct fotg210_qh* hcpriv; TYPE_4__ desc; } ;
struct usb_hcd {int dummy; } ;
struct TYPE_7__ {struct fotg210_qh* qh; } ;
struct fotg210_qh {int qh_state; int qtd_list; int clearing_tt; TYPE_3__ qh_next; int td_list; int * hw; } ;
struct fotg210_iso_stream {int qh_state; int qtd_list; int clearing_tt; TYPE_3__ qh_next; int td_list; int * hw; } ;
struct fotg210_hcd {scalar_t__ rh_state; int lock; TYPE_2__* async; } ;
struct TYPE_5__ {struct fotg210_qh* qh; } ;
struct TYPE_6__ {TYPE_1__ qh_next; } ;


 scalar_t__ VAR_0 ;





 int FUNC_0 (struct fotg210_hcd*,char*,struct fotg210_qh*,int ,int,char*) ;
 struct fotg210_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct fotg210_qh*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct fotg210_hcd*,struct fotg210_qh*) ;

__attribute__((used)) static void FUNC_9(struct usb_hcd *VAR_1,
  struct usb_host_endpoint *VAR_2)
{
 struct fotg210_hcd *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;
 struct fotg210_qh *VAR_5, *VAR_6;




rescan:
 FUNC_6(&VAR_3->lock, VAR_4);
 VAR_5 = VAR_2->hcpriv;
 if (!VAR_5)
  goto done;




 if (VAR_5->hw == ((void*)0)) {
  struct fotg210_iso_stream *VAR_7 = VAR_2->hcpriv;

  if (!FUNC_3(&VAR_7->td_list))
   goto idle_timeout;


  FUNC_2(VAR_7);
  goto done;
 }

 if (VAR_3->rh_state < VAR_0)
  VAR_5->qh_state = 131;
 switch (VAR_5->qh_state) {
 case 130:
 case 132:
  for (VAR_6 = VAR_3->async->qh_next.qh;
    VAR_6 && VAR_6 != VAR_5;
    VAR_6 = VAR_6->qh_next.qh)
   continue;



  if (VAR_6)
   FUNC_8(VAR_3, VAR_5);

 case 129:
 case 128:
idle_timeout:
  FUNC_7(&VAR_3->lock, VAR_4);
  FUNC_5(1);
  goto rescan;
 case 131:
  if (VAR_5->clearing_tt)
   goto idle_timeout;
  if (FUNC_3(&VAR_5->qtd_list)) {
   FUNC_4(VAR_3, VAR_5);
   break;
  }

 default:



  FUNC_0(VAR_3, "qh %p (#%02x) state %d%s\n",
    VAR_5, VAR_2->desc.bEndpointAddress, VAR_5->qh_state,
    FUNC_3(&VAR_5->qtd_list) ? "" : "(has tds)");
  break;
 }
done:
 VAR_2->hcpriv = ((void*)0);
 FUNC_7(&VAR_3->lock, VAR_4);
}
