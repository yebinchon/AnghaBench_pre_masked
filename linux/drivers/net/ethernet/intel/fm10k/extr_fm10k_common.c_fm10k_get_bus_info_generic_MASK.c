
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {void* payload; void* speed; void* width; } ;
struct TYPE_3__ {void* payload; void* speed; void* width; } ;
struct fm10k_hw {TYPE_2__ bus; TYPE_1__ bus_caps; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;




 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_0 (struct fm10k_hw*,int ) ;

s32 FUNC_1(struct fm10k_hw *VAR_21)
{
 u16 VAR_22, VAR_23, VAR_24, VAR_25;


 VAR_22 = FUNC_0(VAR_21, VAR_4);

 switch (VAR_22 & VAR_7) {
 case 131:
  VAR_21->bus_caps.width = VAR_16;
  break;
 case 130:
  VAR_21->bus_caps.width = VAR_17;
  break;
 case 129:
  VAR_21->bus_caps.width = VAR_18;
  break;
 case 128:
  VAR_21->bus_caps.width = VAR_19;
  break;
 default:
  VAR_21->bus_caps.width = VAR_20;
  break;
 }

 switch (VAR_22 & VAR_5) {
 case 134:
  VAR_21->bus_caps.speed = VAR_12;
  break;
 case 133:
  VAR_21->bus_caps.speed = VAR_13;
  break;
 case 132:
  VAR_21->bus_caps.speed = VAR_14;
  break;
 default:
  VAR_21->bus_caps.speed = VAR_15;
  break;
 }


 VAR_24 = FUNC_0(VAR_21, VAR_0);

 switch (VAR_24 & VAR_1) {
 case 140:
  VAR_21->bus_caps.payload = VAR_8;
  break;
 case 139:
  VAR_21->bus_caps.payload = VAR_9;
  break;
 case 138:
  VAR_21->bus_caps.payload = VAR_10;
  break;
 default:
  VAR_21->bus_caps.payload = VAR_11;
  break;
 }


 VAR_23 = FUNC_0(VAR_21, VAR_6);

 switch (VAR_23 & VAR_7) {
 case 131:
  VAR_21->bus.width = VAR_16;
  break;
 case 130:
  VAR_21->bus.width = VAR_17;
  break;
 case 129:
  VAR_21->bus.width = VAR_18;
  break;
 case 128:
  VAR_21->bus.width = VAR_19;
  break;
 default:
  VAR_21->bus.width = VAR_20;
  break;
 }

 switch (VAR_23 & VAR_5) {
 case 134:
  VAR_21->bus.speed = VAR_12;
  break;
 case 133:
  VAR_21->bus.speed = VAR_13;
  break;
 case 132:
  VAR_21->bus.speed = VAR_14;
  break;
 default:
  VAR_21->bus.speed = VAR_15;
  break;
 }


 VAR_25 = FUNC_0(VAR_21, VAR_2);

 switch (VAR_25 & VAR_3) {
 case 137:
  VAR_21->bus.payload = VAR_8;
  break;
 case 136:
  VAR_21->bus.payload = VAR_9;
  break;
 case 135:
  VAR_21->bus.payload = VAR_10;
  break;
 default:
  VAR_21->bus.payload = VAR_11;
  break;
 }

 return 0;
}
