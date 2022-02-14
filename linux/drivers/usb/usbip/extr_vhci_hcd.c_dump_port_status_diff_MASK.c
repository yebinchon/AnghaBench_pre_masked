
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 char** VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(u32 VAR_2, u32 VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = 1;
 const char * const *VAR_7 = VAR_0;

 if (VAR_4)
  VAR_7 = VAR_1;

 FUNC_0("status prev -> new: %08x -> %08x\n", VAR_2, VAR_3);
 while (VAR_6) {
  u32 VAR_8 = VAR_2 & VAR_6;
  u32 VAR_9 = VAR_3 & VAR_6;
  char VAR_10;

  if (!VAR_8 && VAR_9)
   VAR_10 = '+';
  else if (VAR_8 && !VAR_9)
   VAR_10 = '-';
  else
   VAR_10 = ' ';

  if (VAR_8 || VAR_9) {
   FUNC_0(" %c%s\n", VAR_10, VAR_7[VAR_5]);

   if (VAR_6 == 1)
    FUNC_0(" %c%s\n", VAR_10, "USB_PORT_STAT_SPEED_5GBPS");
  }
  VAR_6 <<= 1;
  VAR_5++;
 }
 FUNC_0("\n");
}
