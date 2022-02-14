
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam {scalar_t__ keysize; } ;
struct TYPE_2__ {struct npc_mcam mcam; } ;


 int FUNC_0 (int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int,int,int,int) ;
 int FUNC_2 (int ,int,int,unsigned long long) ;
 int FUNC_3 (struct rvu*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct rvu *VAR_16, int VAR_17)
{
 struct npc_mcam *VAR_18 = &VAR_16->hw->mcam;
 int VAR_19, VAR_20;
 int VAR_21;
 u64 VAR_22;

 VAR_22 = FUNC_3(VAR_16, VAR_17, VAR_2);
 VAR_21 = (VAR_22 >> 4) & 0xF;




 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
  for (VAR_20 = 0; VAR_20 < 16; VAR_20++) {
   FUNC_1(VAR_0, VAR_19, VAR_20, 0, 0ULL);
   FUNC_1(VAR_0, VAR_19, VAR_20, 1, 0ULL);
   FUNC_1(VAR_1, VAR_19, VAR_20, 0, 0ULL);
   FUNC_1(VAR_1, VAR_19, VAR_20, 1, 0ULL);

   FUNC_2(VAR_0, 0, VAR_20, 0ULL);
   FUNC_2(VAR_0, 1, VAR_20, 0ULL);
   FUNC_2(VAR_1, 0, VAR_20, 0ULL);
   FUNC_2(VAR_1, 1, VAR_20, 0ULL);
  }
 }

 if (VAR_18->keysize != VAR_14)
  return;





 VAR_22 = FUNC_0(0x05, 0x0, 0x1, 0x0, VAR_15);
 FUNC_1(VAR_0, VAR_3, VAR_7, 0, VAR_22);


 VAR_22 = FUNC_0(0x01, 0xc, 0x1, 0x0, 0x4);
 FUNC_1(VAR_0, VAR_3, VAR_7, 1, VAR_22);



 VAR_22 = FUNC_0(0x03, 0x0, 0x1, 0x0, 0x4);
 FUNC_1(VAR_0, VAR_4, VAR_8, 0, VAR_22);



 VAR_22 = FUNC_0(0x03, 0x4, 0x1, 0x0, 0x4);
 FUNC_1(VAR_0, VAR_4, VAR_10, 0, VAR_22);
 FUNC_1(VAR_0, VAR_4, VAR_9, 0, VAR_22);



 VAR_22 = FUNC_0(0x07, 0xc, 0x1, 0x0, 0x10);
 FUNC_1(VAR_0, VAR_5, VAR_11, 0, VAR_22);

 VAR_22 = FUNC_0(0x0, 0x1, 0x1, 0x0, 0xf);
 FUNC_1(VAR_0, VAR_5, VAR_11, 1, VAR_22);



 VAR_22 = FUNC_0(0x1, 0x0, 0x1, 0x0, 0x18);
 FUNC_1(VAR_0, VAR_6, VAR_13, 0, VAR_22);

 VAR_22 = FUNC_0(0x1, 0x2, 0x1, 0x0, 0x1a);
 FUNC_1(VAR_0, VAR_6, VAR_13, 1, VAR_22);



 VAR_22 = FUNC_0(0x1, 0x0, 0x1, 0x0, 0x18);
 FUNC_1(VAR_0, VAR_6, VAR_12, 0, VAR_22);

 VAR_22 = FUNC_0(0x1, 0x2, 0x1, 0x0, 0x1a);
 FUNC_1(VAR_0, VAR_6, VAR_12, 1, VAR_22);
}
