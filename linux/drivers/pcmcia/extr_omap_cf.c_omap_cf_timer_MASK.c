
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct omap_cf_socket {unsigned int present; int timer; scalar_t__ active; int socket; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct omap_cf_socket* VAR_2 ;
 int VAR_3 ;
 struct omap_cf_socket* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_6)
{
 struct omap_cf_socket *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_5);
 unsigned VAR_8 = FUNC_2();

 if (VAR_8 != VAR_7->present) {
  VAR_7->present = VAR_8;
  FUNC_4("%s: card %s\n", VAR_3,
   VAR_8 ? "present" : "gone");
  FUNC_3(&VAR_7->socket, VAR_1);
 }

 if (VAR_7->active)
  FUNC_1(&VAR_7->timer, VAR_4 + VAR_0);
}
