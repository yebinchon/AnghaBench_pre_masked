
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,int,...) ;

__attribute__((used)) static void FUNC_1(__u8 VAR_2, __u16 VAR_3,
      __u16 VAR_4, char *VAR_5, size_t VAR_6)
{
 switch (VAR_2 & VAR_1) {
 case 130:
  FUNC_0(VAR_5, VAR_6, "Get Device Status(Length = %d)", VAR_4);
  break;
 case 128:
  FUNC_0(VAR_5, VAR_6,
    "Get Interface Status(Intf = %d, Length = %d)",
    VAR_3, VAR_4);
  break;
 case 129:
  FUNC_0(VAR_5, VAR_6, "Get Endpoint Status(ep%d%s)",
    VAR_3 & ~VAR_0,
    VAR_3 & VAR_0 ? "in" : "out");
  break;
 }
}
