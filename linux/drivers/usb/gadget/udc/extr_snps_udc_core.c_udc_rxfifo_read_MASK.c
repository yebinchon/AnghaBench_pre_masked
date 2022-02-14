
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {unsigned int length; unsigned int actual; int zero; int status; int * buf; } ;
struct udc_request {TYPE_2__ req; } ;
struct TYPE_6__ {unsigned int maxpacket; int name; } ;
struct udc_ep {int dev; TYPE_3__ ep; TYPE_1__* regs; } ;
struct TYPE_4__ {int sts; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,char*,int ,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ,unsigned int) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,unsigned int) ;

__attribute__((used)) static int
FUNC_5(struct udc_ep *VAR_2, struct udc_request *VAR_3)
{
 u8 *VAR_4;
 unsigned VAR_5;
 unsigned VAR_6 = 0;
 unsigned VAR_7 = 0;


 VAR_6 = FUNC_3(&VAR_2->regs->sts);
 VAR_6 = FUNC_0(VAR_6, VAR_1);

 VAR_5 = VAR_3->req.length - VAR_3->req.actual;
 VAR_4 = VAR_3->req.buf + VAR_3->req.actual;
 if (VAR_6 > VAR_5) {
  if ((VAR_5 % VAR_2->ep.maxpacket) != 0) {
   FUNC_1(VAR_2->dev,
    "%s: rx %d bytes, rx-buf space = %d bytesn\n",
    VAR_2->ep.name, VAR_6, VAR_5);
   VAR_3->req.status = -VAR_0;
  }
  VAR_6 = VAR_5;
 }
 VAR_3->req.actual += VAR_6;


 if (((VAR_6 % VAR_2->ep.maxpacket) != 0) || (!VAR_6)
  || ((VAR_3->req.actual == VAR_3->req.length) && !VAR_3->req.zero))
  VAR_7 = 1;


 FUNC_2(VAR_2->dev, "ep %s: rxfifo read %d bytes\n", VAR_2->ep.name, VAR_6);
 FUNC_4(VAR_2->dev, VAR_4, VAR_6);

 return VAR_7;
}
