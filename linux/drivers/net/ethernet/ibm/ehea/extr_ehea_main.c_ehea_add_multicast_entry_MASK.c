
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct ehea_port {TYPE_1__* mc_list; } ;
struct ehea_mc_list {int list; int macaddr; } ;
struct TYPE_2__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ehea_port*,int ,int ) ;
 int FUNC_2 (struct ehea_mc_list*) ;
 struct ehea_mc_list* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct ehea_port *VAR_3, u8 *VAR_4)
{
 struct ehea_mc_list *VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return;

 FUNC_0(&VAR_5->list);

 FUNC_5(&VAR_5->macaddr, VAR_4, VAR_0);

 VAR_6 = FUNC_1(VAR_3, VAR_5->macaddr,
      VAR_2);
 if (!VAR_6)
  FUNC_4(&VAR_5->list, &VAR_3->mc_list->list);
 else {
  FUNC_6("failed registering mcast MAC\n");
  FUNC_2(VAR_5);
 }
}
