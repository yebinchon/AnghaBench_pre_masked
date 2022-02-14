
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {scalar_t__ supported_classes; int list; int unit_list; int status; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_port *VAR_1, struct list_head *VAR_2)
{
 if (!(FUNC_1(&VAR_1->status) & VAR_0))
  return;

 FUNC_0(VAR_0, &VAR_1->status);

 if ((VAR_1->supported_classes != 0) ||
     !FUNC_2(&VAR_1->unit_list))
  return;

 FUNC_3(&VAR_1->list, VAR_2);
}
