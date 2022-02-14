
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_phy {int dummy; } ;
struct sas_internal {TYPE_1__* dft; } ;
struct TYPE_4__ {unsigned int class; } ;
struct domain_device {TYPE_2__ sata_dev; } ;
struct ata_port {int cbl; struct domain_device* private_data; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_3__ {int (* lldd_I_T_nexus_reset ) (struct domain_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_link*,unsigned long,int (*) (struct ata_link*)) ;
 struct sas_internal* FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct ata_link*) ;
 int FUNC_3 (int ,struct domain_device*,char*,...) ;
 struct sas_phy* FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct sas_phy*) ;
 scalar_t__ FUNC_6 (struct sas_phy*) ;
 int FUNC_7 (struct ata_link*) ;
 int FUNC_8 (struct domain_device*) ;

__attribute__((used)) static int FUNC_9(struct ata_link *VAR_6, unsigned int *VAR_7,
         unsigned long VAR_8)
{
 int VAR_9 = 0, VAR_10;
 struct sas_phy *VAR_11;
 struct ata_port *VAR_12 = VAR_6->ap;
 int (*VAR_13)(struct ata_link *VAR_14);
 struct domain_device *VAR_15 = VAR_12->private_data;
 struct sas_internal *VAR_16 = FUNC_1(VAR_15);

 VAR_10 = VAR_16->dft->lldd_I_T_nexus_reset(VAR_15);
 if (VAR_10 == -VAR_2)
  return VAR_10;

 if (VAR_10 != VAR_5)
  FUNC_3(VAR_3, VAR_15, "Unable to reset ata device?\n");

 VAR_11 = FUNC_4(VAR_15);
 if (FUNC_6(VAR_11))
  VAR_13 = FUNC_2;
 else
  VAR_13 = FUNC_7;
 FUNC_5(VAR_11);

 VAR_9 = FUNC_0(VAR_6, VAR_8, VAR_13);
 if (VAR_9 && VAR_9 != -VAR_1)
  FUNC_3(VAR_4, VAR_15, "reset failed (errno=%d)\n", VAR_9);

 *VAR_7 = VAR_15->sata_dev.class;

 VAR_12->cbl = VAR_0;
 return VAR_9;
}
