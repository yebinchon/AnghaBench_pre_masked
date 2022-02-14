
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct e1000_hw *VAR_5, u32 VAR_6)
{
 bool VAR_7 = 0;
 u32 VAR_8, VAR_9;


 if (VAR_5->mac.type == VAR_3) {
  VAR_9 = FUNC_0(VAR_2);
  VAR_8 = FUNC_0(VAR_0);

  if ((VAR_5->phy.media_type == VAR_4) &&
      !(VAR_8 & VAR_1))
   VAR_7 = !!(VAR_9 & VAR_6);
 }

 return VAR_7;
}
