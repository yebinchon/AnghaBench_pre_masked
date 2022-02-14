
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
 int FUNC_0 (char*,unsigned int,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static inline char *FUNC_1(u32 VAR_6, char *VAR_7, unsigned int VAR_8)
{
 FUNC_0(VAR_7, VAR_8, "%s %s %s %s %s %s",
   (VAR_6 & VAR_5) ? "ref" : "   ",
   (VAR_6 & VAR_0) ? "bsy" : "   ",
   (VAR_6 & VAR_1) ? "dec" : "   ",
   (VAR_6 & VAR_3) ? "out" : "   ",
   (VAR_6 & VAR_2) ? "m2m" : "   ",
   (VAR_6 & VAR_4) ? "rdy" : "   ");
 return VAR_7;
}
