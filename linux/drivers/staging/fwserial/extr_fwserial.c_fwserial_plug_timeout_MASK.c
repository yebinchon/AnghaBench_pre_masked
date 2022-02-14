
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct fwtty_port {int dummy; } ;
struct fwtty_peer {scalar_t__ state; int lock; } ;


 scalar_t__ VAR_0 ;
 struct fwtty_peer* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct fwtty_port*,int) ;
 struct fwtty_peer* VAR_1 ;
 struct fwtty_port* FUNC_2 (struct fwtty_peer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct fwtty_peer *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 struct fwtty_port *VAR_5;

 FUNC_3(&VAR_4->lock);
 if (VAR_4->state != VAR_0) {
  FUNC_4(&VAR_4->lock);
  return;
 }

 VAR_5 = FUNC_2(VAR_4);
 FUNC_4(&VAR_4->lock);

 if (VAR_5)
  FUNC_1(VAR_5, 0);
}
