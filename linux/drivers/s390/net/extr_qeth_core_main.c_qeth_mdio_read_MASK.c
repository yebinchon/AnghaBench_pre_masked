
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx_errors; } ;
struct TYPE_3__ {int link_type; } ;
struct qeth_card {TYPE_2__ stats; TYPE_1__ info; } ;
struct net_device {int* dev_addr; struct qeth_card* ml_priv; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_21, int VAR_22, int VAR_23)
{
 struct qeth_card *VAR_24 = VAR_21->ml_priv;
 int VAR_25 = 0;

 switch (VAR_23) {
 case 144:
  VAR_25 = VAR_1;
  if ((VAR_24->info.link_type != VAR_19) &&
      (VAR_24->info.link_type != VAR_20) &&
      (VAR_24->info.link_type != VAR_17) &&
      (VAR_24->info.link_type != VAR_18))
   VAR_25 |= VAR_2;
  break;
 case 143:
  VAR_25 = VAR_9 | VAR_8 | VAR_10 |
       VAR_7 | VAR_6 | VAR_5 | VAR_4 |
       VAR_3;
  break;
 case 134:
  VAR_25 = (VAR_21->dev_addr[0] << 16) | (VAR_21->dev_addr[1] << 8) |
       VAR_21->dev_addr[2];
  VAR_25 = (VAR_25 >> 5) & 0xFFFF;
  break;
 case 133:
  VAR_25 = (VAR_21->dev_addr[2] << 10) & 0xFFFF;
  break;
 case 145:
  VAR_25 = VAR_0;
  break;
 case 138:
  VAR_25 = VAR_15 | VAR_14 | VAR_13 | VAR_12 |
       VAR_11 | VAR_16;
  break;
 case 141:
  break;
 case 142:
  break;
 case 140:
  break;
 case 136:
  break;
 case 132:
  VAR_25 = VAR_24->stats.rx_errors;
  break;
 case 129:
  break;
 case 131:
  break;
 case 139:
  break;
 case 135:
  break;
 case 130:
  break;
 case 128:
  break;
 case 137:
  break;
 default:
  break;
 }
 return VAR_25;
}
