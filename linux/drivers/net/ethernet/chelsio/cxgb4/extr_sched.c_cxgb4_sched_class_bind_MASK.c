
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct port_info {int dummy; } ;
struct net_device {int dummy; } ;
struct ch_sched_queue {scalar_t__ class; } ;
typedef enum sched_bind_type { ____Placeholder_sched_bind_type } sched_bind_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 int FUNC_0 (struct net_device*) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct port_info*,void*,int,int) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;

int FUNC_4(struct net_device *VAR_3, void *VAR_4,
      enum sched_bind_type VAR_5)
{
 struct port_info *VAR_6 = FUNC_1(VAR_3);
 u8 VAR_7;

 if (!FUNC_0(VAR_3))
  return -VAR_1;

 if (!VAR_4)
  return -VAR_0;

 switch (VAR_5) {
 case 128: {
  struct ch_sched_queue *VAR_8 = (struct ch_sched_queue *)VAR_4;

  VAR_7 = VAR_8->class;
  break;
 }
 default:
  return -VAR_1;
 }

 if (!FUNC_3(VAR_3, VAR_7))
  return -VAR_0;

 if (VAR_7 == VAR_2)
  return -VAR_1;

 return FUNC_2(VAR_6, VAR_4, VAR_5, 1);

}
