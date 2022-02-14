
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int flags; int ap; int addr; int list; } ;
struct net_device {int dummy; } ;
struct ap_data {int sta_table_lock; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ap_data*,struct sta_info*) ;
 struct sta_info* FUNC_1 (struct ap_data*,int *) ;
 int FUNC_2 (struct ap_data*,struct sta_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,struct sta_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,int,char*,int,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct ap_data *VAR_5, struct net_device *VAR_6, u8 *VAR_7)
{
 struct sta_info *VAR_8;
 __le16 VAR_9;

 FUNC_7(&VAR_5->sta_table_lock);
 VAR_8 = FUNC_1(VAR_5, VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_5, VAR_8);
  FUNC_5(&VAR_8->list);
 }
 FUNC_8(&VAR_5->sta_table_lock);

 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_3);
 FUNC_6(VAR_6, VAR_1 | VAR_2,
    (char *) &VAR_9, 2, VAR_8->addr, 0);

 if ((VAR_8->flags & VAR_4) && !VAR_8->ap)
  FUNC_4(VAR_6, VAR_8);

 FUNC_0(VAR_5, VAR_8);

 return 0;
}
