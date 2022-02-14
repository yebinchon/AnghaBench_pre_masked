
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int flags; TYPE_1__* local; int ap; int list; } ;
struct prism2_hostapd_param {int sta_addr; } ;
struct ap_data {int sta_table_lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ap_data*,struct sta_info*) ;
 struct sta_info* FUNC_1 (struct ap_data*,int ) ;
 int FUNC_2 (struct ap_data*,struct sta_info*) ;
 int FUNC_3 (int ,struct sta_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ap_data *VAR_2,
         struct prism2_hostapd_param *VAR_3)
{
 struct sta_info *VAR_4;

 FUNC_5(&VAR_2->sta_table_lock);
 VAR_4 = FUNC_1(VAR_2, VAR_3->sta_addr);
 if (VAR_4) {
  FUNC_2(VAR_2, VAR_4);
  FUNC_4(&VAR_4->list);
 }
 FUNC_6(&VAR_2->sta_table_lock);

 if (!VAR_4)
  return -VAR_0;

 if ((VAR_4->flags & VAR_1) && !VAR_4->ap && VAR_4->local)
  FUNC_3(VAR_4->local->dev, VAR_4);
 FUNC_0(VAR_2, VAR_4);

 return 0;
}
