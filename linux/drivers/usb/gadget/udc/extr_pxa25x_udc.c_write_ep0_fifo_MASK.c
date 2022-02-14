
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int bytes; } ;
struct TYPE_5__ {TYPE_1__ write; } ;
struct pxa25x_udc {scalar_t__ req_pending; TYPE_2__ stats; int * ep; } ;
struct TYPE_6__ {unsigned int length; scalar_t__ actual; } ;
struct pxa25x_request {TYPE_3__ req; } ;
struct pxa25x_ep {struct pxa25x_udc* dev; } ;


 int FUNC_0 (int ,char*,unsigned int,scalar_t__,struct pxa25x_request*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pxa25x_ep*,struct pxa25x_request*,int ) ;
 int FUNC_2 (struct pxa25x_udc*) ;
 int FUNC_3 (struct pxa25x_udc*,int,char*) ;
 int FUNC_4 (struct pxa25x_udc*) ;
 int FUNC_5 (struct pxa25x_udc*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 unsigned int FUNC_8 (int *,struct pxa25x_request*,unsigned int) ;

__attribute__((used)) static int
FUNC_9 (struct pxa25x_ep *VAR_4, struct pxa25x_request *VAR_5)
{
 struct pxa25x_udc *VAR_6 = VAR_4->dev;
 unsigned VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(&VAR_6->ep[0], VAR_5, VAR_1);
 VAR_4->dev->stats.write.bytes += VAR_7;


 VAR_8 = (VAR_7 != VAR_1);

 FUNC_0(VAR_0, "ep0in %d bytes %d left %p\n", VAR_7,
  VAR_5->req.length - VAR_5->req.actual, VAR_5);

 if (FUNC_7 (VAR_8)) {
  if (VAR_4->dev->req_pending)
   FUNC_3(VAR_4->dev, VAR_2, "short IN");
  else
   FUNC_5(VAR_6, VAR_2);

  VAR_7 = VAR_5->req.length;
  FUNC_1 (VAR_4, VAR_5, 0);
  FUNC_2(VAR_4->dev);
  if (VAR_7 >= VAR_1) {
   VAR_7 = 100;
   do {
    if ((FUNC_4(VAR_6) & VAR_3) != 0) {

     FUNC_5(VAR_6, VAR_3);
     break;
    }
    VAR_7--;
    FUNC_6(1);
   } while (VAR_7);
  }


 } else if (VAR_4->dev->req_pending)
  FUNC_3(VAR_4->dev, 0, "IN");
 return VAR_8;
}
