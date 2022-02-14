
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_common {int res_id; int state; } ;
struct res_qp {int local_qpn; struct res_common com; int ref_count; int mcg_spl; int mcg_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 struct res_qp* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct res_common *FUNC_4(int VAR_2)
{
 struct res_qp *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->com.res_id = VAR_2;
 VAR_3->com.state = VAR_1;
 VAR_3->local_qpn = VAR_2;
 FUNC_0(&VAR_3->mcg_list);
 FUNC_3(&VAR_3->mcg_spl);
 FUNC_1(&VAR_3->ref_count, 0);

 return &VAR_3->com;
}
