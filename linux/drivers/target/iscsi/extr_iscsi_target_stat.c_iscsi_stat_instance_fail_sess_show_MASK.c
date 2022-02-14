
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_sess_err_stats {int digest_errors; int cxn_timeout_errors; int pdu_format_errors; int lock; } ;
struct iscsi_tiqn {struct iscsi_sess_err_stats sess_err_stats; } ;
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
 struct iscsi_sess_err_stats *VAR_4 = &VAR_3->sess_err_stats;
 u32 VAR_5;

 FUNC_2(&VAR_4->lock);
 VAR_5 = (VAR_4->digest_errors +
     VAR_4->cxn_timeout_errors +
     VAR_4->pdu_format_errors);
 FUNC_3(&VAR_4->lock);

 return FUNC_1(VAR_2, VAR_0, "%u\n", VAR_5);
}
