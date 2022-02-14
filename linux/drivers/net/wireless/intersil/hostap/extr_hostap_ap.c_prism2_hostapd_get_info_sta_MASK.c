
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int last_rx; int users; } ;
struct TYPE_3__ {int inactive_sec; } ;
struct TYPE_4__ {TYPE_1__ get_info_sta; } ;
struct prism2_hostapd_param {TYPE_2__ u; int sta_addr; } ;
struct ap_data {int sta_table_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sta_info* FUNC_0 (struct ap_data*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ap_data *VAR_3,
           struct prism2_hostapd_param *VAR_4)
{
 struct sta_info *VAR_5;

 FUNC_3(&VAR_3->sta_table_lock);
 VAR_5 = FUNC_0(VAR_3, VAR_4->sta_addr);
 if (VAR_5)
  FUNC_2(&VAR_5->users);
 FUNC_4(&VAR_3->sta_table_lock);

 if (!VAR_5)
  return -VAR_0;

 VAR_4->u.get_info_sta.inactive_sec = (VAR_2 - VAR_5->last_rx) / VAR_1;

 FUNC_1(&VAR_5->users);

 return 1;
}
