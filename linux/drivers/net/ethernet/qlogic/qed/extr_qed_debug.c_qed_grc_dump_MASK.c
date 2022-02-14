
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct dbg_tools_data {scalar_t__ chip_id; scalar_t__ platform_id; TYPE_1__ bus; scalar_t__ num_ports; scalar_t__ num_regs_read; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_4__ {int grc_param; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int*,int,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int*,int,char*,scalar_t__) ;
 int FUNC_4 (int*,int,char*,char*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,int*,int,int) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_13 (struct qed_hwfn*,struct qed_ptt*,int*,int,int*,int *,int *) ;
 int FUNC_14 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_15 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_16 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_17 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 int FUNC_18 (struct qed_hwfn*,struct qed_ptt*,int*,int) ;
 scalar_t__ FUNC_19 (struct qed_hwfn*,int ) ;
 scalar_t__ FUNC_20 (struct qed_hwfn*,int ) ;
 int FUNC_21 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_22 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_23 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_24 (struct qed_hwfn*,struct qed_ptt*) ;
 TYPE_2__* VAR_21 ;

__attribute__((used)) static enum dbg_status FUNC_25(struct qed_hwfn *VAR_22,
        struct qed_ptt *VAR_23,
        u32 *VAR_24,
        bool VAR_25, u32 *VAR_26)
{
 struct dbg_tools_data *VAR_27 = &VAR_22->dbg_info;
 bool VAR_28 = 0;
 u32 VAR_29 = 0;
 u8 VAR_30;

 *VAR_26 = 0;
 VAR_27->num_regs_read = 0;


 if (VAR_25)
  FUNC_24(VAR_22, VAR_23);


 VAR_29 += FUNC_1(VAR_22,
      VAR_23,
      VAR_24 + VAR_29, VAR_25, 4);
 VAR_29 += FUNC_4(VAR_24 + VAR_29,
         VAR_25, "dump-type", "grc-dump");
 VAR_29 += FUNC_3(VAR_24 + VAR_29,
         VAR_25,
         "num-lcids",
         FUNC_19(VAR_22,
      VAR_12));
 VAR_29 += FUNC_3(VAR_24 + VAR_29,
         VAR_25,
         "num-ltids",
         FUNC_19(VAR_22,
      VAR_13));
 VAR_29 += FUNC_3(VAR_24 + VAR_29,
         VAR_25, "num-ports", VAR_27->num_ports);


 if (FUNC_20(VAR_22, VAR_7))
  VAR_29 += FUNC_14(VAR_22,
        VAR_23,
        VAR_24 + VAR_29, VAR_25);


 if (VAR_25) {
  FUNC_22(VAR_22, VAR_23);
  FUNC_24(VAR_22, VAR_23);
 }


 if (VAR_25 &&
     !FUNC_19(VAR_22, VAR_11)) {
  VAR_28 = !FUNC_23(VAR_22, VAR_23, 1);
  if (!VAR_28) {
   FUNC_0(VAR_22,
      "Failed to mask parities using MFW\n");
   if (FUNC_19
       (VAR_22, VAR_14))
    return VAR_16;
  }
 }


 if (FUNC_20(VAR_22, VAR_7))
  VAR_29 += FUNC_11(VAR_22,
           VAR_23,
           VAR_24 + VAR_29, VAR_25);


 if (VAR_25 &&
     (FUNC_20(VAR_22,
     VAR_4) ||
      FUNC_20(VAR_22, VAR_10)))
  FUNC_21(VAR_22, VAR_23, 1);


 if (FUNC_20(VAR_22, VAR_7)) {
  bool VAR_31[VAR_18];


  for (VAR_30 = 0; VAR_30 < VAR_18; VAR_30++)
   VAR_31[VAR_30] = 1;
  VAR_31[VAR_0] = 0;
  VAR_29 += FUNC_13(VAR_22,
       VAR_23,
       VAR_24 +
       VAR_29,
       VAR_25,
       VAR_31, ((void*)0), ((void*)0));


  VAR_29 += FUNC_16(VAR_22,
          VAR_23,
          VAR_24 + VAR_29, VAR_25);
 }


 VAR_29 += FUNC_10(VAR_22, VAR_23, VAR_24 + VAR_29, VAR_25);


 if (FUNC_20(VAR_22, VAR_5))
  VAR_29 += FUNC_9(VAR_22,
        VAR_23, VAR_24 + VAR_29, VAR_25);


 if (FUNC_20(VAR_22, VAR_3))
  VAR_29 += FUNC_7(VAR_22,
        VAR_23, VAR_24 + VAR_29, VAR_25);


 if (FUNC_20(VAR_22, VAR_8))
  VAR_29 += FUNC_15(VAR_22,
        VAR_23, VAR_24 + VAR_29, VAR_25);


 for (VAR_30 = 0; VAR_30 < VAR_19; VAR_30++)
  if (FUNC_20(VAR_22, VAR_21[VAR_30].grc_param))
   VAR_29 += FUNC_6(VAR_22,
             VAR_23,
             VAR_24 + VAR_29,
             VAR_25, VAR_30);


 if (FUNC_20(VAR_22, VAR_4))
  VAR_29 += FUNC_8(VAR_22,
         VAR_23, VAR_24 + VAR_29, VAR_25);


 if (FUNC_20(VAR_22, VAR_10))
  VAR_29 += FUNC_18(VAR_22,
        VAR_23, VAR_24 + VAR_29, VAR_25);


 if (FUNC_20(VAR_22,
    VAR_6) && VAR_27->chip_id ==
     VAR_1 && VAR_27->platform_id == VAR_20)
  VAR_29 += FUNC_12(VAR_22,
        VAR_23, VAR_24 + VAR_29, VAR_25);


 if (FUNC_20(VAR_22,
    VAR_9) &&
     (!VAR_25 || VAR_27->bus.state == VAR_2))
  VAR_29 += FUNC_17(VAR_22,
          VAR_23,
          VAR_24 + VAR_29, VAR_25);


 VAR_29 += FUNC_2(VAR_24, VAR_29, VAR_25);

 if (VAR_25) {

  if (FUNC_19(VAR_22, VAR_15))
   FUNC_21(VAR_22, VAR_23, 0);


  FUNC_5(VAR_22, VAR_23);


  if (VAR_28)
   FUNC_23(VAR_22, VAR_23, 0);
 }

 *VAR_26 = VAR_29;

 return VAR_17;
}
