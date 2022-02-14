
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_general_admin_response {int dummy; } ;
struct pqi_admin_queues {int oq_ci_copy; int oq_ci; scalar_t__ oq_element_array; int oq_pi; } ;
struct pqi_ctrl_info {TYPE_1__* pci_dev; struct pqi_admin_queues admin_queues; } ;
typedef int pqi_index_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_6 ;
 int FUNC_1 (struct pqi_general_admin_response*,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct pqi_ctrl_info *VAR_7,
 struct pqi_general_admin_response *VAR_8)
{
 struct pqi_admin_queues *VAR_9;
 pqi_index_t VAR_10;
 pqi_index_t VAR_11;
 unsigned long VAR_12;

 VAR_9 = &VAR_7->admin_queues;
 VAR_11 = VAR_9->oq_ci_copy;

 VAR_12 = (VAR_4 * VAR_5) + VAR_6;

 while (1) {
  VAR_10 = FUNC_2(VAR_9->oq_pi);
  if (VAR_10 != VAR_11)
   break;
  if (FUNC_4(VAR_6, VAR_12)) {
   FUNC_0(&VAR_7->pci_dev->dev,
    "timed out waiting for admin response\n");
   return -VAR_1;
  }
  if (!FUNC_3(VAR_7))
   return -VAR_0;
  FUNC_5(1000, 2000);
 }

 FUNC_1(VAR_8, VAR_9->oq_element_array +
  (VAR_11 * VAR_2), sizeof(*VAR_8));

 VAR_11 = (VAR_11 + 1) % VAR_3;
 VAR_9->oq_ci_copy = VAR_11;
 FUNC_6(VAR_11, VAR_9->oq_ci);

 return 0;
}
