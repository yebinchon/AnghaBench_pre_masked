
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct encx24j600_priv {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ full_duplex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct encx24j600_priv*,int ) ;
 int FUNC_1 (struct encx24j600_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct encx24j600_priv *VAR_7)
{
 u16 VAR_8 = FUNC_0(VAR_7, VAR_3);

 if (VAR_7->autoneg == VAR_1) {
  VAR_8 |= VAR_0 | VAR_4;
 } else {
  VAR_8 &= ~VAR_0;
  if (VAR_7->speed == VAR_6)
   VAR_8 |= VAR_5;
  else
   VAR_8 &= ~VAR_5;

  if (VAR_7->full_duplex)
   VAR_8 |= VAR_2;
  else
   VAR_8 &= ~VAR_2;
 }
 FUNC_1(VAR_7, VAR_3, VAR_8);
}
