
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p54_group_address_table {int mac_list; void* num_address; void* filter_enable; } ;
struct p54_common {int filter_flags; int mc_maclist_num; int mc_maclist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct sk_buff* FUNC_3 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_4 (struct p54_common*,struct sk_buff*) ;
 struct p54_group_address_table* FUNC_5 (struct sk_buff*,int) ;

int FUNC_6(struct p54_common *VAR_6)
{
 struct p54_group_address_table *VAR_7;
 struct sk_buff *VAR_8;
 bool VAR_9 = 0;

 VAR_8 = FUNC_3(VAR_6, VAR_5, sizeof(*VAR_7),
       VAR_4, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_8, sizeof(*VAR_7));

 VAR_9 = !(VAR_6->filter_flags & VAR_1) &&
      (VAR_6->mc_maclist_num > 0 &&
       VAR_6->mc_maclist_num <= VAR_3);

 if (VAR_9) {
  VAR_7->filter_enable = FUNC_0(1);
  VAR_7->num_address = FUNC_0(VAR_6->mc_maclist_num);
  FUNC_1(VAR_7->mac_list, VAR_6->mc_maclist, sizeof(VAR_7->mac_list));
 } else {
  VAR_7->filter_enable = FUNC_0(0);
  VAR_7->num_address = FUNC_0(0);
  FUNC_2(VAR_7->mac_list, 0, sizeof(VAR_7->mac_list));
 }

 FUNC_4(VAR_6, VAR_8);
 return 0;
}
