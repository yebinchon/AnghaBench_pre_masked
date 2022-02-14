
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct catc {int timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct catc* VAR_2 ;
 int FUNC_0 (struct catc*,scalar_t__,int ) ;
 int VAR_3 ;
 struct catc* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_6)
{
 struct catc *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
  FUNC_0(VAR_7, VAR_0 + 7 - VAR_8, VAR_3);

 FUNC_2(&VAR_7->timer, VAR_4 + VAR_1);
}
