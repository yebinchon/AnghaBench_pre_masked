
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dpaa2_io_notification_ctx {int node; scalar_t__ id; scalar_t__ is_cdan; struct dpaa2_io* dpio_private; } ;
struct dpaa2_io {int lock_notifications; int swp; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct dpaa2_io *VAR_0,
     struct dpaa2_io_notification_ctx *VAR_1,
     struct device *VAR_2)
{
 struct dpaa2_io *VAR_3 = VAR_1->dpio_private;
 unsigned long VAR_4;

 if (VAR_1->is_cdan)
  FUNC_1(VAR_3->swp, (u16)VAR_1->id);

 FUNC_2(&VAR_3->lock_notifications, VAR_4);
 FUNC_0(&VAR_1->node);
 FUNC_3(&VAR_3->lock_notifications, VAR_4);

}
