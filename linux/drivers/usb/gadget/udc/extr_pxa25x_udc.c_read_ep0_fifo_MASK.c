
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int actual; unsigned int length; int status; scalar_t__* buf; } ;
struct pxa25x_request {TYPE_2__ req; } ;
struct TYPE_3__ {int name; } ;
struct pxa25x_ep {TYPE_1__ ep; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct pxa25x_ep*) ;
 int FUNC_2 (struct pxa25x_ep*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4 (struct pxa25x_ep *VAR_5, struct pxa25x_request *VAR_6)
{
 u8 *VAR_7, VAR_8;
 unsigned VAR_9;

 VAR_7 = VAR_6->req.buf + VAR_6->req.actual;
 VAR_9 = VAR_6->req.length - VAR_6->req.actual;

 while (FUNC_1(VAR_5) & VAR_3) {
  VAR_8 = (u8) VAR_4;

  if (FUNC_3 (VAR_9 == 0)) {




   if (VAR_6->req.status != -VAR_0)
    FUNC_0("%s overflow\n", VAR_5->ep.name);
   VAR_6->req.status = -VAR_0;
  } else {
   *VAR_7++ = VAR_8;
   VAR_6->req.actual++;
   VAR_9--;
  }
 }

 FUNC_2(VAR_5, VAR_2 | VAR_1);


 if (VAR_6->req.actual >= VAR_6->req.length)
  return 1;


 return 0;
}
