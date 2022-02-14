
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code; } ;
struct TYPE_4__ {int flags1; TYPE_1__ rc; int speed; } ;
union ibmvnic_crq {TYPE_2__ query_phys_parms_rsp; } ;
struct net_device {int dummy; } ;
struct ibmvnic_adapter {int duplex; int speed; struct net_device* netdev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(union ibmvnic_crq *VAR_14,
           struct ibmvnic_adapter *VAR_15)
{
 struct net_device *VAR_16 = VAR_15->netdev;
 int VAR_17;
 __be32 VAR_18 = FUNC_0(VAR_14->query_phys_parms_rsp.speed);

 VAR_17 = VAR_14->query_phys_parms_rsp.rc.code;
 if (VAR_17) {
  FUNC_1(VAR_16, "Error %d in QUERY_PHYS_PARMS\n", VAR_17);
  return VAR_17;
 }
 switch (VAR_18) {
 case 132:
  VAR_15->speed = VAR_5;
  break;
 case 134:
  VAR_15->speed = VAR_6;
  break;
 case 131:
  VAR_15->speed = VAR_7;
  break;
 case 133:
  VAR_15->speed = VAR_8;
  break;
 case 130:
  VAR_15->speed = VAR_10;
  break;
 case 129:
  VAR_15->speed = VAR_11;
  break;
 case 128:
  VAR_15->speed = VAR_12;
  break;
 case 135:
  VAR_15->speed = VAR_9;
  break;
 default:
  if (FUNC_3(VAR_16))
   FUNC_2(VAR_16, "Unknown speed 0x%08x\n", VAR_18);
  VAR_15->speed = VAR_13;
 }
 if (VAR_14->query_phys_parms_rsp.flags1 & VAR_3)
  VAR_15->duplex = VAR_0;
 else if (VAR_14->query_phys_parms_rsp.flags1 & VAR_4)
  VAR_15->duplex = VAR_1;
 else
  VAR_15->duplex = VAR_2;

 return VAR_17;
}
