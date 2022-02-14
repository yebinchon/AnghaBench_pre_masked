
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int dummy; } ;
struct ch_sched_queue {int dummy; } ;
typedef enum sched_bind_type { ____Placeholder_sched_bind_type } sched_bind_type ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct port_info*,struct ch_sched_queue*) ;
 int FUNC_1 (struct port_info*,struct ch_sched_queue*) ;

__attribute__((used)) static int FUNC_2(struct port_info *VAR_2, void *VAR_3,
      enum sched_bind_type VAR_4, bool VAR_5)
{
 int VAR_6 = 0;

 if (!VAR_3)
  return -VAR_0;

 switch (VAR_4) {
 case 128: {
  struct ch_sched_queue *VAR_7 = (struct ch_sched_queue *)VAR_3;

  if (VAR_5)
   VAR_6 = FUNC_0(VAR_2, VAR_7);
  else
   VAR_6 = FUNC_1(VAR_2, VAR_7);
  break;
 }
 default:
  VAR_6 = -VAR_1;
  break;
 }

 return VAR_6;
}
