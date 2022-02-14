
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {int func; } ;
struct e1000_hw {TYPE_1__ phy; TYPE_2__ bus; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_11)
{
 s32 VAR_12 = VAR_9;
 u32 VAR_13 = VAR_5;

 if (VAR_11->bus.func == 1)
  VAR_13 = VAR_6;
 else if (VAR_11->bus.func == VAR_3)
  VAR_13 = VAR_7;
 else if (VAR_11->bus.func == VAR_4)
  VAR_13 = VAR_8;

 while (VAR_12) {
  if (FUNC_2(VAR_2) & VAR_13)
   break;
  FUNC_3(1000, 2000);
  VAR_12--;
 }
 if (!VAR_12)
  FUNC_0("MNG configuration cycle has not completed.\n");


 if (((FUNC_2(VAR_0) & VAR_1) == 0) &&
     (VAR_11->phy.type == VAR_10))
  FUNC_1(VAR_11);

 return 0;
}
