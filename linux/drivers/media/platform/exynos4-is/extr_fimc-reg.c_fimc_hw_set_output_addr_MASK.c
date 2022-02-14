
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_dev {scalar_t__ regs; } ;
struct fimc_addr {int cr; int cb; int y; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct fimc_dev *VAR_1,
        struct fimc_addr *VAR_2, int VAR_3)
{
 int VAR_4 = (VAR_3 == -1) ? 0 : VAR_3;
 do {
  FUNC_4(VAR_2->y, VAR_1->regs + FUNC_2(VAR_4));
  FUNC_4(VAR_2->cb, VAR_1->regs + FUNC_0(VAR_4));
  FUNC_4(VAR_2->cr, VAR_1->regs + FUNC_1(VAR_4));
  FUNC_3("dst_buf[%d]: 0x%X, cb: 0x%X, cr: 0x%X",
      VAR_4, VAR_2->y, VAR_2->cb, VAR_2->cr);
 } while (VAR_3 == -1 && ++VAR_4 < VAR_0);
}
