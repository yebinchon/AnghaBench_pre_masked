
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {char* fw_ver; } ;


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






 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int,char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (struct tg3*,int,int*) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_15, u32 VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_2(VAR_15->fw_ver, "sb", VAR_14 - FUNC_1(VAR_15->fw_ver) - 1);

 if ((VAR_16 & VAR_12) != VAR_11)
  return;

 switch (VAR_16 & VAR_13) {
 case 133:
  VAR_17 = VAR_5;
  break;
 case 132:
  VAR_17 = VAR_6;
  break;
 case 131:
  VAR_17 = VAR_7;
  break;
 case 130:
  VAR_17 = VAR_8;
  break;
 case 129:
  VAR_17 = VAR_9;
  break;
 case 128:
  VAR_17 = VAR_10;
  break;
 default:
  return;
 }

 if (FUNC_3(VAR_15, VAR_17, &VAR_16))
  return;

 VAR_20 = (VAR_16 & VAR_0) >>
  VAR_1;
 VAR_18 = (VAR_16 & VAR_2) >>
  VAR_3;
 VAR_19 = VAR_16 & VAR_4;

 if (VAR_19 > 99 || VAR_20 > 26)
  return;

 VAR_17 = FUNC_1(VAR_15->fw_ver);
 FUNC_0(&VAR_15->fw_ver[VAR_17], VAR_14 - VAR_17,
   " v%d.%02d", VAR_18, VAR_19);

 if (VAR_20 > 0) {
  VAR_17 = FUNC_1(VAR_15->fw_ver);
  if (VAR_17 < VAR_14 - 1)
   VAR_15->fw_ver[VAR_17] = 'a' + VAR_20 - 1;
 }
}
