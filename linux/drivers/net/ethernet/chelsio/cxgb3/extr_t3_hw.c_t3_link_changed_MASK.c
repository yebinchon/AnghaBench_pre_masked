
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct link_config {int link_ok; int requested_fc; int speed; int duplex; int fc; scalar_t__ autoneg; } ;
struct TYPE_5__ {int link_faults; } ;
struct cmac {scalar_t__ offset; TYPE_2__ stats; } ;
struct cphy {TYPE_1__* ops; } ;
struct port_info {int link_fault; struct link_config link_config; struct cmac mac; struct cphy phy; } ;
struct TYPE_6__ {scalar_t__ rev; } ;
struct adapter {TYPE_3__ params; } ;
struct TYPE_4__ {int (* get_link_status ) (struct cphy*,int*,int*,int*,int*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct port_info* FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct cphy*,int*,int*,int*,int*) ;
 int FUNC_2 (struct cmac*,int*,int*,int*) ;
 int FUNC_3 (struct cmac*,int ) ;
 int FUNC_4 (struct cmac*,int,int,int) ;
 int FUNC_5 (struct cmac*,int,int,int) ;
 int FUNC_6 (struct adapter*,int,int,int,int,int) ;
 int FUNC_7 (struct adapter*,scalar_t__) ;
 int FUNC_8 (struct adapter*,scalar_t__,int) ;
 int FUNC_9 (struct adapter*,int) ;
 int FUNC_10 (struct cmac*) ;
 scalar_t__ FUNC_11 (struct adapter*) ;

void FUNC_12(struct adapter *VAR_13, int VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18;
 struct port_info *VAR_19 = FUNC_0(VAR_13, VAR_14);
 struct cphy *VAR_20 = &VAR_19->phy;
 struct cmac *VAR_21 = &VAR_19->mac;
 struct link_config *VAR_22 = &VAR_19->link_config;

 VAR_20->ops->get_link_status(VAR_20, &VAR_15, &VAR_16, &VAR_17, &VAR_18);

 if (!VAR_22->link_ok && VAR_15) {
  u32 VAR_23, VAR_24, VAR_25;
  u32 VAR_26;

  FUNC_9(VAR_13, VAR_14);
  FUNC_2(VAR_21, &VAR_23, &VAR_24, &VAR_25);
  FUNC_8(VAR_13, VAR_2 + VAR_21->offset, 0);
  FUNC_3(VAR_21, VAR_8);

  VAR_26 = FUNC_7(VAR_13, VAR_1 + VAR_21->offset);
  if (VAR_26 & VAR_5) {
   VAR_21->stats.link_faults++;
   VAR_19->link_fault = 1;
  }
  FUNC_5(VAR_21, VAR_23, VAR_24, VAR_25);
 }

 if (VAR_22->requested_fc & VAR_9)
  VAR_18 &= VAR_22->requested_fc;
 else
  VAR_18 = VAR_22->requested_fc & (VAR_10 | VAR_11);

 if (VAR_15 == VAR_22->link_ok && VAR_16 == VAR_22->speed &&
     VAR_17 == VAR_22->duplex && VAR_18 == VAR_22->fc)
  return;

 if (VAR_15 != VAR_22->link_ok && VAR_13->params.rev > 0 &&
     FUNC_11(VAR_13)) {
  if (VAR_15)
   FUNC_10(VAR_21);
  FUNC_8(VAR_13, VAR_3 + VAR_21->offset,
        VAR_15 ? VAR_7 | VAR_6 : 0);
 }
 VAR_22->link_ok = VAR_15;
 VAR_22->speed = VAR_16 < 0 ? VAR_12 : VAR_16;
 VAR_22->duplex = VAR_17 < 0 ? VAR_4 : VAR_17;

 if (VAR_15 && VAR_16 >= 0 && VAR_22->autoneg == VAR_0) {

  FUNC_4(VAR_21, VAR_16, VAR_17, VAR_18);
  VAR_22->fc = VAR_18;
 }

 FUNC_6(VAR_13, VAR_14, VAR_15 && !VAR_19->link_fault,
      VAR_16, VAR_17, VAR_18);
}
