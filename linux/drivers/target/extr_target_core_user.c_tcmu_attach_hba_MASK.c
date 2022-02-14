
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcmu_hba {int host_id; } ;
struct se_hba {struct tcmu_hba* hba_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcmu_hba* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct se_hba *VAR_2, u32 VAR_3)
{
 struct tcmu_hba *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct tcmu_hba), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->host_id = VAR_3;
 VAR_2->hba_ptr = VAR_4;

 return 0;
}
