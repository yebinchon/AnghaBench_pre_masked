
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_config {unsigned int supported; int requested_fc; int fc; int advertising; int autoneg; int duplex; int requested_duplex; int speed; int requested_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct link_config *VAR_8, unsigned int VAR_9)
{
 VAR_8->supported = VAR_9;
 VAR_8->requested_speed = VAR_8->speed = VAR_6;
 VAR_8->requested_duplex = VAR_8->duplex = VAR_2;
 VAR_8->requested_fc = VAR_8->fc = VAR_4 | VAR_5;
 if (VAR_8->supported & VAR_7) {
  VAR_8->advertising = VAR_8->supported;
  VAR_8->autoneg = VAR_1;
  VAR_8->requested_fc |= VAR_3;
 } else {
  VAR_8->advertising = 0;
  VAR_8->autoneg = VAR_0;
 }
}
