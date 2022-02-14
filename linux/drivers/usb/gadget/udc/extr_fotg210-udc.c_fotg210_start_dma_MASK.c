
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int length; int actual; int * buf; } ;
struct fotg210_request {TYPE_4__ req; } ;
struct TYPE_7__ {int maxpacket; } ;
struct fotg210_ep {scalar_t__ dir_in; TYPE_3__ ep; scalar_t__ epnum; TYPE_2__* fotg210; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {struct device dev; } ;
struct TYPE_6__ {scalar_t__ reg; TYPE_1__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,int *,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*,int ,int,int ) ;
 int FUNC_4 (struct fotg210_ep*) ;
 int FUNC_5 (struct fotg210_ep*,int ,int) ;
 int FUNC_6 (struct fotg210_ep*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(struct fotg210_ep *VAR_3,
   struct fotg210_request *VAR_4)
{
 struct device *VAR_5 = &VAR_3->fotg210->gadget.dev;
 dma_addr_t VAR_6;
 u8 *VAR_7;
 u32 VAR_8;

 if (VAR_3->epnum) {
  if (VAR_3->dir_in) {
   VAR_7 = VAR_4->req.buf;
   VAR_8 = VAR_4->req.length;
  } else {
   VAR_7 = VAR_4->req.buf + VAR_4->req.actual;
   VAR_8 = FUNC_7(VAR_3->fotg210->reg +
     FUNC_0(VAR_3->epnum - 1));
   VAR_8 &= VAR_2;
  }
 } else {
  VAR_7 = VAR_4->req.buf + VAR_4->req.actual;
  if (VAR_4->req.length - VAR_4->req.actual > VAR_3->ep.maxpacket)
   VAR_8 = VAR_3->ep.maxpacket;
  else
   VAR_8 = VAR_4->req.length;
 }

 VAR_6 = FUNC_1(VAR_5, VAR_7, VAR_8,
   VAR_3->dir_in ? VAR_1 : VAR_0);

 if (FUNC_2(VAR_5, VAR_6)) {
  FUNC_8("dma_mapping_error\n");
  return;
 }

 FUNC_5(VAR_3, VAR_6, VAR_8);


 FUNC_6(VAR_3);

 FUNC_4(VAR_3);


 VAR_4->req.actual += VAR_8;

 FUNC_3(VAR_5, VAR_6, VAR_8, VAR_1);
}
