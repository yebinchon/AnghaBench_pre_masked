
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_info {int tail; int head; int state; scalar_t__ remote; int local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fm10k_mbx_info*) ;

__attribute__((used)) static void FUNC_1(struct fm10k_mbx_info *VAR_2)
{

 FUNC_0(VAR_2);


 VAR_2->local = VAR_0;
 VAR_2->remote = 0;


 VAR_2->tail = 1;
 VAR_2->head = 1;


 VAR_2->state = VAR_1;
}
