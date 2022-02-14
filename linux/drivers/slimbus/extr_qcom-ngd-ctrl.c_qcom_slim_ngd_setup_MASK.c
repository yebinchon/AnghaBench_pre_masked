
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qcom_slim_ngd_ctrl {scalar_t__ state; TYPE_1__* ngd; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct qcom_slim_ngd_ctrl*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct qcom_slim_ngd_ctrl *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4->ngd->base);

 if (VAR_4->state == VAR_3)
  FUNC_0(VAR_4);


 VAR_5 |= VAR_1;
 VAR_5 |= VAR_2;


 if (!(VAR_5 & VAR_0))
  VAR_5 |= VAR_0;

 FUNC_2(VAR_5, VAR_4->ngd->base);
}
