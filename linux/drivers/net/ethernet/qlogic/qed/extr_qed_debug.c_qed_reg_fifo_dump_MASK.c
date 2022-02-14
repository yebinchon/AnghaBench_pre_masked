
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
 scalar_t__ FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int ) ;

__attribute__((used)) static enum dbg_status FUNC_8(struct qed_hwfn *VAR_6,
      struct qed_ptt *VAR_7,
      u32 *VAR_8,
      bool VAR_9, u32 *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13 = 0, VAR_14, VAR_15;
 bool VAR_16;

 *VAR_10 = 0;


 VAR_13 += FUNC_1(VAR_6,
      VAR_7,
      VAR_8 + VAR_13, VAR_9, 1);
 VAR_13 += FUNC_5(VAR_8 + VAR_13,
         VAR_9, "dump-type", "reg-fifo");




 VAR_13 += FUNC_4(VAR_8 + VAR_13,
           VAR_9, "reg_fifo_data", 1);
 VAR_12 = VAR_13;
 VAR_13 += FUNC_3(VAR_8 + VAR_13, VAR_9, "size", 0);

 if (!VAR_9) {



  VAR_13 += VAR_3;
  goto out;
 }

 VAR_16 = FUNC_7(VAR_6, VAR_7,
          VAR_2) > 0;






 VAR_14 = FUNC_0(VAR_1);
 VAR_15 = VAR_4;
 for (VAR_11 = 0;
      VAR_16 && VAR_11 < VAR_3;
      VAR_11 += VAR_4) {
  VAR_13 += FUNC_6(VAR_6,
        VAR_7,
        VAR_8 + VAR_13,
        1,
        VAR_14,
        VAR_15,
        1, VAR_5,
        0);
  VAR_16 = FUNC_7(VAR_6, VAR_7,
           VAR_2) > 0;
 }

 FUNC_3(VAR_8 + VAR_12, VAR_9, "size",
      VAR_11);
out:

 VAR_13 += FUNC_2(VAR_8, VAR_13, VAR_9);

 *VAR_10 = VAR_13;

 return VAR_0;
}
