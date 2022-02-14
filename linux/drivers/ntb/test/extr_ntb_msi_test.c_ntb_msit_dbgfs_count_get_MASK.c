
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ntb_msit_peer {int num_irqs; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, u64 *VAR_1)
{
 struct ntb_msit_peer *VAR_2 = VAR_0;

 *VAR_1 = VAR_2->num_irqs;

 return 0;
}
