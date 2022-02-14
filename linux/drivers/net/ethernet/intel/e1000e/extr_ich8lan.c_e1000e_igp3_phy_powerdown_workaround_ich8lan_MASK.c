
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; TYPE_2__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(struct e1000_hw *VAR_10)
{
 u32 VAR_11;
 u16 VAR_12;
 u8 VAR_13 = 0;

 if (VAR_10->phy.type != VAR_9)
  return;


 do {

  VAR_11 = FUNC_3(VAR_7);
  VAR_11 |= (VAR_2 |
   VAR_3);
  FUNC_4(VAR_7, VAR_11);




  if (VAR_10->mac.type == VAR_8)
   FUNC_0(VAR_10);


  FUNC_1(VAR_10, VAR_4, &VAR_12);
  VAR_12 &= ~VAR_5;
  FUNC_2(VAR_10, VAR_4, VAR_12 | VAR_6);


  FUNC_1(VAR_10, VAR_4, &VAR_12);
  VAR_12 &= VAR_5;
  if ((VAR_12 == VAR_6) || VAR_13)
   break;


  VAR_11 = FUNC_3(VAR_0);
  FUNC_4(VAR_0, VAR_11 | VAR_1);
  VAR_13++;
 } while (VAR_13);
}
