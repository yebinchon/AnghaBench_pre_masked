
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_ooo_cmdsn {int ooo_list; } ;


 int FUNC_0 (int ,struct iscsi_ooo_cmdsn*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(
 struct iscsi_session *VAR_1,
 struct iscsi_ooo_cmdsn *VAR_2)
{
 FUNC_1(&VAR_2->ooo_list);
 FUNC_0(VAR_0, VAR_2);
}
