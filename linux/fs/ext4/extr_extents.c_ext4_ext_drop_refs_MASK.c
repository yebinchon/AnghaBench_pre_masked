
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_ext_path {int p_depth; int * p_bh; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ext4_ext_path *VAR_0)
{
 int VAR_1, VAR_2;

 if (!VAR_0)
  return;
 VAR_1 = VAR_0->p_depth;
 for (VAR_2 = 0; VAR_2 <= VAR_1; VAR_2++, VAR_0++)
  if (VAR_0->p_bh) {
   FUNC_0(VAR_0->p_bh);
   VAR_0->p_bh = ((void*)0);
  }
}
