
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int device_name; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3)
{
 int VAR_4;
 int VAR_5;
 FUNC_0("%s %s data:\n",VAR_0->device_name, VAR_3);
 while(VAR_2) {
  VAR_5 = (VAR_2 > 16) ? 16 : VAR_2;
  for(VAR_4=0; VAR_4 < VAR_5; VAR_4++)
   FUNC_0("%02X ",(unsigned char)VAR_1[VAR_4]);
  for(;VAR_4<17;VAR_4++)
   FUNC_0("   ");
  for(VAR_4=0;VAR_4<VAR_5;VAR_4++) {
   if (VAR_1[VAR_4]>=040 && VAR_1[VAR_4]<=0176)
    FUNC_0("%c",VAR_1[VAR_4]);
   else
    FUNC_0(".");
  }
  FUNC_0("\n");
  VAR_1 += VAR_5;
  VAR_2 -= VAR_5;
 }
}
