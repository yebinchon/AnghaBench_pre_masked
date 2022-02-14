
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_recover {int nodes_count; struct dlm_recover* nodes; scalar_t__ seq; } ;
struct dlm_ls {int ls_recoverd_task; int ls_flags; int ls_recover_lock; struct dlm_recover* ls_recover_args; scalar_t__ ls_recover_seq; int ls_name; } ;
struct dlm_config_node {int nodes_count; struct dlm_config_node* nodes; scalar_t__ seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct dlm_recover**,int*) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_recover*) ;
 struct dlm_recover* FUNC_3 (int,int ) ;
 int FUNC_4 (struct dlm_ls*,char*,...) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct dlm_ls *VAR_4)
{
 struct dlm_recover *VAR_5, *VAR_6;
 struct dlm_config_node *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_4->ls_name, &VAR_7, &VAR_9);
 if (VAR_8 < 0)
  goto fail_rv;

 FUNC_6(&VAR_4->ls_recover_lock);



 if (!FUNC_1(VAR_4)) {
  FUNC_7(&VAR_4->ls_recover_lock);
  FUNC_4(VAR_4, "start ignored: lockspace running");
  VAR_8 = -VAR_0;
  goto fail;
 }

 VAR_5->nodes = VAR_7;
 VAR_5->nodes_count = VAR_9;
 VAR_5->seq = ++VAR_4->ls_recover_seq;
 VAR_6 = VAR_4->ls_recover_args;
 VAR_4->ls_recover_args = VAR_5;
 FUNC_7(&VAR_4->ls_recover_lock);

 if (VAR_6) {
  FUNC_4(VAR_4, "unused recovery %llx %d",
     (unsigned long long)VAR_6->seq, VAR_6->nodes_count);
  FUNC_2(VAR_6->nodes);
  FUNC_2(VAR_6);
 }

 FUNC_5(VAR_3, &VAR_4->ls_flags);
 FUNC_8(VAR_4->ls_recoverd_task);
 return 0;

 fail:
 FUNC_2(VAR_7);
 fail_rv:
 FUNC_2(VAR_5);
 return VAR_8;
}
