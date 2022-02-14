
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qcom_slim_ngd_ctrl {int dev; int ctrl; int m_work; int mwq; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct qcom_slim_ngd_ctrl *VAR_6, u8 *VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_7[0]);
 VAR_10 = FUNC_2(VAR_7[0]);
 VAR_8 = FUNC_0(VAR_7[1]);

 if (VAR_8 == VAR_5 &&
  VAR_9 == VAR_2)
  FUNC_4(VAR_6->mwq, &VAR_6->m_work);

 if (VAR_8 == VAR_0 ||
     VAR_8 == VAR_1 || (VAR_8 == VAR_3 &&
     VAR_9 == VAR_2) ||
  (VAR_8 == VAR_4 &&
   VAR_9 == VAR_2)) {
  FUNC_5(&VAR_6->ctrl, &VAR_7[4], VAR_7[3], VAR_10 - 4);
  FUNC_3(VAR_6->dev);
 }
}
