
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int length; unsigned int actual; unsigned int buf; } ;
struct ast_vhub_req {TYPE_1__ req; } ;
struct TYPE_6__ {int ctlstat; int state; } ;
struct TYPE_5__ {unsigned int maxpacket; } ;
struct ast_vhub_ep {TYPE_3__ ep0; TYPE_2__ ep; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_vhub_ep*,char*,unsigned int) ;
 int FUNC_1 (struct ast_vhub_ep*,char*,unsigned int,unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (struct ast_vhub_ep*,struct ast_vhub_req*,int) ;
 int FUNC_3 (struct ast_vhub_ep*) ;
 int VAR_2 ;
 int FUNC_4 (unsigned int,int ,unsigned int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ast_vhub_ep *VAR_3, struct ast_vhub_req *VAR_4,
        unsigned int VAR_5)
{
 unsigned int VAR_6;
 int VAR_7 = 0;


 VAR_6 = VAR_4->req.length - VAR_4->req.actual;

 FUNC_1(VAR_3, "receive got=%d remain=%d\n", VAR_5, VAR_6);


 if (VAR_5 > VAR_6) {
  FUNC_0(VAR_3, "receiving too much (ovf: %d) !\n",
        VAR_5 - VAR_6);
  VAR_5 = VAR_6;
  VAR_7 = -VAR_0;
 }
 if (VAR_5 && VAR_4->req.buf)
  FUNC_4(VAR_4->req.buf + VAR_4->req.actual, VAR_3->buf, VAR_5);
 VAR_4->req.actual += VAR_5;


 if (VAR_5 < VAR_3->ep.maxpacket || VAR_5 == VAR_6) {
  VAR_3->ep0.state = VAR_2;
  FUNC_5(VAR_1, VAR_3->ep0.ctlstat);
  FUNC_2(VAR_3, VAR_4, VAR_7);
 } else
  FUNC_3(VAR_3);
}
