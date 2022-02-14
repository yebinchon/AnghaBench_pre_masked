
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_login_stats {int lock; scalar_t__ last_fail_time; } ;
struct iscsi_tiqn {struct iscsi_login_stats login_stats; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iscsi_tiqn* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_3,
  char *VAR_4)
{
 struct iscsi_tiqn *VAR_5 = FUNC_0(VAR_3);
 struct iscsi_login_stats *VAR_6 = &VAR_5->login_stats;
 u32 VAR_7;

 FUNC_2(&VAR_6->lock);
 VAR_7 = VAR_6->last_fail_time ?
   (u32)(((u32)VAR_6->last_fail_time -
    VAR_1) * 100 / VAR_0) : 0;
 FUNC_3(&VAR_6->lock);

 return FUNC_1(VAR_4, VAR_2, "%u\n", VAR_7);
}
