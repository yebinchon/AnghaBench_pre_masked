
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_ring_chain_node {struct hnae3_ring_chain_node* next; } ;


 int FUNC_0 (struct hnae3_ring_chain_node*) ;

__attribute__((used)) static void FUNC_1(struct hnae3_ring_chain_node *VAR_0)
{
 struct hnae3_ring_chain_node *VAR_1, *VAR_2;

 VAR_2 = VAR_0->next;

 while (VAR_2) {
  VAR_1 = VAR_2->next;
  FUNC_0(VAR_2);
  VAR_2 = VAR_1;
 }
}
