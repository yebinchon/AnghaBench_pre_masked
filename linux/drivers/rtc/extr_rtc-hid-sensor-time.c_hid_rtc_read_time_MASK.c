
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct TYPE_3__ {int hsdev; } ;
struct hid_time_state {int lock_last_time; struct rtc_time last_time; int comp_last_time; TYPE_2__* info; TYPE_1__ common_attributes; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int report_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hid_time_state* FUNC_0 (struct device*) ;
 int * VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, struct rtc_time *VAR_6)
{
 unsigned long VAR_7;
 struct hid_time_state *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;

 FUNC_1(&VAR_8->comp_last_time);

 FUNC_2(VAR_8->common_attributes.hsdev,
   VAR_1, VAR_4[0],
   VAR_8->info[0].report_id, VAR_3, 0);

 VAR_9 = FUNC_5(
   &VAR_8->comp_last_time, VAR_2*6);
 if (VAR_9 > 0) {

  FUNC_3(&VAR_8->lock_last_time, VAR_7);
  *VAR_6 = VAR_8->last_time;
  FUNC_4(&VAR_8->lock_last_time, VAR_7);
  return 0;
 }
 if (!VAR_9)
  return -VAR_0;
 return VAR_9;
}
