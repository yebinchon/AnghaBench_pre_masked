
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int flags; } ;
struct TYPE_6__ {TYPE_1__ parallel; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_2__ bus; } ;
struct isc_subdev_entity {int pfe_cfg0; int list; TYPE_4__* asd; } ;
struct isc_device {int subdev_entities; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_7__ {int fwnode; } ;
struct TYPE_8__ {TYPE_3__ match; int match_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,struct device_node*) ;
 struct isc_subdev_entity* FUNC_3 (struct device*,int,int ) ;
 TYPE_4__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*,struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_13, struct isc_device *VAR_14)
{
 struct device_node *VAR_15 = VAR_13->of_node;
 struct device_node *VAR_16 = ((void*)0), *VAR_17;
 struct isc_subdev_entity *VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 FUNC_0(&VAR_14->subdev_entities);

 while (1) {
  struct v4l2_fwnode_endpoint VAR_21 = { .bus_type = 0 };

  VAR_16 = FUNC_7(VAR_15, VAR_16);
  if (!VAR_16)
   return 0;

  VAR_17 = FUNC_8(VAR_16);
  if (!VAR_17) {
   FUNC_2(VAR_13, "Remote device at %pOF not found\n",
       VAR_16);
   continue;
  }

  VAR_20 = FUNC_10(FUNC_6(VAR_16),
       &VAR_21);
  if (VAR_20) {
   FUNC_9(VAR_17);
   VAR_20 = -VAR_0;
   FUNC_1(VAR_13, "Could not parse the endpoint\n");
   break;
  }

  VAR_18 = FUNC_3(VAR_13, sizeof(*VAR_18),
          VAR_2);
  if (!VAR_18) {
   FUNC_9(VAR_17);
   VAR_20 = -VAR_1;
   break;
  }




  VAR_18->asd = FUNC_4(sizeof(*VAR_18->asd),
          VAR_2);
  if (!VAR_18->asd) {
   FUNC_9(VAR_17);
   VAR_20 = -VAR_1;
   break;
  }

  VAR_19 = VAR_21.bus.parallel.flags;

  if (VAR_19 & VAR_10)
   VAR_18->pfe_cfg0 = VAR_5;

  if (VAR_19 & VAR_12)
   VAR_18->pfe_cfg0 |= VAR_7;

  if (VAR_19 & VAR_11)
   VAR_18->pfe_cfg0 |= VAR_6;

  if (VAR_21.bus_type == VAR_9)
   VAR_18->pfe_cfg0 |= VAR_4 |
     VAR_3;

  VAR_18->asd->match_type = VAR_8;
  VAR_18->asd->match.fwnode = FUNC_6(VAR_17);
  FUNC_5(&VAR_18->list, &VAR_14->subdev_entities);
 }

 FUNC_9(VAR_16);
 return VAR_20;
}
