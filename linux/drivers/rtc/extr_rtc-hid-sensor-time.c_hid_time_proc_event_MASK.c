
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_time_state {int comp_last_time; int lock_last_time; int time_buf; int last_time; } ;
struct hid_sensor_hub_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct hid_time_state* FUNC_1 (void*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hid_sensor_hub_device *VAR_0,
    unsigned VAR_1, void *VAR_2)
{
 unsigned long VAR_3;
 struct hid_time_state *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_4->lock_last_time, VAR_3);
 VAR_4->last_time = VAR_4->time_buf;
 FUNC_3(&VAR_4->lock_last_time, VAR_3);
 FUNC_0(&VAR_4->comp_last_time);
 return 0;
}
