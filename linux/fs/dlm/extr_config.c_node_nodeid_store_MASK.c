
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_node {int comm_seq; int nodeid; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 struct dlm_node* FUNC_0 (struct config_item*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char const*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_0, const char *VAR_1,
     size_t VAR_2)
{
 struct dlm_node *VAR_3 = FUNC_0(VAR_0);
 uint32_t VAR_4 = 0;
 int VAR_5 = FUNC_2(VAR_1, 0, &VAR_3->nodeid);

 if (VAR_5)
  return VAR_5;
 FUNC_1(VAR_3->nodeid, &VAR_4);
 VAR_3->comm_seq = VAR_4;
 return VAR_2;
}
