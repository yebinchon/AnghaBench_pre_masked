
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct expander_device {struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ linkrate; scalar_t__ routing_attr; int attached_dev_type; int attached_sas_addr; int attached_phy_id; } ;
struct domain_device {int sas_addr; TYPE_3__* port; TYPE_1__* parent; struct expander_device ex_dev; } ;
struct TYPE_5__ {int fanout_sas_addr; } ;
struct TYPE_6__ {TYPE_2__ disc; int sas_addr; } ;
struct TYPE_4__ {int sas_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_4 (char*,scalar_t__,int) ;
 int FUNC_5 (char*,int,scalar_t__,int) ;
 int FUNC_6 (struct domain_device*,int) ;
 int FUNC_7 (struct domain_device*,int,int ,int) ;
 int FUNC_8 (struct domain_device*,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (struct domain_device*,int ) ;
 int FUNC_11 (struct domain_device*,int) ;
 int FUNC_12 (struct domain_device*,int ) ;
 struct domain_device* FUNC_13 (struct domain_device*,int) ;
 struct domain_device* FUNC_14 (struct domain_device*,int) ;
 scalar_t__ FUNC_15 (struct domain_device*,int) ;
 int FUNC_16 (struct domain_device*,int) ;
 int FUNC_17 (struct domain_device*,int,int ,int *) ;

__attribute__((used)) static int FUNC_18(struct domain_device *VAR_7, int VAR_8)
{
 struct expander_device *VAR_9 = &VAR_7->ex_dev;
 struct ex_phy *VAR_10 = &VAR_9->ex_phy[VAR_8];
 struct domain_device *VAR_11 = ((void*)0);
 int VAR_12 = 0;


 if (VAR_10->linkrate == VAR_5) {
  if (!FUNC_17(VAR_7, VAR_8, VAR_1, ((void*)0)))
   VAR_12 = FUNC_16(VAR_7, VAR_8);
  if (VAR_12)
   return VAR_12;
 }


 if (!VAR_7->parent && (FUNC_0(VAR_10->attached_sas_addr) ==
        FUNC_0(VAR_7->port->sas_addr))) {
  FUNC_6(VAR_7, VAR_8);
  return 0;
 }
 if (VAR_7->parent && (FUNC_0(VAR_10->attached_sas_addr) ==
       FUNC_0(VAR_7->parent->sas_addr))) {
  FUNC_6(VAR_7, VAR_8);
  if (VAR_10->routing_attr == VAR_6)
   FUNC_7(VAR_7, VAR_8, VAR_7->port->sas_addr, 1);
  return 0;
 }

 if (FUNC_9(VAR_7->port, VAR_10->attached_sas_addr))
  FUNC_12(VAR_7, VAR_10->attached_sas_addr);

 if (VAR_10->attached_dev_type == VAR_4) {
  if (VAR_10->routing_attr == VAR_0) {
   FUNC_2(VAR_10->attached_sas_addr, 0, VAR_2);
   FUNC_8(VAR_7, VAR_10->attached_sas_addr);
  }
  return 0;
 } else if (VAR_10->linkrate == VAR_3)
  return 0;

 if (VAR_10->attached_dev_type != 130 &&
     VAR_10->attached_dev_type != 129 &&
     VAR_10->attached_dev_type != 131 &&
     VAR_10->attached_dev_type != 128) {
  FUNC_5("unknown device type(0x%x) attached to ex %016llx phy%02d\n",
   VAR_10->attached_dev_type,
   FUNC_0(VAR_7->sas_addr),
   VAR_8);
  return 0;
 }

 VAR_12 = FUNC_8(VAR_7, VAR_10->attached_sas_addr);
 if (VAR_12) {
  FUNC_4("configure routing for dev %016llx reported 0x%x. Forgotten\n",
     FUNC_0(VAR_10->attached_sas_addr), VAR_12);
  FUNC_10(VAR_7, VAR_10->attached_sas_addr);
  return VAR_12;
 }

 if (FUNC_15(VAR_7, VAR_8)) {
  FUNC_3("Attaching ex phy%02d to wide port %016llx\n",
    VAR_8, FUNC_0(VAR_10->attached_sas_addr));
  return VAR_12;
 }

 switch (VAR_10->attached_dev_type) {
 case 130:
 case 128:
  VAR_11 = FUNC_13(VAR_7, VAR_8);
  break;
 case 129:
  if (FUNC_0(VAR_7->port->disc.fanout_sas_addr)) {
   FUNC_3("second fanout expander %016llx phy%02d attached to ex %016llx phy%02d\n",
     FUNC_0(VAR_10->attached_sas_addr),
     VAR_10->attached_phy_id,
     FUNC_0(VAR_7->sas_addr),
     VAR_8);
   FUNC_11(VAR_7, VAR_8);
   return VAR_12;
  } else
   FUNC_1(VAR_7->port->disc.fanout_sas_addr,
          VAR_10->attached_sas_addr, VAR_2);

 case 131:
  VAR_11 = FUNC_14(VAR_7, VAR_8);
  break;
 default:
  break;
 }

 if (!VAR_11)
  FUNC_4("ex %016llx phy%02d failed to discover\n",
     FUNC_0(VAR_7->sas_addr), VAR_8);
 return VAR_12;
}
