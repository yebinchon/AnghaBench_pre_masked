
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_hwfn {int dummy; } ;
struct TYPE_2__ {size_t engine_for_debug; } ;
struct qed_dev {scalar_t__ num_hwfns; TYPE_1__ dbg_params; struct qed_hwfn* hwfns; } ;


 int FUNC_0 (struct qed_dev*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qed_dev*) ;
 int FUNC_2 (struct qed_dev*) ;
 int FUNC_3 (struct qed_dev*) ;
 int FUNC_4 (struct qed_dev*) ;
 int FUNC_5 (struct qed_dev*) ;
 int FUNC_6 (struct qed_hwfn*,int ,int*) ;
 int FUNC_7 (struct qed_dev*) ;
 int FUNC_8 (struct qed_dev*) ;
 scalar_t__ FUNC_9 (struct qed_dev*) ;
 int FUNC_10 (struct qed_dev*,scalar_t__) ;

int FUNC_11(struct qed_dev *VAR_5)
{
 struct qed_hwfn *VAR_6 =
  &VAR_5->hwfns[VAR_5->dbg_params.engine_for_debug];
 u32 VAR_7 = 0, VAR_8 = 0;
 u8 VAR_9, VAR_10;

 VAR_10 = FUNC_9(VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_5->num_hwfns; VAR_9++) {

  FUNC_0(VAR_5, VAR_0,
      "calculating idle_chk and grcdump register length for current engine\n");
  FUNC_10(VAR_5, VAR_9);
  VAR_7 += VAR_4 + FUNC_3(VAR_5) +
       VAR_4 + FUNC_3(VAR_5) +
       VAR_4 + FUNC_2(VAR_5) +
       VAR_4 + FUNC_8(VAR_5) +
       VAR_4 + FUNC_4(VAR_5) +
       VAR_4 +
       FUNC_7(VAR_5) +
       VAR_4 + FUNC_1(VAR_5);
 }

 FUNC_10(VAR_5, VAR_10);


 VAR_7 += VAR_4 + FUNC_5(VAR_5);
 FUNC_6(VAR_6, VAR_2, &VAR_8);
 if (VAR_8)
  VAR_7 += VAR_4 + VAR_8;
 FUNC_6(VAR_6, VAR_1, &VAR_8);
 if (VAR_8)
  VAR_7 += VAR_4 + VAR_8;
 FUNC_6(VAR_6, VAR_3, &VAR_8);
 if (VAR_8)
  VAR_7 += VAR_4 + VAR_8;

 return VAR_7;
}
