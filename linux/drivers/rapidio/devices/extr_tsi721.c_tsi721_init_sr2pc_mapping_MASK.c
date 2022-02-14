
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi721_device {int ibwin_cnt; scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tsi721_device *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(0, VAR_1->regs + FUNC_0(VAR_2));
 VAR_1->ibwin_cnt = VAR_0;
}
