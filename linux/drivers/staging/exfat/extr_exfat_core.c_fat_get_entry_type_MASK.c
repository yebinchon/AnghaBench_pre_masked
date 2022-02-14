
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dos_dentry_t {int* name; int attr; } ;
struct dentry_t {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

u32 FUNC_0(struct dentry_t *VAR_9)
{
 struct dos_dentry_t *VAR_10 = (struct dos_dentry_t *)VAR_9;

 if (*(VAR_10->name) == 0x0)
  return VAR_7;

 else if (*(VAR_10->name) == 0xE5)
  return VAR_3;

 else if (VAR_10->attr == VAR_0)
  return VAR_5;

 else if ((VAR_10->attr & (VAR_1 | VAR_2)) == VAR_2)
  return VAR_8;

 else if ((VAR_10->attr & (VAR_1 | VAR_2)) == VAR_1)
  return VAR_4;

 return VAR_6;
}
