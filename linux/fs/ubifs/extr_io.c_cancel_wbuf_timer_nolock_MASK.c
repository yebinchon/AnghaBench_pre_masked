
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int timer; scalar_t__ need_sync; scalar_t__ no_timer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ubifs_wbuf *VAR_0)
{
 if (VAR_0->no_timer)
  return;
 VAR_0->need_sync = 0;
 FUNC_0(&VAR_0->timer);
}
