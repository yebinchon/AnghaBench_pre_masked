
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int FUNC_0 (char*,int,struct dentry*,int *) ;
 struct dentry* FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int *,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct dentry *VAR_9 = FUNC_1("dma-api", ((void*)0));

 FUNC_0("disabled", 0444, VAR_9, &VAR_3);
 FUNC_3("error_count", 0444, VAR_9, &VAR_1);
 FUNC_3("all_errors", 0644, VAR_9, &VAR_7);
 FUNC_3("num_errors", 0644, VAR_9, &VAR_8);
 FUNC_3("num_free_entries", 0444, VAR_9, &VAR_6);
 FUNC_3("min_free_entries", 0444, VAR_9, &VAR_4);
 FUNC_3("nr_total_entries", 0444, VAR_9, &VAR_5);
 FUNC_2("driver_filter", 0644, VAR_9, ((void*)0), &VAR_2);
 FUNC_2("dump", 0444, VAR_9, ((void*)0), &VAR_0);
}
