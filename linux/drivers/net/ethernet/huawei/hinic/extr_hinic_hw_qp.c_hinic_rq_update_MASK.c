
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hinic_rq {int * pi_virt_addr; } ;


 int FUNC_0 (struct hinic_rq*,scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct hinic_rq *VAR_0, u16 VAR_1)
{
 *VAR_0->pi_virt_addr = FUNC_1(FUNC_0(VAR_0, VAR_1 + 1));
}
