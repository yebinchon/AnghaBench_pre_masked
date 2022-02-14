
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct bnxt_link_info {int support_speeds; } ;
struct bnxt {struct bnxt_link_info link_info; } ;


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
 int FUNC_0 (struct net_device*,char*) ;
 struct bnxt* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_18, u32 VAR_19)
{
 struct bnxt *VAR_20 = FUNC_1(VAR_18);
 struct bnxt_link_info *VAR_21 = &VAR_20->link_info;
 u16 VAR_22 = VAR_21->support_speeds;
 u32 VAR_23 = 0;

 switch (VAR_19) {
 case 136:
  if (VAR_22 & VAR_1)
   VAR_23 = VAR_10;
  break;
 case 135:
  if (VAR_22 & VAR_3)
   VAR_23 = VAR_12;
  break;
 case 131:
  if (VAR_22 & VAR_6)
   VAR_23 = VAR_15;
  break;
 case 134:
  if (VAR_22 & VAR_2)
   VAR_23 = VAR_11;
  break;
 case 132:
  if (VAR_22 & VAR_4)
   VAR_23 = VAR_13;
  break;
 case 130:
  if (VAR_22 & VAR_5)
   VAR_23 = VAR_14;
  break;
 case 129:
  if (VAR_22 & VAR_7)
   VAR_23 = VAR_16;
  break;
 case 128:
  if (VAR_22 & VAR_8)
   VAR_23 = VAR_17;
  break;
 case 133:
  if (VAR_22 & VAR_0)
   VAR_23 = VAR_9;
  break;
 default:
  FUNC_0(VAR_18, "unsupported speed!\n");
  break;
 }
 return VAR_23;
}
