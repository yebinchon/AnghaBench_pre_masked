
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_info {scalar_t__ state; void* remote; void* local; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fm10k_mbx_info*) ;

__attribute__((used)) static void FUNC_1(struct fm10k_mbx_info *VAR_4)
{

 FUNC_0(VAR_4);


 VAR_4->local = VAR_0;
 VAR_4->remote = VAR_0;


 if (VAR_4->state == VAR_3)
  VAR_4->state = VAR_2;
 else
  VAR_4->state = VAR_1;
}
