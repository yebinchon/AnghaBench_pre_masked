
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct e1000_adapter {int flags; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;


 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 if (!(VAR_8->flags & VAR_5))
  return;

 VAR_10 = FUNC_3(VAR_6);





 VAR_10 |= VAR_2;
 VAR_11 = FUNC_3(VAR_7);

 switch (VAR_9->mac.type) {
 default:
  VAR_11 |= (VAR_0 | VAR_1);
  break;
 case 129:
 case 128:



  for (VAR_13 = 0, VAR_14 = 0; VAR_13 < 8; VAR_13++) {
   VAR_12 = FUNC_3(FUNC_1(VAR_13));


   if (VAR_12 & ~(VAR_3 | VAR_4))
    continue;


   if (VAR_12)
    VAR_11 |= FUNC_0(VAR_13);

   VAR_14 |= VAR_12;
  }

  if (VAR_14 == (VAR_3 | VAR_4))
   break;


  for (VAR_13 = 0, VAR_14 = 0; VAR_13 < 8; VAR_13++)
   if (FUNC_3(FUNC_1(VAR_13)) == 0) {
    FUNC_4(FUNC_1(VAR_13), (VAR_3 |
            VAR_4));
    VAR_11 |= FUNC_0(1);
    VAR_14++;
    break;
   }

  if (!VAR_14)
   FUNC_2("Unable to create IPMI pass-through filter\n");
  break;
 }

 FUNC_4(VAR_7, VAR_11);
 FUNC_4(VAR_6, VAR_10);
}
