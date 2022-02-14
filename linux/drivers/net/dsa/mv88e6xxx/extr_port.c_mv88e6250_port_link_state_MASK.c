
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phylink_link_state {int link; int an_enabled; int an_complete; int interface; void* duplex; void* speed; } ;
struct mv88e6xxx_chip {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int*) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_10, int VAR_11,
         struct phylink_link_state *VAR_12)
{
 int VAR_13;
 u16 VAR_14;

 VAR_13 = FUNC_0(VAR_10, VAR_11, VAR_5, &VAR_14);
 if (VAR_13)
  return VAR_13;

 if (VAR_11 < 5) {
  switch (VAR_14 & VAR_4) {
  case 128:
   VAR_12->speed = VAR_7;
   VAR_12->duplex = VAR_1;
   break;
  case 130:
   VAR_12->speed = VAR_8;
   VAR_12->duplex = VAR_1;
   break;
  case 129:
   VAR_12->speed = VAR_7;
   VAR_12->duplex = VAR_0;
   break;
  case 131:
   VAR_12->speed = VAR_8;
   VAR_12->duplex = VAR_0;
   break;
  default:
   VAR_12->speed = VAR_9;
   VAR_12->duplex = VAR_2;
   break;
  }
 } else {
  switch (VAR_14 & VAR_4) {
  case 132:
   VAR_12->speed = VAR_7;
   VAR_12->duplex = VAR_1;
   break;
  case 134:
   VAR_12->speed = VAR_8;
   VAR_12->duplex = VAR_1;
   break;
  case 133:
   VAR_12->speed = VAR_7;
   VAR_12->duplex = VAR_0;
   break;
  case 135:
   VAR_12->speed = VAR_8;
   VAR_12->duplex = VAR_0;
   break;
  default:
   VAR_12->speed = VAR_9;
   VAR_12->duplex = VAR_2;
   break;
  }
 }

 VAR_12->link = !!(VAR_14 & VAR_3);
 VAR_12->an_enabled = 1;
 VAR_12->an_complete = VAR_12->link;
 VAR_12->interface = VAR_6;

 return 0;
}
