
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc_mqprio_qopt {int num_tc; int hw; } ;
struct net_device {int real_num_tx_queues; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, enum tc_setup_type VAR_5,
     void *VAR_6)
{
 struct tc_mqprio_qopt *VAR_7 = VAR_6;
 u8 VAR_8;
 int VAR_9;


 FUNC_0();

 if (VAR_5 != VAR_3)
  return -VAR_1;

 VAR_7->hw = VAR_2;
 VAR_8 = VAR_7->num_tc;


 if ((VAR_4->real_num_tx_queues <= 1) ||
     (VAR_4->real_num_tx_queues < VAR_8))
  return -VAR_0;


 if (VAR_8) {
  FUNC_2(VAR_4, VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   FUNC_3(VAR_4, VAR_9, 1, VAR_9);
 } else {
  FUNC_1(VAR_4);
 }

 return 0;
}
