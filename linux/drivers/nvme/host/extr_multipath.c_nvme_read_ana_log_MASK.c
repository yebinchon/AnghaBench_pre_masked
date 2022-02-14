
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvme_ctrl {int anatt; int ana_lock; int anatt_timer; int device; int ana_log_size; int ana_log_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nvme_ctrl*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct nvme_ctrl*,scalar_t__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct nvme_ctrl *VAR_5)
{
 u32 VAR_6 = 0;
 int VAR_7;

 FUNC_3(&VAR_5->ana_lock);
 VAR_7 = FUNC_5(VAR_5, VAR_2, VAR_1, 0,
   VAR_5->ana_log_buf, VAR_5->ana_log_size, 0);
 if (VAR_7) {
  FUNC_1(VAR_5->device, "Failed to get ANA log: %d\n", VAR_7);
  goto out_unlock;
 }

 VAR_7 = FUNC_6(VAR_5, &VAR_6,
   VAR_4);
 if (VAR_7)
  goto out_unlock;
 if (VAR_6)
  FUNC_2(&VAR_5->anatt_timer, VAR_5->anatt * VAR_0 * 2 + VAR_3);
 else
  FUNC_0(&VAR_5->anatt_timer);
out_unlock:
 FUNC_4(&VAR_5->ana_lock);
 return VAR_7;
}
