
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {scalar_t__ affil_supp; scalar_t__ affil_valid; } ;
struct smp_resp {scalar_t__ frame_type; scalar_t__ function; scalar_t__ result; TYPE_4__ rps; } ;
struct sas_end_device {scalar_t__ I_T_nexus_loss_timeout; } ;
struct TYPE_7__ {struct smp_resp rps_resp; } ;
struct domain_device {int* sas_addr; scalar_t__ dev_type; int tproto; int pathways; int rphy; int parent; TYPE_3__ sata_dev; TYPE_2__* port; void* lldd_dev; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_6__ {int phy_mask; scalar_t__ oob_mode; TYPE_1__* ha; } ;
struct TYPE_5__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct asd_ha_struct*,int,int,int) ;
 int FUNC_1 (struct asd_ha_struct*,int,int ,int) ;
 int FUNC_2 (struct asd_ha_struct*,int) ;
 int FUNC_3 (struct asd_ha_struct*) ;
 int FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct domain_device*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int) ;
 struct sas_end_device* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct domain_device *VAR_29)
{
 int VAR_30, VAR_31;
 struct asd_ha_struct *VAR_32 = VAR_29->port->ha->lldd_ha;
 u8 VAR_33 = 0;

 VAR_30 = FUNC_3(VAR_32);
 if (VAR_30 < 0)
  return VAR_30;

 VAR_29->lldd_dev = (void *) (unsigned long) VAR_30;

 FUNC_0(VAR_32, VAR_30, 0, VAR_4);
 FUNC_0(VAR_32, VAR_30, 1, 0);
 FUNC_1(VAR_32, VAR_30, VAR_7, 0xFFFF);
 for (VAR_31 = 0; VAR_31 < VAR_13; VAR_31++)
  FUNC_0(VAR_32, VAR_30, VAR_5+VAR_31,
           VAR_29->sas_addr[VAR_31]);
 FUNC_1(VAR_32, VAR_30, VAR_20, 0xFFFF);
 FUNC_5(VAR_29);
 FUNC_0(VAR_32, VAR_30, VAR_1, VAR_29->port->phy_mask);
 if (VAR_29->port->oob_mode != VAR_19) {
  VAR_33 |= VAR_12;
  if ((VAR_29->dev_type == VAR_16) ||
      (VAR_29->tproto & VAR_15)) {
   struct smp_resp *VAR_34 = &VAR_29->sata_dev.rps_resp;
   if (VAR_34->frame_type == VAR_24 &&
       VAR_34->function == VAR_23 &&
       VAR_34->result == VAR_25) {
    if (VAR_34->rps.affil_valid)
     VAR_33 |= VAR_26;
    if (VAR_34->rps.affil_supp)
     VAR_33 |= VAR_28;
   }
  } else {
   VAR_33 |= VAR_0;
   if (!VAR_29->parent && FUNC_6(VAR_29->dev_type))
    FUNC_0(VAR_32, VAR_30, VAR_10,
             4);
   else
    FUNC_0(VAR_32, VAR_30, VAR_10,
             VAR_29->pathways);
   FUNC_0(VAR_32, VAR_30, VAR_11, 1);
  }
 }
 if (VAR_29->dev_type == VAR_17)
  VAR_33 |= VAR_18;
 FUNC_0(VAR_32, VAR_30, VAR_2, VAR_33);

 VAR_33 = 0;
 if (VAR_29->tproto & VAR_15)
  VAR_33 |= VAR_27;
 FUNC_0(VAR_32, VAR_30, VAR_3, VAR_33);

 FUNC_1(VAR_32, VAR_30, VAR_6, 0xFFFF);
 FUNC_1(VAR_32, VAR_30, VAR_21, 0xFFFF);
 FUNC_1(VAR_32, VAR_30, VAR_22, 0xFFFF);

 if (VAR_29->dev_type == VAR_16 || (VAR_29->tproto & VAR_15)) {
  VAR_31 = FUNC_4(VAR_29);
  if (VAR_31 < 0) {
   FUNC_2(VAR_32, VAR_30);
   return VAR_31;
  }
 }

 if (VAR_29->dev_type == VAR_14) {
  struct sas_end_device *VAR_35 = FUNC_8(VAR_29->rphy);
  if (VAR_35->I_T_nexus_loss_timeout > 0)
   FUNC_1(VAR_32, VAR_30, VAR_8,
            FUNC_7(VAR_35->I_T_nexus_loss_timeout,
         (u16)VAR_9));
  else
   FUNC_1(VAR_32, VAR_30, VAR_8,
            (u16)VAR_9);
 }
 return 0;
}
