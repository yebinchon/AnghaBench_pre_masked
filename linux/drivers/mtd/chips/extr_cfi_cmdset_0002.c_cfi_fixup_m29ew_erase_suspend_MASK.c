
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cfi_private*) ;
 int FUNC_2 (struct map_info*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct map_info *VAR_0,
       unsigned long VAR_1)
{
 struct cfi_private *VAR_2 = VAR_0->fldrv_priv;

 if (FUNC_1(VAR_2))
  FUNC_2(VAR_0, FUNC_0(0xF0), VAR_1);
}
