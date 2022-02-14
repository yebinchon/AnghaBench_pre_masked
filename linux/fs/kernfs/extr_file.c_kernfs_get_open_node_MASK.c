
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_open_node {int files; int poll; int event; int refcnt; } ;
struct kernfs_open_file {int list; } ;
struct TYPE_2__ {struct kernfs_open_node* open; } ;
struct kernfs_node {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct kernfs_open_node*) ;
 struct kernfs_open_node* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct kernfs_node *VAR_4,
    struct kernfs_open_file *VAR_5)
{
 struct kernfs_open_node *VAR_6, *VAR_7 = ((void*)0);

 retry:
 FUNC_7(&VAR_2);
 FUNC_9(&VAR_3);

 if (!VAR_4->attr.open && VAR_7) {
  VAR_4->attr.open = VAR_7;
  VAR_7 = ((void*)0);
 }

 VAR_6 = VAR_4->attr.open;
 if (VAR_6) {
  FUNC_1(&VAR_6->refcnt);
  FUNC_6(&VAR_5->list, &VAR_6->files);
 }

 FUNC_10(&VAR_3);
 FUNC_8(&VAR_2);

 if (VAR_6) {
  FUNC_4(VAR_7);
  return 0;
 }


 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_2(&VAR_7->refcnt, 0);
 FUNC_2(&VAR_7->event, 1);
 FUNC_3(&VAR_7->poll);
 FUNC_0(&VAR_7->files);
 goto retry;
}
