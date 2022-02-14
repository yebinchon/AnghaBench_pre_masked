
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int chip_id; int chip_ver; int chip_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mxl111sf_state*,int ,int*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct mxl111sf_state *VAR_5)
{
 int VAR_6;
 u8 VAR_7, VAR_8;
 char *VAR_9, *VAR_10;

 if ((VAR_5->chip_id) && (VAR_5->chip_ver))
  return 0;

 VAR_6 = FUNC_0(VAR_5, VAR_0, &VAR_7);
 if (FUNC_1(VAR_6))
  goto fail;
 VAR_5->chip_id = VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_4, &VAR_8);
 if (FUNC_1(VAR_6))
  goto fail;
 VAR_5->chip_ver = VAR_8;

 switch (VAR_7) {
 case 0x61:
  VAR_9 = "MxL101SF";
  break;
 case 0x63:
  VAR_9 = "MxL111SF";
  break;
 default:
  VAR_9 = "UNKNOWN MxL1X1";
  break;
 }
 switch (VAR_8) {
 case 0x36:
  VAR_5->chip_rev = VAR_1;
  VAR_10 = "v6";
  break;
 case 0x08:
  VAR_5->chip_rev = VAR_2;
  VAR_10 = "v8_100";
  break;
 case 0x18:
  VAR_5->chip_rev = VAR_3;
  VAR_10 = "v8_200";
  break;
 default:
  VAR_5->chip_rev = 0;
  VAR_10 = "UNKNOWN REVISION";
  break;
 }
 FUNC_2("%s detected, %s (0x%x)", VAR_9, VAR_10, VAR_8);
fail:
 return VAR_6;
}
