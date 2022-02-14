
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (char*,unsigned int,char*,char const*,char*,int,char*,int ,int,char*,char*,char*,int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_7, unsigned VAR_8, const char *VAR_9,
  u32 VAR_10)
{
 return FUNC_1(VAR_7, VAR_8,
   "%s%scommand %07x %s=%d ithresh=%d%s%s%s period=%s%s %s",
   VAR_9, VAR_9[0] ? " " : "", VAR_10,
   (VAR_10 & VAR_2) ? " park" : "(park)",
   FUNC_0(VAR_10),
   (VAR_10 >> 16) & 0x3f,
   (VAR_10 & VAR_1) ? " IAAD" : "",
   (VAR_10 & VAR_0) ? " Async" : "",
   (VAR_10 & VAR_3) ? " Periodic" : "",
   VAR_6[(VAR_10 >> 2) & 0x3],
   (VAR_10 & VAR_4) ? " Reset" : "",
   (VAR_10 & VAR_5) ? "RUN" : "HALT");
}
