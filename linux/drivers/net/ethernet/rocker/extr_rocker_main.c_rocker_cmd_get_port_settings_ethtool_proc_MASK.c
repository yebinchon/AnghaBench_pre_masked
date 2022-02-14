
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rocker_tlv {int dummy; } ;
struct rocker_port {int dummy; } ;
struct rocker_desc_info {int dummy; } ;
struct TYPE_2__ {int phy_address; int autoneg; int duplex; int speed; int port; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_2 (struct rocker_tlv const*) ;
 scalar_t__ FUNC_3 (struct rocker_tlv const*) ;
 int FUNC_4 (struct rocker_tlv const**,int ,struct rocker_desc_info const*) ;
 int FUNC_5 (struct rocker_tlv const**,int ,struct rocker_tlv const*) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_6(const struct rocker_port *VAR_14,
       const struct rocker_desc_info *VAR_15,
       void *VAR_16)
{
 struct ethtool_link_ksettings *VAR_17 = VAR_16;
 const struct rocker_tlv *VAR_18[VAR_7 + 1];
 const struct rocker_tlv *VAR_19[VAR_10 + 1];
 u32 VAR_20;
 u8 VAR_21;
 u8 VAR_22;

 FUNC_4(VAR_18, VAR_7, VAR_15);
 if (!VAR_18[VAR_6])
  return -VAR_4;

 FUNC_5(VAR_19, VAR_10,
    VAR_18[VAR_6]);
 if (!VAR_19[VAR_11] ||
     !VAR_19[VAR_9] ||
     !VAR_19[VAR_8])
  return -VAR_4;

 VAR_20 = FUNC_2(VAR_19[VAR_11]);
 VAR_21 = FUNC_3(VAR_19[VAR_9]);
 VAR_22 = FUNC_3(VAR_19[VAR_8]);

 FUNC_1(VAR_17, VAR_13);
 FUNC_0(VAR_17, VAR_13, VAR_12);

 VAR_17->base.phy_address = 0xff;
 VAR_17->base.port = VAR_5;
 VAR_17->base.speed = VAR_20;
 VAR_17->base.duplex = VAR_21 ? VAR_2 : VAR_3;
 VAR_17->base.autoneg = VAR_22 ? VAR_1 : VAR_0;

 return 0;
}
