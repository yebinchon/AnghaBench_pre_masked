
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_open_node {int refcnt; } ;
struct kernfs_open_file {int list; } ;
struct TYPE_2__ {struct kernfs_open_node* open; } ;
struct kernfs_node {TYPE_1__ attr; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct kernfs_open_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct kernfs_node *VAR_2,
     struct kernfs_open_file *VAR_3)
{
 struct kernfs_open_node *VAR_4 = VAR_2->attr.open;
 unsigned long VAR_5;

 FUNC_3(&VAR_0);
 FUNC_5(&VAR_1, VAR_5);

 if (VAR_3)
  FUNC_2(&VAR_3->list);

 if (FUNC_0(&VAR_4->refcnt))
  VAR_2->attr.open = ((void*)0);
 else
  VAR_4 = ((void*)0);

 FUNC_6(&VAR_1, VAR_5);
 FUNC_4(&VAR_0);

 FUNC_1(VAR_4);
}
