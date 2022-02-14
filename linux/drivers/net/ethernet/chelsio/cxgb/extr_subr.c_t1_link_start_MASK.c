
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_config {int requested_fc; int supported; int advertising; scalar_t__ autoneg; int speed; int requested_speed; int duplex; int requested_duplex; unsigned char fc; } ;
struct cphy {TYPE_4__* ops; void* state; } ;
struct cmac {TYPE_3__* ops; TYPE_2__* adapter; } ;
struct TYPE_8__ {int (* reset ) (struct cphy*,int ) ;int (* autoneg_enable ) (struct cphy*) ;int (* set_speed_duplex ) (struct cphy*,int,int) ;int (* advertise ) (struct cphy*,int) ;} ;
struct TYPE_7__ {int (* set_speed_duplex_fc ) (struct cmac*,int,int,unsigned int) ;} ;
struct TYPE_5__ {int nports; } ;
struct TYPE_6__ {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cphy*,int) ;
 int FUNC_1 (struct cmac*,int,int,unsigned int) ;
 int FUNC_2 (struct cphy*,int,int) ;
 int FUNC_3 (struct cphy*,int ) ;
 int FUNC_4 (struct cphy*) ;
 int FUNC_5 (struct cmac*,int,int,unsigned int) ;
 int FUNC_6 (struct cphy*,int ) ;

int FUNC_7(struct cphy *VAR_8, struct cmac *VAR_9, struct link_config *VAR_10)
{
 unsigned int VAR_11 = VAR_10->requested_fc & (VAR_3 | VAR_4);

 if (VAR_10->supported & VAR_7) {
  VAR_10->advertising &= ~(VAR_0 | VAR_1);
  if (VAR_11) {
   if (VAR_11 == ((VAR_3 | VAR_4) &
       (VAR_9->adapter->params.nports < 2)))
    VAR_10->advertising |= VAR_1;
   else {
    VAR_10->advertising |= VAR_0;
    if (VAR_11 == VAR_3)
     VAR_10->advertising |= VAR_1;
   }
  }
  VAR_8->ops->advertise(VAR_8, VAR_10->advertising);

  if (VAR_10->autoneg == VAR_2) {
   VAR_10->speed = VAR_10->requested_speed;
   VAR_10->duplex = VAR_10->requested_duplex;
   VAR_10->fc = (unsigned char)VAR_11;
   VAR_9->ops->set_speed_duplex_fc(VAR_9, VAR_10->speed,
            VAR_10->duplex, VAR_11);

   VAR_8->state = VAR_6;
   VAR_8->ops->set_speed_duplex(VAR_8, VAR_10->speed, VAR_10->duplex);
   VAR_8->ops->reset(VAR_8, 0);
  } else {
   VAR_8->state = VAR_5;
   VAR_8->ops->autoneg_enable(VAR_8);
  }
 } else {
  VAR_8->state = VAR_6;
  VAR_9->ops->set_speed_duplex_fc(VAR_9, -1, -1, VAR_11);
  VAR_10->fc = (unsigned char)VAR_11;
  VAR_8->ops->reset(VAR_8, 0);
 }
 return 0;
}
