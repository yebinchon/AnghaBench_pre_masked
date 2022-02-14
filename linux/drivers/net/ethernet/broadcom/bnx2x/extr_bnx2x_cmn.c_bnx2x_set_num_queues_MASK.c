
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int num_ethernet_queues; scalar_t__ num_queues; scalar_t__ num_cnic_queues; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;

void FUNC_4(struct bnx2x *VAR_0)
{

 VAR_0->num_ethernet_queues = FUNC_3(VAR_0);


 if (FUNC_2(VAR_0))
  VAR_0->num_ethernet_queues = 1;


 VAR_0->num_cnic_queues = FUNC_1(VAR_0);
 VAR_0->num_queues = VAR_0->num_ethernet_queues + VAR_0->num_cnic_queues;

 FUNC_0("set number of queues to %d\n", VAR_0->num_queues);
}
