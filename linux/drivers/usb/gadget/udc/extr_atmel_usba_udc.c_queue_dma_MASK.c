
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usba_udc {int lock; int gadget; } ;
struct TYPE_4__ {int length; scalar_t__ no_interrupt; scalar_t__ short_not_ok; scalar_t__ zero; int dma; } ;
struct usba_request {int using_dma; int ctrl; int queue; TYPE_2__ req; } ;
struct TYPE_3__ {scalar_t__ desc; int name; } ;
struct usba_ep {int queue; TYPE_1__ ep; int is_in; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct usba_ep*,struct usba_request*) ;
 int FUNC_7 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_8(struct usba_udc *VAR_10, struct usba_ep *VAR_11,
  struct usba_request *VAR_12, gfp_t VAR_13)
{
 unsigned long VAR_14;
 int VAR_15;

 FUNC_0(VAR_0, "%s: req l/%u d/%pad %c%c%c\n",
  VAR_11->ep.name, VAR_12->req.length, &VAR_12->req.dma,
  VAR_12->req.zero ? 'Z' : 'z',
  VAR_12->req.short_not_ok ? 'S' : 's',
  VAR_12->req.no_interrupt ? 'I' : 'i');

 if (VAR_12->req.length > 0x10000) {

  FUNC_0(VAR_1, "invalid request length %u\n", VAR_12->req.length);
  return -VAR_3;
 }

 VAR_15 = FUNC_7(&VAR_10->gadget, &VAR_12->req, VAR_11->is_in);
 if (VAR_15)
  return VAR_15;

 VAR_12->using_dma = 1;
 VAR_12->ctrl = FUNC_1(VAR_2, VAR_12->req.length)
   | VAR_5 | VAR_7
   | VAR_6;

 if (!VAR_11->is_in)
  VAR_12->ctrl |= VAR_8 | VAR_9;






 VAR_15 = -VAR_4;
 FUNC_4(&VAR_10->lock, VAR_14);
 if (VAR_11->ep.desc) {
  if (FUNC_3(&VAR_11->queue))
   FUNC_6(VAR_11, VAR_12);

  FUNC_2(&VAR_12->queue, &VAR_11->queue);
  VAR_15 = 0;
 }
 FUNC_5(&VAR_10->lock, VAR_14);

 return VAR_15;
}
