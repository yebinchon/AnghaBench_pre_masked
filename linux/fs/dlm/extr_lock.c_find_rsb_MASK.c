
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_rsb {int dummy; } ;
struct dlm_ls {int ls_rsbtbl_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*,int) ;
 scalar_t__ FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*,char*,int,int,int,int,int,unsigned int,struct dlm_rsb**) ;
 int FUNC_3 (struct dlm_ls*,char*,int,int,int,int,int,unsigned int,struct dlm_rsb**) ;
 int FUNC_4 (char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct dlm_ls *VAR_2, char *VAR_3, int VAR_4, int VAR_5,
      unsigned int VAR_6, struct dlm_rsb **VAR_7)
{
 uint32_t VAR_8, VAR_9;
 int VAR_10;

 if (VAR_4 > VAR_0)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_3, VAR_4, 0);
 VAR_9 = VAR_8 & (VAR_2->ls_rsbtbl_size - 1);

 VAR_10 = FUNC_0(VAR_2, VAR_8);

 if (FUNC_1(VAR_2))
  return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_8, VAR_9, VAR_10,
          VAR_5, VAR_6, VAR_7);
 else
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_8, VAR_9, VAR_10,
          VAR_5, VAR_6, VAR_7);
}
