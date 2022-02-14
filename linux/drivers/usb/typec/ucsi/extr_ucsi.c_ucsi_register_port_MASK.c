
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ucsi_control {int dummy; } ;
struct TYPE_5__ {int op_mode; int partner_type; scalar_t__ connected; int pwr_dir; scalar_t__ consumer; scalar_t__ provider; } ;
struct typec_capability {int* accessory; int pr_set; int dr_set; int fwnode; int prefer_role; int pd_revision; int revision; int type; int data; } ;
struct ucsi_connector {int num; TYPE_2__ status; scalar_t__ partner; int port; TYPE_2__ cap; struct ucsi* ucsi; int lock; int complete; int work; struct typec_capability typec_cap; } ;
struct TYPE_4__ {int pd_version; int typec_version; } ;
struct ucsi {int dev; TYPE_1__ cap; struct ucsi_connector* connector; } ;
typedef enum typec_accessory { ____Placeholder_typec_accessory } typec_accessory ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
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
 int FUNC_3 (struct ucsi_control,int) ;
 int FUNC_4 (struct ucsi_control,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;


 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,TYPE_2__*) ;
 int FUNC_9 (int ,struct typec_capability*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct ucsi_connector*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (struct ucsi_connector*) ;
 int VAR_20 ;
 int FUNC_14 (struct ucsi_connector*) ;
 int FUNC_15 (struct ucsi_connector*,int ) ;
 int FUNC_16 (struct ucsi_connector*) ;
 int FUNC_17 (struct ucsi*,struct ucsi_control*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_18(struct ucsi *VAR_21, int VAR_22)
{
 struct ucsi_connector *VAR_23 = &VAR_21->connector[VAR_22];
 struct typec_capability *VAR_24 = &VAR_23->typec_cap;
 enum typec_accessory *VAR_25 = VAR_24->accessory;
 struct ucsi_control VAR_26;
 int VAR_27;

 FUNC_0(&VAR_23->work, VAR_18);
 FUNC_6(&VAR_23->complete);
 FUNC_7(&VAR_23->lock);
 VAR_23->num = VAR_22 + 1;
 VAR_23->ucsi = VAR_21;


 FUNC_3(VAR_26, VAR_23->num);
 VAR_27 = FUNC_17(VAR_21, &VAR_26, &VAR_23->cap, sizeof(VAR_23->cap));
 if (VAR_27 < 0)
  return VAR_27;

 if (VAR_23->cap.op_mode & VAR_14)
  VAR_24->data = VAR_6;
 else if (VAR_23->cap.op_mode & VAR_13)
  VAR_24->data = VAR_5;
 else if (VAR_23->cap.op_mode & VAR_15)
  VAR_24->data = VAR_10;

 if (VAR_23->cap.provider && VAR_23->cap.consumer)
  VAR_24->type = VAR_7;
 else if (VAR_23->cap.provider)
  VAR_24->type = VAR_9;
 else if (VAR_23->cap.consumer)
  VAR_24->type = VAR_8;

 VAR_24->revision = VAR_21->cap.typec_version;
 VAR_24->pd_revision = VAR_21->cap.pd_version;
 VAR_24->prefer_role = VAR_4;

 if (VAR_23->cap.op_mode & VAR_11)
  *VAR_25++ = VAR_0;
 if (VAR_23->cap.op_mode & VAR_12)
  *VAR_25 = VAR_1;

 VAR_24->fwnode = FUNC_13(VAR_23);
 VAR_24->dr_set = VAR_19;
 VAR_24->pr_set = VAR_20;


 VAR_23->port = FUNC_9(VAR_21->dev, VAR_24);
 if (FUNC_1(VAR_23->port))
  return FUNC_2(VAR_23->port);


 VAR_27 = FUNC_15(VAR_23, VAR_16);
 if (VAR_27)
  FUNC_5(VAR_21->dev, "con%d: failed to register alt modes\n",
   VAR_23->num);


 FUNC_4(VAR_26, VAR_23->num);
 VAR_27 = FUNC_17(VAR_21, &VAR_26, &VAR_23->status, sizeof(VAR_23->status));
 if (VAR_27 < 0) {
  FUNC_5(VAR_21->dev, "con%d: failed to get status\n", VAR_23->num);
  return 0;
 }

 FUNC_14(VAR_23);
 FUNC_11(VAR_23->port, VAR_23->status.pwr_dir);

 switch (VAR_23->status.partner_type) {
 case 128:
  FUNC_10(VAR_23->port, VAR_3);
  break;
 case 129:
  FUNC_10(VAR_23->port, VAR_2);
  break;
 default:
  break;
 }


 if (VAR_23->status.connected)
  FUNC_16(VAR_23);

 if (VAR_23->partner) {
  VAR_27 = FUNC_15(VAR_23, VAR_17);
  if (VAR_27)
   FUNC_5(VAR_21->dev,
    "con%d: failed to register alternate modes\n",
    VAR_23->num);
  else
   FUNC_12(VAR_23);
 }

 FUNC_8(VAR_23->num, &VAR_23->status);

 return 0;
}
