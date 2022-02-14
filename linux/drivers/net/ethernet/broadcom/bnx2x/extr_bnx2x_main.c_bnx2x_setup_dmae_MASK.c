
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dmae_lock; scalar_t__ dmae_ready; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_0)
{
 VAR_0->dmae_ready = 0;
 FUNC_0(&VAR_0->dmae_lock);
}
