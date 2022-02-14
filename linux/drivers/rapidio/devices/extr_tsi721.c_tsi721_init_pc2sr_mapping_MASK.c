
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tsi721_device {int obwin_cnt; TYPE_2__* ob_win; TYPE_1__* p2r_bar; scalar_t__ regs; } ;
struct TYPE_4__ {int active; } ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ free; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct tsi721_device *VAR_7)
{
 int VAR_8, VAR_9;
 u32 VAR_10;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_2(0, VAR_7->regs + FUNC_0(VAR_8));


 FUNC_2(0, VAR_7->regs + VAR_0);
 FUNC_2(0, VAR_7->regs + VAR_1);
 FUNC_2(0, VAR_7->regs + VAR_2);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   while (FUNC_1(VAR_7->regs + VAR_5) &
    VAR_6) {
    FUNC_3(1);
   }
   VAR_10 = VAR_6 | (VAR_8 << 3) | VAR_9;
   FUNC_2(VAR_10, VAR_7->regs + VAR_5);
  }
 }

 if (VAR_7->p2r_bar[0].size == 0 && VAR_7->p2r_bar[1].size == 0) {
  VAR_7->obwin_cnt = 0;
  return;
 }

 VAR_7->p2r_bar[0].free = VAR_7->p2r_bar[0].size;
 VAR_7->p2r_bar[1].free = VAR_7->p2r_bar[1].size;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_7->ob_win[VAR_8].active = 0;

 VAR_7->obwin_cnt = VAR_3;
}
