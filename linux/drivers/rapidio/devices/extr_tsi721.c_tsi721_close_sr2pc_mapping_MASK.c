
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi721_ib_win {int active; } ;
struct tsi721_device {scalar_t__ regs; struct tsi721_ib_win* ib_win; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tsi721_device *VAR_1)
{
 struct tsi721_ib_win *VAR_2;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1->ib_win[VAR_3];
  if (VAR_2->active) {
   FUNC_1(0, VAR_1->regs + FUNC_0(VAR_3));
   VAR_2->active = 0;
  }
 }
}
