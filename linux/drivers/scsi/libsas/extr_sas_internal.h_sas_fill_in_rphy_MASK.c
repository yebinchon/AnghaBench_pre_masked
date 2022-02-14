
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_type; int target_port_protocols; int initiator_port_protocols; int sas_address; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct domain_device {int dev_type; int tproto; int iproto; int sas_addr; } ;


 int FUNC_0 (int ) ;



 int VAR_0 ;



__attribute__((used)) static inline void FUNC_1(struct domain_device *VAR_1,
        struct sas_rphy *VAR_2)
{
 VAR_2->identify.sas_address = FUNC_0(VAR_1->sas_addr);
 VAR_2->identify.initiator_port_protocols = VAR_1->iproto;
 VAR_2->identify.target_port_protocols = VAR_1->tproto;
 switch (VAR_1->dev_type) {
 case 129:

 case 131:
 case 128:
  VAR_2->identify.device_type = 131;
  break;
 case 132:
  VAR_2->identify.device_type = 132;
  break;
 case 130:
  VAR_2->identify.device_type = 130;
  break;
 default:
  VAR_2->identify.device_type = VAR_0;
  break;
 }
}
