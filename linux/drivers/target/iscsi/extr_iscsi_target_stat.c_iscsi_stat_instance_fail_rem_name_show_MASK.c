
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_sess_err_stats {char* last_sess_fail_rem_name; } ;
struct iscsi_tiqn {struct iscsi_sess_err_stats sess_err_stats; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 int VAR_1 ;
 struct iscsi_tiqn* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_2,
  char *VAR_3)
{
 struct iscsi_tiqn *VAR_4 = FUNC_0(VAR_2);
 struct iscsi_sess_err_stats *VAR_5 = &VAR_4->sess_err_stats;

 return FUNC_1(VAR_3, VAR_1, "%s\n",
   VAR_5->last_sess_fail_rem_name[0] ?
   VAR_5->last_sess_fail_rem_name : VAR_0);
}
