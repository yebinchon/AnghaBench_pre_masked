
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct reciprocal_value {int dummy; } ;
struct TYPE_2__ {int packets_per_slave; struct reciprocal_value reciprocal_packets_per_slave; } ;
struct bonding {int rr_tx_counter; TYPE_1__ params; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,struct reciprocal_value) ;

__attribute__((used)) static u32 FUNC_2(struct bonding *VAR_0)
{
 u32 VAR_1;
 struct reciprocal_value VAR_2;
 int VAR_3 = VAR_0->params.packets_per_slave;

 switch (VAR_3) {
 case 0:
  VAR_1 = FUNC_0();
  break;
 case 1:
  VAR_1 = VAR_0->rr_tx_counter;
  break;
 default:
  VAR_2 =
   VAR_0->params.reciprocal_packets_per_slave;
  VAR_1 = FUNC_1(VAR_0->rr_tx_counter,
          VAR_2);
  break;
 }
 VAR_0->rr_tx_counter++;

 return VAR_1;
}
