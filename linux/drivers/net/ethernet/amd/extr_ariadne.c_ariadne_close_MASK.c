
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_missed_errors; } ;
struct net_device {TYPE_1__ stats; scalar_t__ base_addr; } ;
struct Am79C960 {int RDP; int RAP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5)
{
 volatile struct Am79C960 *VAR_6 = (struct Am79C960 *)VAR_5->base_addr;

 FUNC_2(VAR_5);

 VAR_6->RAP = VAR_1;
 VAR_5->stats.rx_missed_errors = FUNC_3(VAR_6->RDP);
 VAR_6->RAP = VAR_0;

 if (VAR_4 > 1) {
  FUNC_1(VAR_5, "Shutting down ethercard, status was %02x\n",
      VAR_6->RDP);
  FUNC_1(VAR_5, "%lu packets missed\n",
      VAR_5->stats.rx_missed_errors);
 }


 VAR_6->RDP = VAR_3;

 FUNC_0(VAR_2, VAR_5);

 return 0;
}
