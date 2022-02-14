
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct port {int dev; } ;
struct TYPE_2__ {int cable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;



 TYPE_1__* FUNC_0 (struct port*) ;
 int FUNC_1 (int ,char*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct port *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_4)->cable;
 int VAR_6 = 1;
 const char *VAR_7, *VAR_8, *VAR_9 = "", *VAR_10 = "", *VAR_11 = "";

 switch(VAR_5 & 0x7) {
 case 129: VAR_7 = "V.35"; break;
 case 128: VAR_7 = "X.21"; break;
 case 130: VAR_7 = "V.24"; break;
 case 132: VAR_7 = "EIA530"; break;
 case 131: VAR_7 = "no"; break;
 default: VAR_7 = "invalid";
 }

 switch((VAR_5 >> VAR_3) & 0x7) {
 case 129: VAR_8 = "V.35"; break;
 case 128: VAR_8 = "X.21"; break;
 case 130: VAR_8 = "V.24"; break;
 case 132: VAR_8 = "EIA530"; break;
 case 131: VAR_8 = "no personality"; VAR_6 = 0; break;
 default: VAR_8 = "invalid personality"; VAR_6 = 0;
 }

 if (VAR_6) {
  if ((VAR_5 & 7) == ((VAR_5 >> VAR_3) & 7)) {
   VAR_10 = (VAR_5 & VAR_2) ? ", DSR ON" :
    ", DSR off";
   VAR_11 = (VAR_5 & VAR_0) ? ", carrier ON" :
    ", carrier off";
  }
  VAR_9 = (VAR_5 & VAR_1) ? " DCE" : " DTE";
 }
 FUNC_1(VAR_4->dev, "%s%s module, %s cable%s%s\n",
      VAR_8, VAR_9, VAR_7, VAR_10, VAR_11);

 if (VAR_5 & VAR_0)
  FUNC_3(VAR_4->dev);
 else
  FUNC_2(VAR_4->dev);
}
