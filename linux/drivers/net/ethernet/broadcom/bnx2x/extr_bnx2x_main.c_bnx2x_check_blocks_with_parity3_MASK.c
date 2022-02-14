
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;






 int VAR_0 ;
 int FUNC_0 (struct bnx2x*,int ,unsigned long) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static bool FUNC_2(struct bnx2x *VAR_1, u32 VAR_2,
         int *VAR_3, bool *VAR_4,
         bool VAR_5)
{
 bool VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_2; VAR_8++) {
  VAR_7 = (0x1UL << VAR_8);
  if (VAR_2 & VAR_7) {
   switch (VAR_7) {
   case 131:
    if (VAR_5)
     FUNC_1((*VAR_3)++,
         "MCP ROM");
    *VAR_4 = 1;
    VAR_6 = 1;
    break;
   case 129:
    if (VAR_5)
     FUNC_1((*VAR_3)++,
         "MCP UMP RX");
    *VAR_4 = 1;
    VAR_6 = 1;
    break;
   case 128:
    if (VAR_5)
     FUNC_1((*VAR_3)++,
         "MCP UMP TX");
    *VAR_4 = 1;
    VAR_6 = 1;
    break;
   case 130:
    (*VAR_3)++;

    FUNC_0(VAR_1, VAR_0,
           1UL << 10);
    break;
   }


   VAR_2 &= ~VAR_7;
  }
 }

 return VAR_6;
}
