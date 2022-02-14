
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_slim_ctrl {scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qcom_slim_ctrl*,int) ;
 int FUNC_1 (struct qcom_slim_ctrl*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct qcom_slim_ctrl *VAR_7 = VAR_6;
 u32 VAR_8 = FUNC_2(VAR_7->base + VAR_2);
 int VAR_9 = VAR_0;

 if (VAR_8 & VAR_3 || VAR_8 & VAR_4)
  VAR_9 = FUNC_1(VAR_7, VAR_8);

 if (VAR_8 & VAR_1)
  VAR_9 = FUNC_0(VAR_7, VAR_8);

 return VAR_9;
}
