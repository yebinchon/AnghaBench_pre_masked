
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int uhs_max_dtr; } ;
struct mmc_card {int sd_bus_speed; TYPE_1__ sw_caps; int host; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_card*,int,int ,int,int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct mmc_card *VAR_10, u8 *VAR_11)
{
 int VAR_12;
 unsigned int VAR_13 = 0;

 switch (VAR_10->sd_bus_speed) {
 case 131:
  VAR_13 = VAR_1;
  VAR_10->sw_caps.uhs_max_dtr = VAR_6;
  break;
 case 132:
  VAR_13 = VAR_0;
  VAR_10->sw_caps.uhs_max_dtr = VAR_5;
  break;
 case 128:
  VAR_13 = VAR_4;
  VAR_10->sw_caps.uhs_max_dtr = VAR_9;
  break;
 case 129:
  VAR_13 = VAR_3;
  VAR_10->sw_caps.uhs_max_dtr = VAR_8;
  break;
 case 130:
  VAR_13 = VAR_2;
  VAR_10->sw_caps.uhs_max_dtr = VAR_7;
  break;
 default:
  return 0;
 }

 VAR_12 = FUNC_1(VAR_10, 1, 0, VAR_10->sd_bus_speed, VAR_11);
 if (VAR_12)
  return VAR_12;

 if ((VAR_11[16] & 0xF) != VAR_10->sd_bus_speed)
  FUNC_4("%s: Problem setting bus speed mode!\n",
   FUNC_0(VAR_10->host));
 else {
  FUNC_3(VAR_10->host, VAR_13);
  FUNC_2(VAR_10->host, VAR_10->sw_caps.uhs_max_dtr);
 }

 return 0;
}
