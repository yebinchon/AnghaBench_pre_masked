
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int link_up; int autoneg; int duplex; int line_speed; int req_duplex; int req_line_speed; } ;


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
 int FUNC_0 (struct bnx2*,int ,int*) ;
 int FUNC_1 (struct bnx2*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bnx2 *VAR_13)
{
 u32 VAR_14, VAR_15;

 VAR_13->link_up = 1;

 FUNC_1(VAR_13, VAR_3, VAR_5);
 FUNC_0(VAR_13, VAR_8, &VAR_14);
 FUNC_1(VAR_13, VAR_3, VAR_4);

 if ((VAR_13->autoneg & VAR_0) == 0) {
  VAR_13->line_speed = VAR_13->req_line_speed;
  VAR_13->duplex = VAR_13->req_duplex;
  return 0;
 }
 VAR_15 = VAR_14 & VAR_7;
 switch (VAR_15) {
  case 132:
   VAR_13->line_speed = VAR_9;
   break;
  case 131:
   VAR_13->line_speed = VAR_10;
   break;
  case 130:
  case 129:
   VAR_13->line_speed = VAR_11;
   break;
  case 128:
   VAR_13->line_speed = VAR_12;
   break;
 }
 if (VAR_14 & VAR_6)
  VAR_13->duplex = VAR_1;
 else
  VAR_13->duplex = VAR_2;
 return 0;
}
