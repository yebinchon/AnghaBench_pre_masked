
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct port_info {int dummy; } ;
struct net_device {int dummy; } ;
struct ch_sched_queue {int class; } ;
typedef enum sched_bind_type { ____Placeholder_sched_bind_type } sched_bind_type ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct net_device*) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct port_info*,void*,int,int) ;
 int FUNC_3 (struct net_device*,int ) ;

int FUNC_4(struct net_device *VAR_2, void *VAR_3,
        enum sched_bind_type VAR_4)
{
 struct port_info *VAR_5 = FUNC_1(VAR_2);
 u8 VAR_6;

 if (!FUNC_0(VAR_2))
  return -VAR_1;

 if (!VAR_3)
  return -VAR_0;

 switch (VAR_4) {
 case 128: {
  struct ch_sched_queue *VAR_7 = (struct ch_sched_queue *)VAR_3;

  VAR_6 = VAR_7->class;
  break;
 }
 default:
  return -VAR_1;
 }

 if (!FUNC_3(VAR_2, VAR_6))
  return -VAR_0;

 return FUNC_2(VAR_5, VAR_3, VAR_4, 0);
}
