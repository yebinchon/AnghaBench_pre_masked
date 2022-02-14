
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dos_dentry_t {int start_clu_hi; int start_clu_lo; } ;
struct dentry_t {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct dentry_t *VAR_0, u32 VAR_1)
{
 struct dos_dentry_t *VAR_2 = (struct dos_dentry_t *)VAR_0;

 FUNC_1(VAR_2->start_clu_lo, FUNC_0(VAR_1));
 FUNC_1(VAR_2->start_clu_hi, FUNC_0(VAR_1 >> 16));
}
