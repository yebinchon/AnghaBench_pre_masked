
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct name_dentry_t {int flags; scalar_t__ unicode_0_14; } ;
struct dentry_t {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry_t*,int ) ;

void FUNC_2(struct name_dentry_t *VAR_1, u16 *VAR_2)
{
 int VAR_3;

 FUNC_1((struct dentry_t *)VAR_1, VAR_0);
 VAR_1->flags = 0x0;

 for (VAR_3 = 0; VAR_3 < 30; VAR_3++, VAR_3++) {
  FUNC_0(VAR_1->unicode_0_14 + VAR_3, *VAR_2);
  if (*VAR_2 == 0x0)
   break;
  VAR_2++;
 }
}
