
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
 int VAR_2 ;
 int FUNC_0 (struct pxa_ep*,char*,int ,int,char*,TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct pxa_ep*,int ) ;
 scalar_t__ FUNC_2 (struct pxa_ep*) ;
 int FUNC_3 (struct pxa_ep*,int,int) ;
 int FUNC_4 (struct pxa_ep*,struct pxa27x_request*) ;
 int FUNC_5 (struct pxa_ep*,int ) ;

__attribute__((used)) static int FUNC_6(struct pxa_ep *VAR_3, struct pxa27x_request *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;

 while (FUNC_2(VAR_3)) {
  VAR_5 = FUNC_4(VAR_3, VAR_4);
  FUNC_1(VAR_3, VAR_1);
  FUNC_3(VAR_3, VAR_5, !VAR_2);

  VAR_6 = (VAR_5 < VAR_3->fifo_size);
  FUNC_0(VAR_3, "read udccsr:%03x, count:%d bytes%s req %p %d/%d\n",
   FUNC_5(VAR_3, VAR_0), VAR_5, VAR_6 ? "/S" : "",
   &VAR_4->req, VAR_4->req.actual, VAR_4->req.length);

  if (VAR_6 || VAR_4->req.actual >= VAR_4->req.length) {
   VAR_7 = 1;
   break;
  }
 }

 return VAR_7;
}
