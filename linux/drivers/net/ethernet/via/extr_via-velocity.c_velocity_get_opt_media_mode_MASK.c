
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int spd_dpx; } ;
struct velocity_info {int mii_status; TYPE_1__ options; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_0(struct velocity_info *VAR_5)
{
 u32 VAR_6 = 0;

 switch (VAR_5->options.spd_dpx) {
 case 128:
  VAR_6 = VAR_0;
  break;
 case 132:
  VAR_6 = VAR_3 | VAR_1;
  break;
 case 130:
  VAR_6 = VAR_2 | VAR_1;
  break;
 case 131:
  VAR_6 = VAR_3;
  break;
 case 129:
  VAR_6 = VAR_2;
  break;
 case 133:
  VAR_6 = VAR_4 | VAR_1;
  break;
 }
 VAR_5->mii_status = VAR_6;
 return VAR_6;
}
