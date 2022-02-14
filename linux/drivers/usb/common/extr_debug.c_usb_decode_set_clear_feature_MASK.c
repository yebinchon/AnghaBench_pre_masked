
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,size_t,char*,char*,char*,...) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(__u8 VAR_6,
      __u8 VAR_7, __u16 VAR_8,
      __u16 VAR_9, char *VAR_10, size_t VAR_11)
{
 switch (VAR_6 & VAR_4) {
 case 130:
  FUNC_0(VAR_10, VAR_11, "%s Device Feature(%s%s)",
    VAR_7 == VAR_5 ? "Clear" : "Set",
    FUNC_1(VAR_8),
    VAR_8 == VAR_0 ?
    FUNC_2(VAR_9) : "");
  break;
 case 128:
  FUNC_0(VAR_10, VAR_11, "%s Interface Feature(%s)",
    VAR_7 == VAR_5 ? "Clear" : "Set",
    VAR_8 == VAR_3 ?
    "Function Suspend" : "UNKNOWN");
  break;
 case 129:
  FUNC_0(VAR_10, VAR_11, "%s Endpoint Feature(%s ep%d%s)",
    VAR_7 == VAR_5 ? "Clear" : "Set",
    VAR_8 == VAR_2 ? "Halt" : "UNKNOWN",
    VAR_9 & ~VAR_1,
    VAR_9 & VAR_1 ? "in" : "out");
  break;
 }
}
