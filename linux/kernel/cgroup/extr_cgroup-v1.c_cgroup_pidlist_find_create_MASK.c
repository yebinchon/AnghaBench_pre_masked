
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int ns; } ;
struct cgroup_pidlist {int links; struct cgroup* owner; TYPE_1__ key; int destroy_dwork; } ;
struct cgroup {int pidlists; int pidlist_mutex; } ;
typedef enum cgroup_filetype { ____Placeholder_cgroup_filetype } cgroup_filetype ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct cgroup_pidlist* FUNC_1 (struct cgroup*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct cgroup_pidlist* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static struct cgroup_pidlist *FUNC_7(struct cgroup *VAR_3,
      enum cgroup_filetype VAR_4)
{
 struct cgroup_pidlist *VAR_5;

 FUNC_5(&VAR_3->pidlist_mutex);

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_3(sizeof(struct cgroup_pidlist), VAR_0);
 if (!VAR_5)
  return VAR_5;

 FUNC_0(&VAR_5->destroy_dwork, VAR_1);
 VAR_5->key.type = VAR_4;

 VAR_5->key.ns = FUNC_2(FUNC_6(VAR_2));
 VAR_5->owner = VAR_3;
 FUNC_4(&VAR_5->links, &VAR_3->pidlists);
 return VAR_5;
}
