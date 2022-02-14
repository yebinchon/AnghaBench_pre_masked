
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {scalar_t__ target_port_protocols; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct sas_ha_struct {size_t num_phys; TYPE_4__** sas_phy; } ;
struct dev_to_host_fis {int fis_type; } ;
struct TYPE_8__ {TYPE_3__* port; int attached_sas_addr; } ;
struct TYPE_7__ {TYPE_2__* port_dev; } ;
struct TYPE_6__ {size_t* frame_rcvd; struct sas_rphy* rphy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (size_t*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sas_ha_struct *VAR_5, u8 *VAR_6,
    u8 VAR_7)
{
 struct sas_rphy *VAR_8;
 struct dev_to_host_fis *VAR_9;
 int VAR_10;

 if (VAR_7 >= VAR_5->num_phys) {
  VAR_6[2] = VAR_3;
  return;
 }

 VAR_6[2] = VAR_4;

 if (!VAR_5->sas_phy[VAR_7]->port)
  return;

 VAR_8 = VAR_5->sas_phy[VAR_7]->port->port_dev->rphy;
 VAR_9 = (struct dev_to_host_fis *)
  VAR_5->sas_phy[VAR_7]->port->port_dev->frame_rcvd;
 if (VAR_8->identify.target_port_protocols != VAR_1)
  return;

 VAR_6[2] = VAR_2;
 VAR_6[9] = VAR_7;
 FUNC_0(VAR_6 + 16, VAR_5->sas_phy[VAR_7]->attached_sas_addr,
        VAR_0);


 if (VAR_9->fis_type != 0x34)
  return;


 for (VAR_10 = 0; VAR_10 < 20; VAR_10 += 4) {
  u8 *VAR_11 = VAR_6 + 24 + VAR_10, *VAR_12 =
   &VAR_5->sas_phy[VAR_7]->port->port_dev->frame_rcvd[VAR_10];
  VAR_11[0] = VAR_12[3];
  VAR_11[1] = VAR_12[2];
  VAR_11[2] = VAR_12[1];
  VAR_11[3] = VAR_12[0];
 }
}
