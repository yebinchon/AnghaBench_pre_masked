
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knav_range_info {int num_queues; int flags; struct knav_acc_channel* acc; struct knav_device* kdev; } ;
struct knav_device {int dummy; } ;
struct knav_acc_channel {scalar_t__ list_index; } ;
typedef enum knav_acc_result { ____Placeholder_knav_acc_result } knav_acc_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct knav_device*,struct knav_range_info*,int) ;
 int FUNC_1 (struct knav_device*,struct knav_range_info*,int) ;

__attribute__((used)) static int FUNC_2(struct knav_range_info *VAR_3)
{
 struct knav_device *VAR_4 = VAR_3->kdev;
 struct knav_acc_channel *VAR_5;
 enum knav_acc_result VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->num_queues; VAR_7++) {
  VAR_5 = VAR_3->acc + VAR_7;

  FUNC_1(VAR_4, VAR_3, VAR_7);
  VAR_5->list_index = 0;
  VAR_6 = FUNC_0(VAR_4, VAR_3, VAR_7);

  if (VAR_6 != VAR_0)
   return -VAR_1;

  if (VAR_3->flags & VAR_2)
   return 0;
 }
 return 0;
}
