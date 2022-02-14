
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; scalar_t__ actual; scalar_t__ zero; } ;
struct pxa25x_request {TYPE_2__ req; } ;
struct TYPE_3__ {int name; int desc; } ;
struct pxa25x_ep {unsigned int fifo_size; int queue; TYPE_1__ ep; } ;


 int FUNC_0 (int ,char*,int ,unsigned int,char*,char*,scalar_t__,struct pxa25x_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pxa25x_ep*,struct pxa25x_request*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct pxa25x_ep*) ;
 int FUNC_5 (struct pxa25x_ep*) ;
 int FUNC_6 (struct pxa25x_ep*,int ) ;
 int FUNC_7 (int) ;
 unsigned int FUNC_8 (int ) ;
 unsigned int FUNC_9 (struct pxa25x_ep*,struct pxa25x_request*,unsigned int) ;

__attribute__((used)) static int
FUNC_10 (struct pxa25x_ep *VAR_4, struct pxa25x_request *VAR_5)
{
 unsigned VAR_6;

 VAR_6 = FUNC_8(VAR_4->ep.desc);
 do {
  unsigned VAR_7;
  int VAR_8, VAR_9;

  VAR_7 = FUNC_9(VAR_4, VAR_5, VAR_6);


  if (FUNC_7 (VAR_7 != VAR_6))
   VAR_8 = VAR_9 = 1;
  else {
   if (FUNC_2(VAR_5->req.length != VAR_5->req.actual)
     || VAR_5->req.zero)
    VAR_8 = 0;
   else
    VAR_8 = 1;

   VAR_9 = FUNC_7 (VAR_6 < VAR_4->fifo_size);
  }

  FUNC_0(VAR_0, "wrote %s %d bytes%s%s %d left %p\n",
   VAR_4->ep.name, VAR_7,
   VAR_8 ? "/L" : "", VAR_9 ? "/S" : "",
   VAR_5->req.length - VAR_5->req.actual, VAR_5);





  FUNC_6(VAR_4, VAR_2);
  if (VAR_9)
   FUNC_6(VAR_4, VAR_3);


  if (VAR_8) {
   FUNC_1 (VAR_4, VAR_5, 0);
   if (FUNC_3(&VAR_4->queue))
    FUNC_4(VAR_4);
   return 1;
  }





 } while (FUNC_5(VAR_4) & VAR_1);
 return 0;
}
