
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * rtnl_link_ops; } ;
struct can_priv {int data_bitrate_const_cnt; int data_bitrate_const; int bitrate_const_cnt; int bitrate_const; int do_set_termination; int termination_const; int termination_const_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct can_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_2)
{
 struct can_priv *VAR_3 = FUNC_0(VAR_2);





 if ((!VAR_3->termination_const != !VAR_3->termination_const_cnt) ||
     (!VAR_3->termination_const != !VAR_3->do_set_termination))
  return -VAR_0;

 if (!VAR_3->bitrate_const != !VAR_3->bitrate_const_cnt)
  return -VAR_0;

 if (!VAR_3->data_bitrate_const != !VAR_3->data_bitrate_const_cnt)
  return -VAR_0;

 VAR_2->rtnl_link_ops = &VAR_1;
 FUNC_1(VAR_2);

 return FUNC_2(VAR_2);
}
