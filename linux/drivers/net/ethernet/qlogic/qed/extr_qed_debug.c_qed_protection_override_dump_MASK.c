
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int*,int,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int*,int,char*,int) ;
 int FUNC_4 (int*,int,char*,int) ;
 int FUNC_5 (int*,int,char*,char*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,int*,int,int,int,int,int ,int ) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int ) ;

__attribute__((used)) static enum dbg_status FUNC_8(struct qed_hwfn *VAR_6,
          struct qed_ptt *VAR_7,
          u32 *VAR_8,
          bool VAR_9,
          u32 *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13 = 0, VAR_14;

 *VAR_10 = 0;


 VAR_13 += FUNC_1(VAR_6,
      VAR_7,
      VAR_8 + VAR_13, VAR_9, 1);
 VAR_13 += FUNC_5(VAR_8 + VAR_13,
         VAR_9, "dump-type", "protection-override");




 VAR_13 += FUNC_4(VAR_8 + VAR_13,
           VAR_9, "protection_override_data", 1);
 VAR_11 = VAR_13;
 VAR_13 += FUNC_3(VAR_8 + VAR_13, VAR_9, "size", 0);

 if (!VAR_9) {
  VAR_13 += VAR_3;
  goto out;
 }


 VAR_12 =
  FUNC_7(VAR_6, VAR_7, VAR_1) *
  VAR_4;
 VAR_14 = FUNC_0(VAR_2);
 VAR_13 += FUNC_6(VAR_6,
       VAR_7,
       VAR_8 + VAR_13,
       1,
       VAR_14,
       VAR_12,
       1, VAR_5, 0);
 FUNC_3(VAR_8 + VAR_11, VAR_9, "size",
      VAR_12);
out:

 VAR_13 += FUNC_2(VAR_8, VAR_13, VAR_9);

 *VAR_10 = VAR_13;

 return VAR_0;
}
