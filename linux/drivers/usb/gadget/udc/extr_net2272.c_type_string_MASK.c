
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int bmAttributes ;


 int VAR_0 ;




__attribute__((used)) static char *FUNC_0(u8 VAR_1)
{
 switch ((VAR_1) & VAR_0) {
 case 130: return "bulk";
 case 128: return "iso";
 case 129: return "intr";
 default: return "control";
 }
}
