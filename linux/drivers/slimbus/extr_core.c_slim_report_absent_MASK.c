
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_device {int is_laddr_valid; int laddr; struct slim_controller* ctrl; } ;
struct slim_controller {int laddr_ida; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct slim_device*,int ) ;

void FUNC_4(struct slim_device *VAR_1)
{
 struct slim_controller *VAR_2 = VAR_1->ctrl;

 if (!VAR_2)
  return;


 FUNC_1(&VAR_2->lock);
 VAR_1->is_laddr_valid = 0;
 FUNC_2(&VAR_2->lock);

 FUNC_0(&VAR_2->laddr_ida, VAR_1->laddr);
 FUNC_3(VAR_1, VAR_0);
}
