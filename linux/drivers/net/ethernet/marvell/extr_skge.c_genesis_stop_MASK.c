
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct skge_port {int port; struct skge_hw* hw; } ;
struct skge_hw {scalar_t__ phy_type; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct skge_hw*,int) ;
 int FUNC_2 (struct skge_hw*,int ) ;
 int FUNC_3 (struct skge_hw*,int ) ;
 int FUNC_4 (struct skge_hw*,int ,int) ;
 int FUNC_5 (struct skge_hw*,int ,int ) ;
 int FUNC_6 (struct skge_hw*,int,int ) ;
 int FUNC_7 (struct skge_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_8(struct skge_port *VAR_15)
{
 struct skge_hw *VAR_16 = VAR_15->hw;
 int VAR_17 = VAR_15->port;
 unsigned VAR_18 = 1000;
 u16 VAR_19;


 VAR_19 = FUNC_6(VAR_16, VAR_17, VAR_12);
 VAR_19 &= ~(VAR_13 | VAR_14);
 FUNC_7(VAR_16, VAR_17, VAR_12, VAR_19);

 FUNC_1(VAR_16, VAR_17);


 FUNC_4(VAR_16, VAR_1,
       VAR_17 == 0 ? VAR_8 : VAR_9);


 FUNC_4(VAR_16, FUNC_0(VAR_17, VAR_11), VAR_6);
 do {
  FUNC_4(VAR_16, FUNC_0(VAR_17, VAR_11), VAR_7);
  if (!(FUNC_2(VAR_16, FUNC_0(VAR_17, VAR_11)) & VAR_7))
   break;
 } while (--VAR_18 > 0);


 if (VAR_16->phy_type != VAR_10) {
  u32 VAR_20 = FUNC_3(VAR_16, VAR_0);
  if (VAR_17 == 0) {
   VAR_20 |= VAR_2;
   VAR_20 &= ~VAR_4;
  } else {
   VAR_20 |= VAR_3;
   VAR_20 &= ~VAR_5;
  }
  FUNC_5(VAR_16, VAR_0, VAR_20);
  FUNC_3(VAR_16, VAR_0);
 }

 FUNC_7(VAR_16, VAR_17, VAR_12,
   FUNC_6(VAR_16, VAR_17, VAR_12)
   & ~(VAR_13 | VAR_14));

 FUNC_6(VAR_16, VAR_17, VAR_12);
}
