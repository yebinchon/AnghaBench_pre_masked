
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {char* ls_name; void* ls_debug_waiters_dentry; void* ls_debug_toss_dentry; void* ls_debug_all_dentry; void* ls_debug_locks_dentry; void* ls_debug_rsb_dentry; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int,int ,struct dlm_ls*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int VAR_8 ;

void FUNC_3(struct dlm_ls *VAR_9)
{
 char VAR_10[VAR_0 + 8];



 VAR_9->ls_debug_rsb_dentry = FUNC_0(VAR_9->ls_name,
            VAR_1 | VAR_2,
            VAR_3,
            VAR_9,
            &VAR_4);



 FUNC_1(VAR_10, 0, sizeof(VAR_10));
 FUNC_2(VAR_10, VAR_0 + 8, "%s_locks", VAR_9->ls_name);

 VAR_9->ls_debug_locks_dentry = FUNC_0(VAR_10,
       VAR_1 | VAR_2,
       VAR_3,
       VAR_9,
       &VAR_5);



 FUNC_1(VAR_10, 0, sizeof(VAR_10));
 FUNC_2(VAR_10, VAR_0 + 8, "%s_all", VAR_9->ls_name);

 VAR_9->ls_debug_all_dentry = FUNC_0(VAR_10,
            VAR_1 | VAR_2,
            VAR_3,
            VAR_9,
            &VAR_6);



 FUNC_1(VAR_10, 0, sizeof(VAR_10));
 FUNC_2(VAR_10, VAR_0 + 8, "%s_toss", VAR_9->ls_name);

 VAR_9->ls_debug_toss_dentry = FUNC_0(VAR_10,
             VAR_1 | VAR_2,
             VAR_3,
             VAR_9,
             &VAR_7);

 FUNC_1(VAR_10, 0, sizeof(VAR_10));
 FUNC_2(VAR_10, VAR_0 + 8, "%s_waiters", VAR_9->ls_name);

 VAR_9->ls_debug_waiters_dentry = FUNC_0(VAR_10,
         VAR_1 | VAR_2,
         VAR_3,
         VAR_9,
         &VAR_8);
}
