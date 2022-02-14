
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct storm_defs {int letter; scalar_t__ sem_fast_mem_addr; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int*,int,char*,int,int ,int,int,int,char*,int,int ) ;
 int FUNC_3 (struct qed_hwfn*,int) ;
 struct storm_defs* VAR_4 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static u32 FUNC_5(struct qed_hwfn *VAR_5,
        struct qed_ptt *VAR_6, u32 *VAR_7, bool VAR_8)
{
 char VAR_9[10] = "IOR_SET_?";
 u32 VAR_10, VAR_11 = 0;
 u8 VAR_12, VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  struct storm_defs *VAR_14 = &VAR_4[VAR_12];

  if (!FUNC_3(VAR_5,
            (enum dbg_storms)VAR_12))
   continue;

  for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
   VAR_10 = FUNC_0(VAR_14->sem_fast_mem_addr +
            VAR_3) +
          FUNC_1(VAR_13);
   if (FUNC_4(VAR_9) > 0)
    VAR_9[FUNC_4(VAR_9) - 1] = '0' + VAR_13;
   VAR_11 += FUNC_2(VAR_5,
         VAR_6,
         VAR_7 + VAR_11,
         VAR_8,
         VAR_9,
         VAR_10,
         VAR_0,
         0,
         32,
         0,
         "ior",
         1,
         VAR_14->letter);
  }
 }

 return VAR_11;
}
