
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int phydev; } ;
struct hnae3_handle {TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {int (* get_media_type ) (struct hnae3_handle*,int*,int*) ;} ;
struct TYPE_4__ {int duplex; int speed; int mdio_support; void* port; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct TYPE_3__ {struct hnae3_ae_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,struct ethtool_link_ksettings*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (int ,struct ethtool_link_ksettings*) ;
 int FUNC_5 (struct hnae3_handle*,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_9,
       struct ethtool_link_ksettings *VAR_10)
{
 struct hnae3_handle *VAR_11 = FUNC_0(VAR_9);
 const struct hnae3_ae_ops *VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 u8 VAR_15;

 VAR_12 = VAR_11->ae_algo->ops;
 if (VAR_12->get_media_type)
  VAR_12->get_media_type(VAR_11, &VAR_14, &VAR_13);
 else
  return -VAR_1;

 switch (VAR_14) {
 case 128:
  VAR_10->base.port = VAR_6;
  FUNC_1(VAR_11, VAR_10);
  break;
 case 129:
  if (VAR_13 == VAR_3)
   VAR_10->base.port = VAR_4;
  else
   VAR_10->base.port = VAR_5;

  FUNC_1(VAR_11, VAR_10);
  break;
 case 131:
  VAR_10->base.port = VAR_6;
  FUNC_1(VAR_11, VAR_10);
  break;
 case 130:
  VAR_10->base.port = VAR_7;
  if (!VAR_9->phydev)
   FUNC_1(VAR_11, VAR_10);
  else
   FUNC_4(VAR_9->phydev, VAR_10);
  break;
 default:

  FUNC_3(VAR_9, "Unknown media type");
  return 0;
 }


 VAR_10->base.mdio_support = VAR_2;

 VAR_15 = FUNC_2(VAR_9);
 if (!VAR_15) {
  VAR_10->base.speed = VAR_8;
  VAR_10->base.duplex = VAR_0;
 }

 return 0;
}
