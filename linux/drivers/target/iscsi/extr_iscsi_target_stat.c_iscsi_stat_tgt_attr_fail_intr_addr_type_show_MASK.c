
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_login_stats {scalar_t__ last_intr_fail_ip_family; int lock; } ;
struct iscsi_tiqn {struct iscsi_login_stats login_stats; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct iscsi_tiqn* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_2,
  char *VAR_3)
{
 struct iscsi_tiqn *VAR_4 = FUNC_0(VAR_2);
 struct iscsi_login_stats *VAR_5 = &VAR_4->login_stats;
 int VAR_6;

 FUNC_2(&VAR_5->lock);
 if (VAR_5->last_intr_fail_ip_family == VAR_0)
  VAR_6 = FUNC_1(VAR_3, VAR_1, "ipv6\n");
 else
  VAR_6 = FUNC_1(VAR_3, VAR_1, "ipv4\n");
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}
