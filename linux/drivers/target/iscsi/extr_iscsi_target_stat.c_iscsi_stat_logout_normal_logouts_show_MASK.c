
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_logout_stats {int normal_logouts; } ;
struct iscsi_tiqn {struct iscsi_logout_stats logout_stats; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iscsi_tiqn* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
  char *VAR_2)
{
 struct iscsi_tiqn *VAR_3 = FUNC_0(VAR_1);
 struct iscsi_logout_stats *VAR_4 = &VAR_3->logout_stats;

 return FUNC_1(VAR_2, VAR_0, "%u\n", VAR_4->normal_logouts);
}
