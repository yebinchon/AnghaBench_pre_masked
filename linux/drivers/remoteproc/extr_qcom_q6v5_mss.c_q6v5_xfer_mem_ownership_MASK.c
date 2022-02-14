
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_scm_vmperm {int perm; int vmid; } ;
struct q6v5 {int need_mem_protection; } ;
typedef int phys_addr_t ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int*,struct qcom_scm_vmperm*,int) ;

__attribute__((used)) static int FUNC_3(struct q6v5 *VAR_5, int *VAR_6,
       bool VAR_7, phys_addr_t VAR_8,
       size_t VAR_9)
{
 struct qcom_scm_vmperm VAR_10;

 if (!VAR_5->need_mem_protection)
  return 0;
 if (VAR_7 && *VAR_6 == FUNC_1(VAR_3))
  return 0;
 if (!VAR_7 && *VAR_6 == FUNC_1(VAR_2))
  return 0;

 VAR_10.vmid = VAR_7 ? VAR_3 : VAR_2;
 VAR_10.perm = VAR_7 ? VAR_0 : VAR_1;

 return FUNC_2(VAR_8, FUNC_0(VAR_9, VAR_4),
       VAR_6, &VAR_10, 1);
}
