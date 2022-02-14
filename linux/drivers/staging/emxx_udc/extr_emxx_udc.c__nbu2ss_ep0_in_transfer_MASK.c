
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nbu2ss_udc {TYPE_1__* p_regs; } ;
struct TYPE_4__ {int actual; int length; scalar_t__ buf; } ;
struct nbu2ss_req {int zero; int div_len; TYPE_2__ req; } ;
struct TYPE_3__ {int EP0_CONTROL; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nbu2ss_udc*,int *,int) ;
 int FUNC_1 (struct nbu2ss_udc*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (struct nbu2ss_udc*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct nbu2ss_udc *VAR_3,
       struct nbu2ss_req *VAR_4)
{
 u8 *VAR_5;
 u32 VAR_6;
 u32 VAR_7 = 0;
 int VAR_8 = 0;



 if (VAR_4->req.actual == VAR_4->req.length) {
  if ((VAR_4->req.actual % VAR_2) == 0) {
   if (VAR_4->zero) {
    VAR_4->zero = 0;
    FUNC_1(VAR_3, 0);
    return 1;
   }
  }

  return 0;
 }



 VAR_6 = FUNC_2(&VAR_3->p_regs->EP0_CONTROL);
 VAR_6 |= VAR_1;
 VAR_6 &= ~(u32)VAR_0;
 FUNC_3(&VAR_3->p_regs->EP0_CONTROL, VAR_6);

 VAR_7 = VAR_4->req.length - VAR_4->req.actual;
 VAR_5 = (u8 *)VAR_4->req.buf;
 VAR_5 += VAR_4->req.actual;



 VAR_8 = FUNC_0(VAR_3, VAR_5, VAR_7);

 VAR_4->div_len = VAR_8;
 VAR_7 -= VAR_8;

 if (VAR_7 == 0) {
  FUNC_1(VAR_3, 0);
  return VAR_8;
 }

 if ((VAR_7 < sizeof(u32)) && (VAR_8 != VAR_2)) {
  VAR_5 += VAR_8;
  VAR_8 += FUNC_4(VAR_3, VAR_5, VAR_7);
  VAR_4->div_len = VAR_8;
 }

 return VAR_8;
}
