
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_dev {scalar_t__ regs; } ;
struct gsc_addr {int cr; int cb; int y; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,int *,int *,int *) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct gsc_dev *VAR_0, struct gsc_addr *VAR_1,
    int VAR_2)
{
 FUNC_3("src_buf[%d]: %pad, cb: %pad, cr: %pad", VAR_2,
   &VAR_1->y, &VAR_1->cb, &VAR_1->cr);
 FUNC_4(VAR_1->y, VAR_0->regs + FUNC_2(VAR_2));
 FUNC_4(VAR_1->cb, VAR_0->regs + FUNC_0(VAR_2));
 FUNC_4(VAR_1->cr, VAR_0->regs + FUNC_1(VAR_2));

}
