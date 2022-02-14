
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct octeon_droq {int pkts_pending; scalar_t__ pkt_count; int pkts_sent_reg; } ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int ) ;

u32 FUNC_2(struct octeon_droq *VAR_0)
{
 u32 VAR_1 = 0;
 u32 VAR_2;

 VAR_1 = FUNC_1(VAR_0->pkts_sent_reg);

 VAR_2 = VAR_1 - VAR_0->pkt_count;
 VAR_0->pkt_count = VAR_1;


 if (VAR_2)
  FUNC_0(VAR_2, &VAR_0->pkts_pending);

 return VAR_2;
}
