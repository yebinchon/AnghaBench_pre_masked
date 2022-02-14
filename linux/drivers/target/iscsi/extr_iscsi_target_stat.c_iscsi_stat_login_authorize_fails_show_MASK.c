
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_login_stats {int authorize_fails; int lock; } ;
struct iscsi_tiqn {struct iscsi_login_stats login_stats; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iscsi_tiqn* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
  char *VAR_2)
{
 struct iscsi_tiqn *VAR_3 = FUNC_0(VAR_1);
 struct iscsi_login_stats *VAR_4 = &VAR_3->login_stats;
 ssize_t VAR_5;

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_1(VAR_2, VAR_0, "%u\n", VAR_4->authorize_fails);
 FUNC_3(&VAR_4->lock);

 return VAR_5;
}
