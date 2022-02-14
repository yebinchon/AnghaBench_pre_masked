
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2 {int leds_save; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;




 struct bnx2* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_9, enum ethtool_phys_id_state VAR_10)
{
 struct bnx2 *VAR_11 = FUNC_2(VAR_9);

 switch (VAR_10) {
 case 131:
  VAR_11->leds_save = FUNC_0(VAR_11, VAR_7);
  FUNC_1(VAR_11, VAR_7, VAR_8);
  return 1;

 case 128:
  FUNC_1(VAR_11, VAR_0, VAR_4 |
   VAR_1 |
   VAR_2 |
   VAR_3 |
   VAR_6 |
   VAR_5);
  break;

 case 129:
  FUNC_1(VAR_11, VAR_0, VAR_4);
  break;

 case 130:
  FUNC_1(VAR_11, VAR_0, 0);
  FUNC_1(VAR_11, VAR_7, VAR_11->leds_save);
  break;
 }

 return 0;
}
