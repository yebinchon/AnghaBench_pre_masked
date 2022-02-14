
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backref_node {int dummy; } ;
struct backref_cache {int nr_nodes; } ;


 int FUNC_0 (struct backref_node*) ;

__attribute__((used)) static void FUNC_1(struct backref_cache *VAR_0,
         struct backref_node *VAR_1)
{
 if (VAR_1) {
  VAR_0->nr_nodes--;
  FUNC_0(VAR_1);
 }
}
