
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phy_identifier; } ;
struct sas_rphy {TYPE_1__ identify; int dev; } ;
struct sas_phy_linkrates {int maximum_linkrate; int minimum_linkrate; } ;
struct sas_phy {int minimum_linkrate; } ;
struct expander_device {int children; struct ex_phy* ex_phy; } ;
struct ex_phy {int attached_tproto; int * port; scalar_t__ attached_sata_dev; int attached_sas_addr; int attached_iproto; scalar_t__ attached_sata_ps; scalar_t__ attached_sata_host; } ;
struct domain_device {scalar_t__ linkrate; scalar_t__ min_linkrate; int tproto; TYPE_2__* port; int dev_list_node; int disco_list_node; struct sas_rphy* rphy; int siblings; int sas_addr; int dev_type; struct sas_phy* phy; int hashed_sas_addr; int iproto; struct domain_device* parent; int kref; struct expander_device ex_dev; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;
struct TYPE_4__ {int dev_list_lock; int disco_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,int ,int,int) ;
 int FUNC_7 (char*,int,int,...) ;
 struct domain_device* FUNC_8 () ;
 int FUNC_9 (struct domain_device*) ;
 int FUNC_10 (struct domain_device*,int *) ;
 int FUNC_11 (struct domain_device*) ;
 int FUNC_12 (struct domain_device*) ;
 struct sas_rphy* FUNC_13 (int *) ;
 int FUNC_14 (struct domain_device*,struct domain_device*,struct ex_phy*) ;
 int FUNC_15 (struct domain_device*,struct sas_rphy*) ;
 int FUNC_16 (struct domain_device*,struct ex_phy*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct domain_device*) ;
 scalar_t__ FUNC_19 (int *) ;
 int * FUNC_20 (int *,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct domain_device*) ;
 int FUNC_24 (struct sas_rphy*) ;
 int FUNC_25 (struct domain_device*,int,int ,struct sas_phy_linkrates*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int) ;

__attribute__((used)) static struct domain_device *FUNC_29(
 struct domain_device *VAR_5, int VAR_6)
{
 struct expander_device *VAR_7 = &VAR_5->ex_dev;
 struct ex_phy *VAR_8 = &VAR_7->ex_phy[VAR_6];
 struct domain_device *VAR_9 = ((void*)0);
 struct sas_rphy *VAR_10;
 int VAR_11;

 if (VAR_8->attached_sata_host || VAR_8->attached_sata_ps)
  return ((void*)0);

 VAR_9 = FUNC_8();
 if (!VAR_9)
  return ((void*)0);

 FUNC_2(&VAR_5->kref);
 VAR_9->parent = VAR_5;
 VAR_9->port = VAR_5->port;
 VAR_9->iproto = VAR_8->attached_iproto;
 FUNC_5(VAR_9->sas_addr, VAR_8->attached_sas_addr, VAR_1);
 FUNC_17(VAR_9->hashed_sas_addr, VAR_9->sas_addr);
 if (!VAR_8->port) {
  VAR_8->port = FUNC_20(&VAR_5->rphy->dev, VAR_6);
  if (FUNC_28(!VAR_8->port))
   goto out_err;
  if (FUNC_28(FUNC_19(VAR_8->port) != 0)) {
   FUNC_22(VAR_8->port);
   goto out_err;
  }
 }
 FUNC_14(VAR_5, VAR_9, VAR_8);
 FUNC_10(VAR_9, VAR_8->port);
   if (VAR_8->attached_tproto & VAR_3) {
  VAR_9->dev_type = VAR_2;
  VAR_10 = FUNC_13(VAR_8->port);

  if (FUNC_28(!VAR_10))
   goto out_free;
  VAR_9->tproto = VAR_8->attached_tproto;
  FUNC_18(VAR_9);

  VAR_9->rphy = VAR_10;
  FUNC_1(&VAR_10->dev);
  VAR_10->identify.phy_identifier = VAR_6;
  FUNC_15(VAR_9, VAR_10);

  FUNC_3(&VAR_9->disco_list_node, &VAR_5->port->disco_list);

  VAR_11 = FUNC_11(VAR_9);
  if (VAR_11) {
   FUNC_7("sas_discover_end_dev() for device %16llx at %016llx:%02d returned 0x%x\n",
      FUNC_0(VAR_9->sas_addr),
      FUNC_0(VAR_5->sas_addr), VAR_6, VAR_11);
   goto out_list_del;
  }
 } else {
  FUNC_7("target proto 0x%x at %016llx:0x%x not handled\n",
     VAR_8->attached_tproto, FUNC_0(VAR_5->sas_addr),
     VAR_6);
  goto out_free;
 }

 FUNC_3(&VAR_9->siblings, &VAR_7->children);
 return VAR_9;

 out_list_del:
 FUNC_24(VAR_9->rphy);
 FUNC_4(&VAR_9->disco_list_node);
 FUNC_26(&VAR_5->port->dev_list_lock);
 FUNC_4(&VAR_9->dev_list_node);
 FUNC_27(&VAR_5->port->dev_list_lock);
 out_free:
 FUNC_21(VAR_8->port);
 out_err:
 VAR_8->port = ((void*)0);
 FUNC_23(VAR_9);
 return ((void*)0);
}
