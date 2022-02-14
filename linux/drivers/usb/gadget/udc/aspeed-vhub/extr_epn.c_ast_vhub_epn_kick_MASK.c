
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int actual; unsigned int length; int dma; scalar_t__ buf; int zero; } ;
struct ast_vhub_req {int active; int last_desc; TYPE_2__ req; } ;
struct TYPE_6__ {scalar_t__ regs; scalar_t__ is_in; } ;
struct TYPE_4__ {unsigned int maxpacket; } ;
struct ast_vhub_ep {int buf_dma; TYPE_3__ epn; scalar_t__ buf; TYPE_1__ ep; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ast_vhub_ep*,char*,struct ast_vhub_req*,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ast_vhub_ep *VAR_3, struct ast_vhub_req *VAR_4)
{
 unsigned int VAR_5 = VAR_4->req.actual;
 unsigned int VAR_6 = VAR_4->req.length;
 unsigned int VAR_7;


 FUNC_2(VAR_4->active);


 VAR_7 = VAR_6 - VAR_5;
 if (VAR_7 > VAR_3->ep.maxpacket)
  VAR_7 = VAR_3->ep.maxpacket;
 else if ((VAR_7 < VAR_3->ep.maxpacket) || !VAR_4->req.zero)
  VAR_4->last_desc = 1;

 FUNC_0(VAR_3, "kick req %p act=%d/%d chunk=%d last=%d\n",
        VAR_4, VAR_5, VAR_6, VAR_7, VAR_4->last_desc);


 if (!VAR_4->req.dma) {


  if (VAR_3->epn.is_in) {
   FUNC_3(VAR_3->buf, VAR_4->req.buf + VAR_5, VAR_7);
   FUNC_4(VAR_3->buf);
  }
  FUNC_5(VAR_3->buf_dma, VAR_3->epn.regs + VAR_0);
 } else {
  if (VAR_3->epn.is_in)
   FUNC_4(VAR_4->req.buf);
  FUNC_5(VAR_4->req.dma + VAR_5, VAR_3->epn.regs + VAR_0);
 }


 VAR_4->active = 1;
 FUNC_5(FUNC_1(VAR_7),
        VAR_3->epn.regs + VAR_1);
 FUNC_5(FUNC_1(VAR_7) | VAR_2,
        VAR_3->epn.regs + VAR_1);
}
