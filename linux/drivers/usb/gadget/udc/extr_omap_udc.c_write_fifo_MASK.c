
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ length; scalar_t__ actual; int zero; int * buf; } ;
struct omap_req {TYPE_2__ req; } ;
struct TYPE_3__ {unsigned int maxpacket; } ;
struct omap_ep {int ackwait; TYPE_1__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_ep*,struct omap_req*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *,struct omap_req*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct omap_ep *VAR_4, struct omap_req *VAR_5)
{
 u8 *VAR_6;
 unsigned VAR_7;
 int VAR_8;
 u16 VAR_9;

 VAR_6 = VAR_5->req.buf + VAR_5->req.actual;
 FUNC_3(VAR_6);


 VAR_9 = FUNC_1(VAR_3);
 if (VAR_9 & VAR_1)
  return 0;

 VAR_7 = VAR_4->ep.maxpacket;
 VAR_7 = FUNC_4(VAR_6, VAR_5, VAR_7);
 FUNC_2(VAR_2, VAR_0);
 VAR_4->ackwait = 1;


 if (VAR_7 != VAR_4->ep.maxpacket)
  VAR_8 = 1;
 else if (VAR_5->req.length == VAR_5->req.actual
   && !VAR_5->req.zero)
  VAR_8 = 1;
 else
  VAR_8 = 0;





 if (VAR_8)
  FUNC_0(VAR_4, VAR_5, 0);
 return VAR_8;
}
