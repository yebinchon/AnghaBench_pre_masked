
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct dos_dentry_t {scalar_t__ attr; } ;
struct dentry_t {int dummy; } ;



void FUNC_0(struct dentry_t *VAR_0, u32 VAR_1)
{
 struct dos_dentry_t *VAR_2 = (struct dos_dentry_t *)VAR_0;

 VAR_2->attr = (u8)VAR_1;
}
