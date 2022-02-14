
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int shift; int mult; int mask; int read; } ;
struct fec_enet_private {int cycle_speed; int tmreg_lock; TYPE_1__ cc; int tc; scalar_t__ hwp; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,TYPE_1__*,int ) ;
 int FUNC_8 (int,scalar_t__) ;

void FUNC_9(struct net_device *VAR_9)
{
 struct fec_enet_private *VAR_10 = FUNC_4(VAR_9);
 unsigned long VAR_11;
 int VAR_12;

 VAR_12 = 1000000000 / VAR_10->cycle_speed;


 FUNC_5(&VAR_10->tmreg_lock, VAR_11);


 FUNC_8(VAR_12 << VAR_7, VAR_10->hwp + VAR_2);


 FUNC_8(VAR_4, VAR_10->hwp + VAR_1);

 FUNC_8(VAR_5 | VAR_6,
  VAR_10->hwp + VAR_0);

 FUNC_3(&VAR_10->cc, 0, sizeof(VAR_10->cc));
 VAR_10->cc.read = VAR_8;
 VAR_10->cc.mask = FUNC_0(31);
 VAR_10->cc.shift = 31;
 VAR_10->cc.mult = VAR_3;


 FUNC_7(&VAR_10->tc, &VAR_10->cc, FUNC_2(FUNC_1()));

 FUNC_6(&VAR_10->tmreg_lock, VAR_11);
}
