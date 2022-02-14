
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct peespi {int misc_ctrl; int lock; } ;
struct TYPE_4__ {int nports; } ;
struct TYPE_5__ {scalar_t__ regs; TYPE_1__ params; struct peespi* espi; } ;
typedef TYPE_2__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,scalar_t__) ;

int FUNC_6(adapter_t *VAR_4, u32 *VAR_5, u8 VAR_6)
{
 struct peespi *VAR_7 = VAR_4->espi;
 u8 VAR_8, VAR_9 = (u8)VAR_4->params.nports;

 if (!VAR_6) {
  if (!FUNC_3(&VAR_7->lock))
   return -1;
 } else
  FUNC_2(&VAR_7->lock);

 if ((VAR_7->misc_ctrl & VAR_3) != VAR_2) {
  VAR_7->misc_ctrl = (VAR_7->misc_ctrl & ~VAR_3) |
     VAR_2;
  FUNC_5(VAR_7->misc_ctrl, VAR_4->regs + VAR_0);
 }
 for (VAR_8 = 0 ; VAR_8 < VAR_9; VAR_8++, VAR_5++) {
  if (VAR_8) {
   FUNC_5(VAR_7->misc_ctrl | FUNC_0(VAR_8),
          VAR_4->regs + VAR_0);
  }
  *VAR_5 = FUNC_1(VAR_4->regs + VAR_1);
 }

 FUNC_5(VAR_7->misc_ctrl, VAR_4->regs + VAR_0);
 FUNC_4(&VAR_7->lock);
 return 0;
}
