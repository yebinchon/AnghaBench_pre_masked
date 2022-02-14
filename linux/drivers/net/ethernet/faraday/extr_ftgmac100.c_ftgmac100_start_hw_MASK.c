
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ftgmac100 {scalar_t__ cur_duplex; scalar_t__ base; TYPE_1__* netdev; } ;
struct TYPE_2__ {int flags; int features; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct ftgmac100 *VAR_20)
{
 u32 VAR_21 = FUNC_0(VAR_20->base + VAR_16);


 VAR_21 &= (VAR_2 | VAR_4);


 VAR_21 |= VAR_14 |
   VAR_8 |
   VAR_15 |
   VAR_9 |
   VAR_1 |
   VAR_6 |
   VAR_13 |
   VAR_11;


 if (VAR_20->cur_duplex == VAR_0)
  VAR_21 |= VAR_3;
 if (VAR_20->netdev->flags & VAR_18)
  VAR_21 |= VAR_10;
 if (VAR_20->netdev->flags & VAR_17)
  VAR_21 |= VAR_12;
 else if (FUNC_2(VAR_20->netdev))
  VAR_21 |= VAR_5;


 if (VAR_20->netdev->features & VAR_19)
  VAR_21 |= VAR_7;


 FUNC_1(VAR_21, VAR_20->base + VAR_16);
}
