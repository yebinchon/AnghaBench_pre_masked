
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_global_id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct dlm_ls *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, VAR_0, "%u\n", VAR_1->ls_global_id);
}
