
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nbu2ss_udc {TYPE_2__* p_regs; int dev; } ;
struct TYPE_3__ {int length; int actual; scalar_t__ buf; } ;
struct nbu2ss_req {int zero; TYPE_1__ req; } ;
struct TYPE_4__ {int EP0_CONTROL; int EP0_LENGTH; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nbu2ss_udc*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct nbu2ss_udc*,int *,int ) ;
 int FUNC_5 (struct nbu2ss_udc*,int *,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct nbu2ss_udc *VAR_4,
        struct nbu2ss_req *VAR_5)
{
 u8 *VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9 = 0;
 int VAR_10;



 VAR_8 = FUNC_2(&VAR_4->p_regs->EP0_LENGTH) & VAR_1;
 if (VAR_8 != 0) {
  VAR_10 = 0;

  VAR_7 = VAR_5->req.length - VAR_5->req.actual;
  VAR_6 = (u8 *)VAR_5->req.buf;
  VAR_6 += VAR_5->req.actual;

  VAR_9 = FUNC_5(VAR_4, VAR_6
     , FUNC_6(VAR_7, VAR_8));
  if (VAR_9 < 0)
   return VAR_9;

  VAR_5->req.actual += VAR_9;
  VAR_8 -= VAR_9;

  if ((VAR_8 > 0) && (VAR_8 < sizeof(u32))) {
   VAR_6 += VAR_9;
   VAR_7 -= VAR_9;

   VAR_9 = FUNC_4(VAR_4, VAR_6
     , FUNC_6(VAR_7, VAR_8));
   VAR_5->req.actual += VAR_9;
  }
 } else {
  VAR_10 = 1;
 }



 if (VAR_5->req.actual == VAR_5->req.length) {
  if ((VAR_5->req.actual % VAR_3) == 0) {
   if (VAR_5->zero) {
    VAR_5->zero = 0;
    FUNC_0(VAR_4, 0);
    return 1;
   }
  }

  return 0;
 }

 if ((VAR_5->req.actual % VAR_3) != 0)
  return 0;

 if (VAR_5->req.actual > VAR_5->req.length) {
  FUNC_3(VAR_4->dev, " *** Overrun Error\n");
  return -VAR_0;
 }

 if (VAR_10 != 0) {
  VAR_7 = FUNC_2(&VAR_4->p_regs->EP0_CONTROL);
  if (VAR_7 & VAR_2) {


   FUNC_1(&VAR_4->p_regs->EP0_CONTROL, VAR_2);
  }
  VAR_9 = 1;
 }

 return VAR_9;
}
