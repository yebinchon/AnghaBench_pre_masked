
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_rphy {int dev; } ;
struct sas_expander_device {scalar_t__ level; } ;
struct ex_phy {scalar_t__ routing_attr; int attached_dev_type; int * port; int attached_sas_addr; int attached_tproto; int attached_iproto; int attached_phy_id; } ;
struct TYPE_4__ {int children; struct ex_phy* ex_phy; } ;
struct domain_device {int dev_type; TYPE_2__ ex_dev; int siblings; struct asd_sas_port* port; int dev_list_node; int sas_addr; int hashed_sas_addr; int tproto; int iproto; struct domain_device* parent; int kref; struct sas_rphy* rphy; } ;
struct TYPE_3__ {int max_level; } ;
struct asd_sas_port {int dev_list_lock; int dev_list; TYPE_1__ disc; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;


 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*,int ,int,int ,int ) ;
 struct sas_expander_device* FUNC_10 (struct sas_rphy*) ;
 struct domain_device* FUNC_11 () ;
 int FUNC_12 (struct domain_device*) ;
 int FUNC_13 (struct domain_device*,struct domain_device*,struct ex_phy*) ;
 struct sas_rphy* FUNC_14 (int *,int const) ;
 int FUNC_15 (struct domain_device*,struct sas_rphy*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct domain_device*) ;
 scalar_t__ FUNC_18 (int *) ;
 int * FUNC_19 (int *,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct domain_device*) ;
 int FUNC_22 (struct sas_rphy*) ;
 int FUNC_23 (struct sas_rphy*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static struct domain_device *FUNC_26(
 struct domain_device *VAR_2, int VAR_3)
{
 struct sas_expander_device *VAR_4 = FUNC_10(VAR_2->rphy);
 struct ex_phy *VAR_5 = &VAR_2->ex_dev.ex_phy[VAR_3];
 struct domain_device *VAR_6 = ((void*)0);
 struct sas_rphy *VAR_7;
 struct sas_expander_device *VAR_8;
 struct asd_sas_port *VAR_9;
 int VAR_10;

 if (VAR_5->routing_attr == VAR_0) {
  FUNC_9("ex %016llx:%02d:D <--> ex %016llx:0x%x is not allowed\n",
   FUNC_2(VAR_2->sas_addr), VAR_3,
   FUNC_2(VAR_5->attached_sas_addr),
   VAR_5->attached_phy_id);
  return ((void*)0);
 }
 VAR_6 = FUNC_11();
 if (!VAR_6)
  return ((void*)0);

 VAR_5->port = FUNC_19(&VAR_2->rphy->dev, VAR_3);

 FUNC_1(FUNC_18(VAR_5->port) != 0);


 switch (VAR_5->attached_dev_type) {
 case 129:
  VAR_7 = FUNC_14(VAR_5->port,
       129);
  break;
 case 128:
  VAR_7 = FUNC_14(VAR_5->port,
       128);
  break;
 default:
  VAR_7 = ((void*)0);
  FUNC_0();
 }
 VAR_9 = VAR_2->port;
 VAR_6->rphy = VAR_7;
 FUNC_3(&VAR_7->dev);
 VAR_8 = FUNC_10(VAR_7);
 VAR_6->dev_type = VAR_5->attached_dev_type;
 FUNC_4(&VAR_2->kref);
 VAR_6->parent = VAR_2;
 VAR_6->port = VAR_9;
 VAR_6->iproto = VAR_5->attached_iproto;
 VAR_6->tproto = VAR_5->attached_tproto;
 FUNC_8(VAR_6->sas_addr, VAR_5->attached_sas_addr, VAR_1);
 FUNC_16(VAR_6->hashed_sas_addr, VAR_6->sas_addr);
 FUNC_13(VAR_2, VAR_6, VAR_5);
 VAR_8->level = VAR_4->level + 1;
 VAR_2->port->disc.max_level = FUNC_7(VAR_2->port->disc.max_level,
        VAR_8->level);
 FUNC_17(VAR_6);
 FUNC_15(VAR_6, VAR_7);
 FUNC_22(VAR_7);

 FUNC_24(&VAR_2->port->dev_list_lock);
 FUNC_5(&VAR_6->dev_list_node, &VAR_2->port->dev_list);
 FUNC_25(&VAR_2->port->dev_list_lock);

 VAR_10 = FUNC_12(VAR_6);
 if (VAR_10) {
  FUNC_23(VAR_7);
  FUNC_24(&VAR_2->port->dev_list_lock);
  FUNC_6(&VAR_6->dev_list_node);
  FUNC_25(&VAR_2->port->dev_list_lock);
  FUNC_21(VAR_6);
  FUNC_20(VAR_5->port);
  VAR_5->port = ((void*)0);
  return ((void*)0);
 }
 FUNC_5(&VAR_6->siblings, &VAR_2->ex_dev.children);
 return VAR_6;
}
