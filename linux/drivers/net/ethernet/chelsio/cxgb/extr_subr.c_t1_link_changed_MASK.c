
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct link_config {int speed; int duplex; int requested_fc; scalar_t__ autoneg; unsigned char fc; } ;
struct cphy {TYPE_1__* ops; } ;
struct cmac {TYPE_3__* ops; } ;
struct TYPE_10__ {TYPE_2__* port; } ;
typedef TYPE_4__ adapter_t ;
struct TYPE_9__ {int (* set_speed_duplex_fc ) (struct cmac*,int,int,int) ;} ;
struct TYPE_8__ {struct cmac* mac; struct link_config link_config; struct cphy* phy; } ;
struct TYPE_7__ {int (* get_link_status ) (struct cphy*,int*,int*,int*,int*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cphy*,int*,int*,int*,int*) ;
 int FUNC_1 (struct cmac*,int,int,int) ;
 int FUNC_2 (TYPE_4__*,int,int,int,int,int) ;

void FUNC_3(adapter_t *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 struct cphy *VAR_12 = VAR_6->port[VAR_7].phy;
 struct link_config *VAR_13 = &VAR_6->port[VAR_7].link_config;

 VAR_12->ops->get_link_status(VAR_12, &VAR_8, &VAR_9, &VAR_10, &VAR_11);

 VAR_13->speed = VAR_9 < 0 ? VAR_5 : VAR_9;
 VAR_13->duplex = VAR_10 < 0 ? VAR_1 : VAR_10;
 if (!(VAR_13->requested_fc & VAR_2))
  VAR_11 = VAR_13->requested_fc & (VAR_3 | VAR_4);

 if (VAR_8 && VAR_9 >= 0 && VAR_13->autoneg == VAR_0) {

  struct cmac *VAR_14 = VAR_6->port[VAR_7].mac;

  VAR_14->ops->set_speed_duplex_fc(VAR_14, VAR_9, VAR_10, VAR_11);
  VAR_13->fc = (unsigned char)VAR_11;
 }
 FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
