
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static const char *FUNC_0(u16 VAR_1)
{
 switch (VAR_1 & VAR_0) {
 case 1: return "2.5 Gbit/s";
 case 2: return "5 Gbit/s";
 case 3: return "10 Gbit/s";
 }
 return "Unknown speed";
}
