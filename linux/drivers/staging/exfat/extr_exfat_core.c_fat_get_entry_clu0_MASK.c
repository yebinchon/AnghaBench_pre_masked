
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dos_dentry_t {int start_clu_lo; int start_clu_hi; } ;
struct dentry_t {int dummy; } ;


 int FUNC_0 (int ) ;

u32 FUNC_1(struct dentry_t *VAR_0)
{
 struct dos_dentry_t *VAR_1 = (struct dos_dentry_t *)VAR_0;

 return ((u32)FUNC_0(VAR_1->start_clu_hi) << 16) |
  FUNC_0(VAR_1->start_clu_lo);
}
