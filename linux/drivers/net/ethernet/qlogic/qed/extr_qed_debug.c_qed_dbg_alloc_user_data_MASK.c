
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int dbg_user_info; } ;
struct dbg_tools_user_data {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;

enum dbg_status FUNC_1(struct qed_hwfn *VAR_3)
{
 VAR_3->dbg_user_info = FUNC_0(sizeof(struct dbg_tools_user_data),
     VAR_2);
 if (!VAR_3->dbg_user_info)
  return VAR_1;

 return VAR_0;
}
