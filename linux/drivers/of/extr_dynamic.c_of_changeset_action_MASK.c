
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int name; } ;
struct of_changeset_entry {unsigned long action; int node; int old_prop; struct property* prop; int np; } ;
struct of_changeset {int entries; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct of_changeset_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct device_node*,int ,int *) ;
 int FUNC_3 (struct device_node*) ;

int FUNC_4(struct of_changeset *VAR_3, unsigned long VAR_4,
  struct device_node *VAR_5, struct property *VAR_6)
{
 struct of_changeset_entry *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;


 VAR_7->action = VAR_4;
 VAR_7->np = FUNC_3(VAR_5);
 VAR_7->prop = VAR_6;

 if (VAR_4 == VAR_2 && VAR_6)
  VAR_7->old_prop = FUNC_2(VAR_5, VAR_6->name, ((void*)0));


 FUNC_1(&VAR_7->node, &VAR_3->entries);
 return 0;
}
