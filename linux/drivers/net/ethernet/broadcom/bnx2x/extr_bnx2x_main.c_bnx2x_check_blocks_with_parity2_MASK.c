
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bnx2x*,int ) ;

__attribute__((used)) static bool FUNC_3(struct bnx2x *VAR_11, u32 VAR_12,
         int *VAR_13, bool VAR_14)
{
 u32 VAR_15;
 bool VAR_16;
 int VAR_17;

 VAR_16 = 0;

 for (VAR_17 = 0; VAR_12; VAR_17++) {
  VAR_15 = (0x1UL << VAR_17);
  if (VAR_12 & VAR_15) {
   VAR_16 = 1;
   if (VAR_14) {
    switch (VAR_15) {
    case 133:
     FUNC_1((*VAR_13)++,
         "CSEMI");
     FUNC_2(VAR_11,
            VAR_2);
     FUNC_2(VAR_11,
            VAR_3);
     break;
    case 129:
     FUNC_1((*VAR_13)++, "PXP");
     FUNC_2(VAR_11, VAR_10);
     FUNC_2(VAR_11,
            VAR_8);
     FUNC_2(VAR_11,
            VAR_9);
     break;
    case 128:
     FUNC_1((*VAR_13)++,
         "PXPPCICLOCKCLIENT");
     break;
    case 134:
     FUNC_1((*VAR_13)++, "CFC");
     FUNC_2(VAR_11,
            VAR_1);
     break;
    case 135:
     FUNC_1((*VAR_13)++, "CDU");
     FUNC_2(VAR_11, VAR_0);
     break;
    case 132:
     FUNC_1((*VAR_13)++, "DMAE");
     FUNC_2(VAR_11,
            VAR_4);
     break;
    case 131:
     FUNC_1((*VAR_13)++, "IGU");
     if (FUNC_0(VAR_11))
      FUNC_2(VAR_11,
       VAR_5);
     else
      FUNC_2(VAR_11,
       VAR_6);
     break;
    case 130:
     FUNC_1((*VAR_13)++, "MISC");
     FUNC_2(VAR_11,
            VAR_7);
     break;
    }
   }


   VAR_12 &= ~VAR_15;
  }
 }

 return VAR_16;
}
