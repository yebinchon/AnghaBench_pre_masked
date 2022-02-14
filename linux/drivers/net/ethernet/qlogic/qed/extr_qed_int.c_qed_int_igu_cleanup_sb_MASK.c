
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int,int) ;
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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct qed_hwfn *VAR_13,
       struct qed_ptt *VAR_14,
       u16 VAR_15,
       bool VAR_16, u16 VAR_17)
{
 u32 VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 u32 VAR_23 = VAR_4 + VAR_15;
 u32 VAR_24 = VAR_3;


 FUNC_1(VAR_22, VAR_0, VAR_16 ? 1 : 0);
 FUNC_1(VAR_22, VAR_1, 0);
 FUNC_1(VAR_22, VAR_2, VAR_5);


 FUNC_1(VAR_18, VAR_8, VAR_23);
 FUNC_1(VAR_18, VAR_7, VAR_17);
 FUNC_1(VAR_18, VAR_9, VAR_6);

 FUNC_4(VAR_13, VAR_14, VAR_11, VAR_22);

 FUNC_2();

 FUNC_4(VAR_13, VAR_14, VAR_12, VAR_18);


 VAR_20 = 1 << (VAR_15 % 32);
 VAR_21 = VAR_15 / 32 * sizeof(u32);

 VAR_21 += VAR_10;


 do {
  VAR_19 = FUNC_3(VAR_13, VAR_14, VAR_21);

  if ((VAR_19 & VAR_20) == (VAR_16 ? VAR_20 : 0))
   break;

  FUNC_5(5000, 10000);
 } while (--VAR_24);

 if (!VAR_24)
  FUNC_0(VAR_13,
     "Timeout waiting for clear status 0x%08x [for sb %d]\n",
     VAR_19, VAR_15);
}
