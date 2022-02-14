
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnxt {int hwrm_cmd_lock; } ;


 int FUNC_0 (struct bnxt*,void*,int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct bnxt *VAR_0, void *VAR_1, u32 VAR_2,
        int VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->hwrm_cmd_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 1);
 FUNC_2(&VAR_0->hwrm_cmd_lock);
 return VAR_4;
}
