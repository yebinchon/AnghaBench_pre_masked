
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pxa_ep {unsigned int fifo_size; } ;
struct TYPE_2__ {scalar_t__ length; scalar_t__ actual; scalar_t__ zero; } ;
struct pxa27x_request {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pxa_ep*,char*,int,char*,char*,scalar_t__,TYPE_1__*) ;
 int FUNC_1 (struct pxa_ep*) ;
 int FUNC_2 (struct pxa_ep*,char*,int) ;
 int FUNC_3 (struct pxa_ep*,int) ;
 int FUNC_4 (struct pxa_ep*,int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct pxa_ep*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct pxa_ep*,struct pxa27x_request*,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct pxa_ep *VAR_5, struct pxa27x_request *VAR_6)
{
 unsigned VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13;

 VAR_7 = VAR_5->fifo_size;
 do {
  VAR_13 = FUNC_6(VAR_5, VAR_0);
  if (VAR_13 & VAR_1) {
   FUNC_2(VAR_5, "Clearing Transmit Complete, udccsr=%x\n",
    VAR_13);
   FUNC_3(VAR_5, VAR_1);
  }
  if (VAR_13 & VAR_3) {
   FUNC_2(VAR_5, "Clearing Underrun on, udccsr=%x\n",
    VAR_13);
   FUNC_3(VAR_5, VAR_3);
  }

  VAR_8 = FUNC_8(VAR_5, VAR_6, VAR_7);
  FUNC_4(VAR_5, VAR_8, VAR_4);
  VAR_12 += VAR_8;


  if (FUNC_7(VAR_8 < VAR_7)) {
   VAR_10 = 1;
   VAR_9 = 1;
  } else {
   if (FUNC_5(VAR_6->req.length > VAR_6->req.actual)
     || VAR_6->req.zero)
    VAR_10 = 0;
   else
    VAR_10 = 1;

   VAR_9 = FUNC_7(VAR_7 < VAR_5->fifo_size);
  }

  if (VAR_9)
   FUNC_3(VAR_5, VAR_2);


  if (VAR_10) {
   VAR_11 = 1;
   break;
  }
 } while (!FUNC_1(VAR_5));

 FUNC_0(VAR_5, "wrote count:%d bytes%s%s, left:%d req=%p\n",
   VAR_12, VAR_10 ? "/L" : "", VAR_9 ? "/S" : "",
   VAR_6->req.length - VAR_6->req.actual, &VAR_6->req);

 return VAR_11;
}
