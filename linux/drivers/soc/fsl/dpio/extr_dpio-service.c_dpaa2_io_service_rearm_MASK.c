
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dpaa2_io_notification_ctx {scalar_t__ id; scalar_t__ is_cdan; int desired_cpu; } ;
struct dpaa2_io {int lock_mgmt_cmd; int swp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct dpaa2_io* FUNC_2 (struct dpaa2_io*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct dpaa2_io*) ;

int FUNC_6(struct dpaa2_io *VAR_1,
      struct dpaa2_io_notification_ctx *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_1 = FUNC_2(VAR_1, VAR_2->desired_cpu);
 if (!FUNC_5(VAR_1))
  return -VAR_0;

 FUNC_3(&VAR_1->lock_mgmt_cmd, VAR_3);
 if (VAR_2->is_cdan)
  VAR_4 = FUNC_0(VAR_1->swp, (u16)VAR_2->id);
 else
  VAR_4 = FUNC_1(VAR_1->swp, VAR_2->id);
 FUNC_4(&VAR_1->lock_mgmt_cmd, VAR_3);

 return VAR_4;
}
