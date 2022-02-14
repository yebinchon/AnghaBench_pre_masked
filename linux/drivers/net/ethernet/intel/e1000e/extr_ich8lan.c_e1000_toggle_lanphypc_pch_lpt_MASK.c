
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct e1000_hw *VAR_9)
{
 u32 VAR_10;


 VAR_10 = FUNC_1(VAR_7);
 VAR_10 &= ~VAR_6;
 VAR_10 |= VAR_5;
 FUNC_2(VAR_7, VAR_10);


 VAR_10 = FUNC_1(VAR_0);
 VAR_10 |= VAR_3;
 VAR_10 &= ~VAR_4;
 FUNC_2(VAR_0, VAR_10);
 FUNC_0();
 FUNC_4(10, 20);
 VAR_10 &= ~VAR_3;
 FUNC_2(VAR_0, VAR_10);
 FUNC_0();

 if (VAR_9->mac.type < VAR_8) {
  FUNC_3(50);
 } else {
  u16 VAR_11 = 20;

  do {
   FUNC_4(5000, 6000);
  } while (!(FUNC_1(VAR_1) & VAR_2) && VAR_11--);

  FUNC_3(30);
 }
}
