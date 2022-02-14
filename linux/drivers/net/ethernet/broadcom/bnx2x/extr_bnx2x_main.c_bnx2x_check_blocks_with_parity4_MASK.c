
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bnx2x*,int ) ;

__attribute__((used)) static bool FUNC_2(struct bnx2x *VAR_2, u32 VAR_3,
         int *VAR_4, bool VAR_5)
{
 u32 VAR_6;
 bool VAR_7;
 int VAR_8;

 VAR_7 = 0;

 for (VAR_8 = 0; VAR_3; VAR_8++) {
  VAR_6 = (0x1UL << VAR_8);
  if (VAR_3 & VAR_6) {
   VAR_7 = 1;
   if (VAR_5) {
    switch (VAR_6) {
    case 128:
     FUNC_0((*VAR_4)++,
         "PGLUE_B");
     FUNC_1(VAR_2,
            VAR_1);
     break;
    case 129:
     FUNC_0((*VAR_4)++, "ATC");
     FUNC_1(VAR_2,
            VAR_0);
     break;
    }
   }

   VAR_3 &= ~VAR_6;
  }
 }

 return VAR_7;
}
