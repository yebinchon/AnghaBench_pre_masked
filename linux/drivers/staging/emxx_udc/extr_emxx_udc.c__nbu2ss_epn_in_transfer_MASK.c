
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct nbu2ss_udc {TYPE_2__* p_regs; } ;
struct TYPE_6__ {scalar_t__ actual; size_t length; } ;
struct nbu2ss_req {TYPE_3__ req; } ;
struct nbu2ss_ep {scalar_t__ epnum; } ;
struct TYPE_5__ {TYPE_1__* EP_REGS; } ;
struct TYPE_4__ {int EP_STATUS; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct nbu2ss_udc*,struct nbu2ss_ep*,struct nbu2ss_req*,size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (struct nbu2ss_udc*,size_t) ;

__attribute__((used)) static int FUNC_3(struct nbu2ss_udc *VAR_3,
       struct nbu2ss_ep *VAR_4, struct nbu2ss_req *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;
 u32 VAR_9;

 if (VAR_4->epnum == 0)
  return -VAR_0;

 VAR_6 = VAR_4->epnum - 1;

 VAR_9 = FUNC_1(&VAR_3->p_regs->EP_REGS[VAR_6].EP_STATUS);



 if (VAR_5->req.actual == 0) {
  if ((VAR_9 & VAR_1) == 0)
   return 1;

 } else {
  if ((VAR_9 & VAR_2) != 0)
   return 1;
 }



 VAR_7 = VAR_5->req.length - VAR_5->req.actual;
 if (VAR_7 > 0)
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7);
 else if (VAR_5->req.length == 0)
  FUNC_2(VAR_3, VAR_4->epnum);

 return VAR_8;
}
