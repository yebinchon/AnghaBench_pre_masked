
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mvpp2_port {int dummy; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;


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






 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mvpp2_port*,int,int) ;

int FUNC_2(struct mvpp2_port *VAR_17, struct ethtool_rxnfc *VAR_18)
{
 u16 VAR_19 = 0;
 u32 VAR_20;

 VAR_20 = FUNC_0(VAR_18->flow_type);

 switch (VAR_20) {
 case 131:
 case 129:
 case 130:
 case 128:
  if (VAR_18->data & VAR_14)
   VAR_19 |= VAR_7;
  if (VAR_18->data & VAR_15)
   VAR_19 |= VAR_6;

 case 133:
 case 132:
  if (VAR_18->data & VAR_12)
   VAR_19 |= VAR_8;
  if (VAR_18->data & VAR_16)
   VAR_19 |= VAR_9;
  if (VAR_18->data & VAR_13)
   VAR_19 |= VAR_5;
  if (VAR_18->data & VAR_11)
   VAR_19 |= (VAR_2 |
         VAR_4);
  if (VAR_18->data & VAR_10)
   VAR_19 |= (VAR_1 |
         VAR_3);
  break;
 default: return -VAR_0;
 }

 return FUNC_1(VAR_17, VAR_20, VAR_19);
}
