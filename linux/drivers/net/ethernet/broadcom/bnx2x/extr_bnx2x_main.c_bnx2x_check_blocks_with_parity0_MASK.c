
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct bnx2x *VAR_9, u32 VAR_10,
         int *VAR_11, bool VAR_12)
{
 u32 VAR_13;
 bool VAR_14;
 int VAR_15;

 VAR_14 = 0;

 for (VAR_15 = 0; VAR_10; VAR_15++) {
  VAR_13 = (0x1UL << VAR_15);
  if (VAR_10 & VAR_13) {
   VAR_14 |= 1;

   if (VAR_12) {
    switch (VAR_13) {
    case 134:
     FUNC_0((*VAR_11)++, "BRB");
     FUNC_1(VAR_9,
            VAR_0);
     break;
    case 133:
     FUNC_0((*VAR_11)++,
         "PARSER");
     FUNC_1(VAR_9, VAR_3);
     break;
    case 129:
     FUNC_0((*VAR_11)++, "TSDM");
     FUNC_1(VAR_9,
            VAR_6);
     break;
    case 131:
     FUNC_0((*VAR_11)++,
         "SEARCHER");
     FUNC_1(VAR_9, VAR_4);
     break;
    case 130:
     FUNC_0((*VAR_11)++, "TCM");
     FUNC_1(VAR_9, VAR_5);
     break;
    case 128:
     FUNC_0((*VAR_11)++,
         "TSEMI");
     FUNC_1(VAR_9,
            VAR_7);
     FUNC_1(VAR_9,
            VAR_8);
     break;
    case 132:
     FUNC_0((*VAR_11)++, "XPB");
     FUNC_1(VAR_9, VAR_1 +
         VAR_2);
     break;
    }
   }


   VAR_10 &= ~VAR_13;
  }
 }

 return VAR_14;
}
