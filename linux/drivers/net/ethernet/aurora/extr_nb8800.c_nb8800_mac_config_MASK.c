
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int phydev; } ;
struct nb8800_priv {scalar_t__ speed; int clk; int duplex; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nb8800_priv*,int ,int,int) ;
 int FUNC_3 (struct nb8800_priv*,int ,int) ;
 struct nb8800_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_7)
{
 struct nb8800_priv *VAR_8 = FUNC_4(VAR_7);
 bool VAR_9 = VAR_8->speed == VAR_6;
 u32 VAR_10 = VAR_5 | VAR_1 | VAR_0;
 u32 VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 if (!VAR_8->duplex)
  VAR_11 |= VAR_1;

 if (VAR_9) {
  if (FUNC_5(VAR_7->phydev))
   VAR_11 |= VAR_5;

  VAR_11 |= VAR_0;
  VAR_13 = 125000000;


  VAR_12 = 255;
 } else {
  VAR_13 = 25000000;
  VAR_12 = 128;
 }

 VAR_14 = FUNC_0(VAR_13, FUNC_1(VAR_8->clk));

 FUNC_3(VAR_8, VAR_2, VAR_14);
 FUNC_3(VAR_8, VAR_4, VAR_12);
 FUNC_2(VAR_8, VAR_3, VAR_10, VAR_11);
}
