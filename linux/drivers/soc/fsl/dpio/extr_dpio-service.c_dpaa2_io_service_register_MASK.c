
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u16 ;
struct dpaa2_io_notification_ctx {scalar_t__ qman64; scalar_t__ id; scalar_t__ is_cdan; int node; struct dpaa2_io* dpio_private; int dpio_id; int desired_cpu; } ;
struct TYPE_2__ {int dpio_id; } ;
struct dpaa2_io {int swp; int lock_notifications; int notifications; TYPE_1__ dpio_desc; int dev; } ;
struct device_link {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_link* FUNC_0 (struct device*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 struct dpaa2_io* FUNC_3 (struct dpaa2_io*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct dpaa2_io *VAR_3,
         struct dpaa2_io_notification_ctx *VAR_4,
         struct device *VAR_5)
{
 struct device_link *VAR_6;
 unsigned long VAR_7;

 VAR_3 = FUNC_3(VAR_3, VAR_4->desired_cpu);
 if (!VAR_3)
  return -VAR_2;

 VAR_6 = FUNC_0(VAR_5, VAR_3->dev, VAR_0);
 if (!VAR_6)
  return -VAR_1;

 VAR_4->dpio_id = VAR_3->dpio_desc.dpio_id;
 VAR_4->qman64 = (u64)(uintptr_t)VAR_4;
 VAR_4->dpio_private = VAR_3;
 FUNC_4(&VAR_3->lock_notifications, VAR_7);
 FUNC_1(&VAR_4->node, &VAR_3->notifications);
 FUNC_5(&VAR_3->lock_notifications, VAR_7);


 if (VAR_4->is_cdan)
  return FUNC_2(VAR_3->swp,
        (u16)VAR_4->id,
        VAR_4->qman64);
 return 0;
}
