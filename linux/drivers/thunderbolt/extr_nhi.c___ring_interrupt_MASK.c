
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ring {int work; int poll_data; int (* start_poll ) (int ) ;int running; } ;


 int FUNC_0 (struct tb_ring*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tb_ring *VAR_0)
{
 if (!VAR_0->running)
  return;

 if (VAR_0->start_poll) {
  FUNC_0(VAR_0, 1);
  VAR_0->start_poll(VAR_0->poll_data);
 } else {
  FUNC_1(&VAR_0->work);
 }
}
