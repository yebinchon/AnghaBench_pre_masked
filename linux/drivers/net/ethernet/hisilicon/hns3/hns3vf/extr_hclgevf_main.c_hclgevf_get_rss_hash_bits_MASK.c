
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ethtool_rxnfc {int data; scalar_t__ flow_type; } ;


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

__attribute__((used)) static u8 FUNC_0(struct ethtool_rxnfc *VAR_11)
{
 u8 VAR_12 = VAR_11->data & VAR_7 ? VAR_3 : 0;

 if (VAR_11->data & VAR_8)
  VAR_12 |= VAR_1;
 else
  VAR_12 &= ~VAR_1;

 if (VAR_11->data & VAR_6)
  VAR_12 |= VAR_2;
 else
  VAR_12 &= ~VAR_2;

 if (VAR_11->data & VAR_5)
  VAR_12 |= VAR_0;
 else
  VAR_12 &= ~VAR_0;

 if (VAR_11->flow_type == VAR_9 || VAR_11->flow_type == VAR_10)
  VAR_12 |= VAR_4;

 return VAR_12;
}
