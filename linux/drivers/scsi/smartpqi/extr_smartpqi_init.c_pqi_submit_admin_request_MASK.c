
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_general_admin_request {int dummy; } ;
struct pqi_admin_queues {int iq_pi_copy; int iq_pi; void* iq_element_array; } ;
struct pqi_ctrl_info {struct pqi_admin_queues admin_queues; } ;
typedef int pqi_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct pqi_general_admin_request*,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct pqi_ctrl_info *VAR_2,
 struct pqi_general_admin_request *VAR_3)
{
 struct pqi_admin_queues *VAR_4;
 void *VAR_5;
 pqi_index_t VAR_6;

 VAR_4 = &VAR_2->admin_queues;
 VAR_6 = VAR_4->iq_pi_copy;

 VAR_5 = VAR_4->iq_element_array +
  (VAR_6 * VAR_0);

 FUNC_0(VAR_5, VAR_3, sizeof(*VAR_3));

 VAR_6 = (VAR_6 + 1) % VAR_1;
 VAR_4->iq_pi_copy = VAR_6;





 FUNC_1(VAR_6, VAR_4->iq_pi);
}
