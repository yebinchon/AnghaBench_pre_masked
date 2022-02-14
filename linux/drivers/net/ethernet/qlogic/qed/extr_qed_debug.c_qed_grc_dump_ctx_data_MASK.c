
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct storm_defs {int cm_ctx_wr_addr; int letter; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int*,int,char const*,int ,int,int,int,char const*,int,int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 struct storm_defs* VAR_1 ;

__attribute__((used)) static u32 FUNC_3(struct qed_hwfn *VAR_2,
     struct qed_ptt *VAR_3,
     u32 *VAR_4,
     bool VAR_5,
     const char *VAR_6,
     u32 VAR_7,
     u32 VAR_8,
     u32 VAR_9,
     u8 VAR_10)
{
 struct storm_defs *VAR_11 = &VAR_1[VAR_10];
 u32 VAR_12, VAR_13, VAR_14, VAR_15 = 0;

 if (!VAR_8)
  return 0;

 VAR_8 *= VAR_0;
 VAR_14 = VAR_7 * VAR_8;

 VAR_15 += FUNC_0(VAR_2,
           VAR_4 + VAR_15,
           VAR_5,
           VAR_6,
           0,
           VAR_14,
           VAR_8 * 32,
           0, VAR_6, 1, VAR_11->letter);

 if (!VAR_5)
  return VAR_15 + VAR_14;


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++, VAR_15++) {
   FUNC_2(VAR_2,
          VAR_3, VAR_11->cm_ctx_wr_addr, (VAR_12 << 9) | VAR_13);
   *(VAR_4 + VAR_15) = FUNC_1(VAR_2,
            VAR_3, VAR_9);
  }
 }

 return VAR_15;
}
