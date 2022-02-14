
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_node_addr {size_t addr_count; struct dlm_node_addr** addr; int list; } ;
struct connection {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*,int,int,int) ;
 int VAR_1 ;
 struct dlm_node_addr* FUNC_2 (int) ;
 int FUNC_3 (struct dlm_node_addr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 struct connection* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(int VAR_2)
{
 struct connection *VAR_3;
 struct dlm_node_addr *VAR_4;

 FUNC_5("closing connection to node %d", VAR_2);
 VAR_3 = FUNC_6(VAR_2, 0);
 if (VAR_3) {
  FUNC_7(VAR_0, &VAR_3->flags);
  FUNC_1(VAR_3, 1, 1, 1);
  FUNC_0(VAR_3);
 }

 FUNC_8(&VAR_1);
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_4(&VAR_4->list);
  while (VAR_4->addr_count--)
   FUNC_3(VAR_4->addr[VAR_4->addr_count]);
  FUNC_3(VAR_4);
 }
 FUNC_9(&VAR_1);

 return 0;
}
