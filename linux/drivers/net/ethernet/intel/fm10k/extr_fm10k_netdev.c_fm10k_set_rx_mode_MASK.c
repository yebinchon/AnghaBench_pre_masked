
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct TYPE_3__ {int (* update_xcast_mode ) (struct fm10k_hw*,int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; } ;
struct fm10k_intfc {int xcast_mode; int glort; struct fm10k_hw hw; } ;


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
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 scalar_t__ FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct fm10k_intfc*,int ,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 struct fm10k_intfc* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct fm10k_hw*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_14)
{
 struct fm10k_intfc *VAR_15 = FUNC_7(VAR_14);
 struct fm10k_hw *VAR_16 = &VAR_15->hw;
 int VAR_17;


 if (!(VAR_14->flags & VAR_9))
  return;


 VAR_17 = (VAR_14->flags & VAR_8) ? VAR_4 :
       (VAR_14->flags & VAR_5) ? VAR_1 :
       (VAR_14->flags & (VAR_6 | VAR_7)) ?
       VAR_2 : VAR_3;

 FUNC_4(VAR_15);


 if (VAR_15->xcast_mode != VAR_17) {

  if (VAR_17 == VAR_4)
   FUNC_6(VAR_15, VAR_0,
       0, 1);


  if (VAR_15->xcast_mode == VAR_4)
   FUNC_2(VAR_15);


  if (FUNC_3(VAR_15))
   VAR_16->mac.ops.update_xcast_mode(VAR_16, VAR_15->glort,
            VAR_17);


  VAR_15->xcast_mode = VAR_17;
 }


 FUNC_1(VAR_14, VAR_12, VAR_13);
 FUNC_0(VAR_14, VAR_10, VAR_11);

 FUNC_5(VAR_15);
}
