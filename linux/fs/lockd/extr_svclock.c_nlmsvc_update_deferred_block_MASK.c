
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_block {int b_granted; int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct nlm_block *VAR_2, int VAR_3)
{
 VAR_2->b_flags |= VAR_0;
 if (VAR_3 == 0)
  VAR_2->b_granted = 1;
 else
  VAR_2->b_flags |= VAR_1;
}
