
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa_ep {int fifo_size; } ;
struct TYPE_2__ {scalar_t__ actual; scalar_t__ length; } ;
struct pxa27x_request {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pxa_ep*,char*,int ,int,char*,TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pxa_ep*) ;
 int FUNC_2 (struct pxa_ep*,int,int) ;
 int FUNC_3 (struct pxa_ep*,struct pxa27x_request*) ;
 int FUNC_4 (struct pxa_ep*,int ) ;

__attribute__((used)) static int FUNC_5(struct pxa_ep *VAR_2, struct pxa27x_request *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;

 while (FUNC_1(VAR_2)) {
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  FUNC_2(VAR_2, VAR_4, !VAR_1);

  VAR_5 = (VAR_4 < VAR_2->fifo_size);
  FUNC_0(VAR_2, "read udccsr:%03x, count:%d bytes%s req %p %d/%d\n",
   FUNC_4(VAR_2, VAR_0), VAR_4, VAR_5 ? "/S" : "",
   &VAR_3->req, VAR_3->req.actual, VAR_3->req.length);


  if (VAR_5 || VAR_3->req.actual == VAR_3->req.length) {
   VAR_6 = 1;
   break;
  }

 }
 return VAR_6;
}
