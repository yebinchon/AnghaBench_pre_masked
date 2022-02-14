
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct u132_port {int Status; } ;
struct u132 {int num_ports; int hc_control; TYPE_1__* platform_dev; struct u132_port* port; } ;
struct TYPE_4__ {int * portstatus; } ;
struct TYPE_3__ {int dev; } ;


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
 int FUNC_0 (int *,char*) ;
 TYPE_2__ VAR_12 ;
 int FUNC_1 (struct u132*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct u132 *VAR_13, u16 VAR_14,
 u16 VAR_15)
{
 if (VAR_15 == 0 || VAR_15 > VAR_13->num_ports) {
  return -VAR_0;
 } else {
  int VAR_16 = VAR_15 - 1;
  u32 VAR_17;
  struct u132_port *VAR_18 = &VAR_13->port[VAR_16];
  VAR_18->Status &= ~(1 << VAR_14);
  switch (VAR_14) {
  case 130:
   VAR_17 = VAR_4;
   break;
  case 134:
   VAR_17 = VAR_8;
   break;
  case 128:
   VAR_17 = VAR_9;
   if ((VAR_13->hc_control & VAR_2)
    != VAR_3) {
    FUNC_0(&VAR_13->platform_dev->dev, "TODO resume_"
     "root_hub\n");
   }
   break;
  case 131:
   VAR_17 = VAR_11;
   break;
  case 129:
   VAR_17 = VAR_6;
   break;
  case 135:
   VAR_17 = VAR_5;
   break;
  case 133:
   VAR_17 = VAR_7;
   break;
  case 132:
   VAR_17 = VAR_10;
   break;
  default:
   return -VAR_1;
  }
  return FUNC_1(VAR_13, VAR_12.portstatus[VAR_16],
         VAR_17);
 }
}
