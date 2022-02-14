
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct befs_btree_node {scalar_t__ od_node; } ;
typedef int befs_btree_nodehead ;



__attribute__((used)) static char *
FUNC_0(struct befs_btree_node *VAR_0)
{
 return (char *) ((void *) VAR_0->od_node + sizeof (befs_btree_nodehead));
}
