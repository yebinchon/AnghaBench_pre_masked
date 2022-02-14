
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {int line_speed; scalar_t__ duplex; } ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_3 (struct link_params*,struct link_vars*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct link_params *VAR_11,
         struct link_vars *VAR_12)
{
 struct bnx2x *VAR_13 = VAR_11->bp;
 u8 VAR_14 = VAR_11->port;
 u16 VAR_15 = 0;

 FUNC_0(VAR_10, "setting link speed & duplex\n");
 FUNC_1(VAR_13, VAR_8 + VAR_14*0x400 +
         VAR_7,
         (VAR_2 |
   VAR_6 |
   VAR_3));
 switch (VAR_12->line_speed) {
 case 131:
  VAR_15 |= VAR_6;
  break;

 case 130:
  VAR_15 |= VAR_5;
  break;

 case 129:
  VAR_15 |= VAR_4;
  break;

 case 128:
  VAR_15 |= (VAR_2 | VAR_4);
  break;

 default:

  FUNC_0(VAR_10, "Invalid line_speed 0x%x\n",
      VAR_12->line_speed);
  return -VAR_1;
 }

 if (VAR_12->duplex == VAR_0)
  VAR_15 |= VAR_3;
 FUNC_2(VAR_13,
        VAR_8 + VAR_14*0x400 + VAR_7,
        VAR_15);

 FUNC_3(VAR_11, VAR_12, VAR_9, VAR_12->line_speed);
 return 0;
}
