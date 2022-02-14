
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int dummy; } ;
struct dlm_space {struct config_group group; scalar_t__ members_count; int members_lock; int members; struct config_group ns_group; } ;
struct dlm_nodes {struct config_group group; scalar_t__ members_count; int members_lock; int members; struct config_group ns_group; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct config_group*,char const*,int *) ;
 int FUNC_3 (struct config_group*,struct config_group*) ;
 int FUNC_4 (struct dlm_space*) ;
 struct dlm_space* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct config_group *FUNC_7(struct config_group *VAR_4, const char *VAR_5)
{
 struct dlm_space *VAR_6 = ((void*)0);
 struct dlm_nodes *VAR_7 = ((void*)0);

 VAR_6 = FUNC_5(sizeof(struct dlm_space), VAR_1);
 VAR_7 = FUNC_5(sizeof(struct dlm_nodes), VAR_1);

 if (!VAR_6 || !VAR_7)
  goto fail;

 FUNC_2(&VAR_6->group, VAR_5, &VAR_3);

 FUNC_2(&VAR_7->ns_group, "nodes", &VAR_2);
 FUNC_3(&VAR_7->ns_group, &VAR_6->group);

 FUNC_1(&VAR_6->members);
 FUNC_6(&VAR_6->members_lock);
 VAR_6->members_count = 0;
 return &VAR_6->group;

 fail:
 FUNC_4(VAR_6);
 FUNC_4(VAR_7);
 return FUNC_0(-VAR_0);
}
