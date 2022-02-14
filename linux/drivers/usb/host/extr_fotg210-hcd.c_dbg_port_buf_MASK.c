
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,unsigned int,char*,char const*,char*,int,int,int,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static char *FUNC_1(char *VAR_7, unsigned VAR_8, const char *VAR_9, int VAR_10,
  u32 VAR_11)
{
 char *VAR_12;


 switch (VAR_11 & (3 << 10)) {
 case 0 << 10:
  VAR_12 = "se0";
  break;
 case 1 << 10:
  VAR_12 = "k";
  break;
 case 2 << 10:
  VAR_12 = "j";
  break;
 default:
  VAR_12 = "?";
  break;
 }

 FUNC_0(VAR_7, VAR_8, "%s%sport:%d status %06x %d sig=%s%s%s%s%s%s%s%s",
   VAR_9, VAR_9[0] ? " " : "", VAR_10, VAR_11,
   VAR_11 >> 25,
   VAR_12,
   (VAR_11 & VAR_4) ? " RESET" : "",
   (VAR_11 & VAR_6) ? " SUSPEND" : "",
   (VAR_11 & VAR_5) ? " RESUME" : "",
   (VAR_11 & VAR_3) ? " PEC" : "",
   (VAR_11 & VAR_2) ? " PE" : "",
   (VAR_11 & VAR_1) ? " CSC" : "",
   (VAR_11 & VAR_0) ? " CONNECT" : "");

 return VAR_7;
}
