
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
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
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static u64 FUNC_0(struct ethtool_rxnfc *VAR_14, u64 VAR_15)
{
 u64 VAR_16 = VAR_15;
 u64 VAR_17 = 0, VAR_18 = 0;

 if (VAR_14->data & VAR_8)
  VAR_16 |= VAR_5;
 else
  VAR_16 &= ~VAR_5;
 if (VAR_14->data & VAR_9)
  VAR_16 |= VAR_4;
 else
  VAR_16 &= ~VAR_4;

 if (VAR_14->flow_type == VAR_11 || VAR_14->flow_type == VAR_13) {
  VAR_17 = VAR_3;
  VAR_18 = VAR_2;
 } else if (VAR_14->flow_type == VAR_10 ||
    VAR_14->flow_type == VAR_12) {
  VAR_17 = VAR_1;
  VAR_18 = VAR_0;
 } else {

  return VAR_16;
 }

 if (VAR_14->data & VAR_7)
  VAR_16 |= VAR_17;
 else
  VAR_16 &= ~VAR_17;
 if (VAR_14->data & VAR_6)
  VAR_16 |= VAR_18;
 else
  VAR_16 &= ~VAR_18;

 return VAR_16;
}
