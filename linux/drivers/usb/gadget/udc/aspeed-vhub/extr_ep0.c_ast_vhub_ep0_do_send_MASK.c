
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ length; unsigned int actual; unsigned int buf; int zero; } ;
struct ast_vhub_req {int last_desc; TYPE_3__ req; } ;
struct TYPE_5__ {int ctlstat; int state; } ;
struct TYPE_4__ {unsigned int maxpacket; } ;
struct ast_vhub_ep {TYPE_2__ ep0; int buf; TYPE_1__ ep; } ;


 int FUNC_0 (struct ast_vhub_ep*,char*,unsigned int,int,...) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (struct ast_vhub_ep*,struct ast_vhub_req*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct ast_vhub_ep *VAR_3,
     struct ast_vhub_req *VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6;




 if (VAR_4->req.length == 0)
  VAR_4->last_desc = 1;


 if (VAR_4->last_desc >= 0) {
  FUNC_0(VAR_3, "complete send %d/%d\n",
         VAR_4->req.actual, VAR_4->req.length);
  VAR_3->ep0.state = VAR_2;
  FUNC_5(VAR_0, VAR_3->ep0.ctlstat);
  FUNC_2(VAR_3, VAR_4, 0);
  return;
 }





 VAR_5 = VAR_4->req.length - VAR_4->req.actual;
 if (VAR_5 > VAR_3->ep.maxpacket)
  VAR_5 = VAR_3->ep.maxpacket;
 else if ((VAR_5 < VAR_3->ep.maxpacket) || !VAR_4->req.zero)
  VAR_4->last_desc = 1;

 FUNC_0(VAR_3, "send chunk=%d last=%d, req->act=%d mp=%d\n",
        VAR_5, VAR_4->last_desc, VAR_4->req.actual, VAR_3->ep.maxpacket);





 if (VAR_5 && VAR_4->req.buf)
  FUNC_3(VAR_3->buf, VAR_4->req.buf + VAR_4->req.actual, VAR_5);

 FUNC_4(VAR_3->buf);


 VAR_6 = FUNC_1(VAR_5);
 FUNC_5(VAR_6, VAR_3->ep0.ctlstat);
 FUNC_5(VAR_6 | VAR_1, VAR_3->ep0.ctlstat);
 VAR_4->req.actual += VAR_5;
}
