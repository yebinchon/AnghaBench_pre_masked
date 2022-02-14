
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_sq_task {scalar_t__ zero_pad; int pkt_info4; scalar_t__ ufo_v6_identify; scalar_t__ pkt_info2; scalar_t__ pkt_info1; scalar_t__ pkt_info0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct hinic_sq_task *VAR_2)
{
 VAR_2->pkt_info0 = 0;
 VAR_2->pkt_info1 = 0;
 VAR_2->pkt_info2 = 0;

 VAR_2->ufo_v6_identify = 0;

 VAR_2->pkt_info4 = FUNC_0(VAR_0, VAR_1);

 VAR_2->zero_pad = 0;
}
