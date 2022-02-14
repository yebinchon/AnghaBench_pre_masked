
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct fc_rport_identifiers {int node_name; int port_name; int roles; int port_id; } ;
struct TYPE_6__ {scalar_t__ Low; scalar_t__ High; } ;
struct TYPE_5__ {scalar_t__ Low; scalar_t__ High; } ;
struct TYPE_7__ {int Flags; int Protocol; int PortIdentifier; TYPE_2__ WWPN; TYPE_1__ WWNN; } ;
typedef TYPE_3__ FCDevicePage0_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(FCDevicePage0_t *VAR_5, struct fc_rport_identifiers *VAR_6)
{

 if (VAR_5->Flags & (VAR_1 |
     VAR_2))
  return -1;

 if (!(VAR_5->Flags & VAR_3))
  return -1;

 if (!(VAR_5->Protocol & VAR_4))
  return -1;





 VAR_6->node_name = ((u64)VAR_5->WWNN.High) << 32 | (u64)VAR_5->WWNN.Low;
 VAR_6->port_name = ((u64)VAR_5->WWPN.High) << 32 | (u64)VAR_5->WWPN.Low;
 VAR_6->port_id = VAR_5->PortIdentifier;
 VAR_6->roles = VAR_0;

 return 0;
}
