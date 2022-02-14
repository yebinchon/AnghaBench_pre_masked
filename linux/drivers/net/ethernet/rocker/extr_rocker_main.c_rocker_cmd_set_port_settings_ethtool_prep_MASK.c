
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_tlv {int dummy; } ;
struct rocker_port {int pport; } ;
struct rocker_desc_info {int dummy; } ;
struct TYPE_2__ {int autoneg; int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rocker_desc_info*,struct rocker_tlv*) ;
 struct rocker_tlv* FUNC_1 (struct rocker_desc_info*,int ) ;
 scalar_t__ FUNC_2 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_4 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(const struct rocker_port *VAR_8,
       struct rocker_desc_info *VAR_9,
       void *VAR_10)
{
 struct ethtool_link_ksettings *VAR_11 = VAR_10;
 struct rocker_tlv *VAR_12;

 if (FUNC_2(VAR_9, VAR_6,
          VAR_7))
  return -VAR_0;
 VAR_12 = FUNC_1(VAR_9, VAR_1);
 if (!VAR_12)
  return -VAR_0;
 if (FUNC_3(VAR_9, VAR_4,
          VAR_8->pport))
  return -VAR_0;
 if (FUNC_3(VAR_9, VAR_5,
          VAR_11->base.speed))
  return -VAR_0;
 if (FUNC_4(VAR_9, VAR_3,
         VAR_11->base.duplex))
  return -VAR_0;
 if (FUNC_4(VAR_9, VAR_2,
         VAR_11->base.autoneg))
  return -VAR_0;
 FUNC_0(VAR_9, VAR_12);
 return 0;
}
