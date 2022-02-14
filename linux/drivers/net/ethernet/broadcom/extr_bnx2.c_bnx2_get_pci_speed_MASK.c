
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int bus_speed_mhz; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bnx2*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bnx2 *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_2);
 if (VAR_9 & VAR_5) {
  u32 VAR_10;

  VAR_8->flags |= VAR_0;

  VAR_10 = FUNC_0(VAR_8, VAR_6);

  VAR_10 &= VAR_7;
  switch (VAR_10) {
  case 136:
   VAR_8->bus_speed_mhz = 133;
   break;

  case 129:
   VAR_8->bus_speed_mhz = 100;
   break;

  case 131:
  case 130:
   VAR_8->bus_speed_mhz = 66;
   break;

  case 133:
  case 132:
   VAR_8->bus_speed_mhz = 50;
   break;

  case 128:
  case 135:
  case 134:
   VAR_8->bus_speed_mhz = 33;
   break;
  }
 }
 else {
  if (VAR_9 & VAR_4)
   VAR_8->bus_speed_mhz = 66;
  else
   VAR_8->bus_speed_mhz = 33;
 }

 if (VAR_9 & VAR_3)
  VAR_8->flags |= VAR_1;

}
