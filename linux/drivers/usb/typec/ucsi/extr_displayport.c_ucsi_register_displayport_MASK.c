
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ucsi_dp {int override; int offset; struct typec_altmode* alt; struct ucsi_connector* con; int work; } ;
struct ucsi_connector {int port; } ;
struct typec_altmode_desc {int vdo; } ;
struct typec_altmode {int * ops; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct typec_altmode* FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct typec_altmode*) ;
 struct ucsi_dp* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct typec_altmode*,struct ucsi_dp*) ;
 struct typec_altmode* FUNC_6 (int ,struct typec_altmode_desc*) ;
 int FUNC_7 (struct typec_altmode*) ;
 int VAR_7 ;
 int VAR_8 ;

struct typec_altmode *FUNC_8(struct ucsi_connector *VAR_9,
      bool VAR_10, int VAR_11,
      struct typec_altmode_desc *VAR_12)
{
 u8 VAR_13 = FUNC_0(VAR_2) | FUNC_0(VAR_3) |
        FUNC_0(VAR_4);
 struct typec_altmode *VAR_14;
 struct ucsi_dp *VAR_15;


 VAR_12->vdo |= VAR_0 | VAR_1;


 VAR_12->vdo |= VAR_13 << 8;
 VAR_12->vdo |= VAR_13 << 16;

 VAR_14 = FUNC_6(VAR_9->port, VAR_12);
 if (FUNC_3(VAR_14))
  return VAR_14;

 VAR_15 = FUNC_4(&VAR_14->dev, sizeof(*VAR_15), VAR_6);
 if (!VAR_15) {
  FUNC_7(VAR_14);
  return FUNC_1(-VAR_5);
 }

 FUNC_2(&VAR_15->work, VAR_8);
 VAR_15->override = VAR_10;
 VAR_15->offset = VAR_11;
 VAR_15->con = VAR_9;
 VAR_15->alt = VAR_14;

 VAR_14->ops = &VAR_7;
 FUNC_5(VAR_14, VAR_15);

 return VAR_14;
}
