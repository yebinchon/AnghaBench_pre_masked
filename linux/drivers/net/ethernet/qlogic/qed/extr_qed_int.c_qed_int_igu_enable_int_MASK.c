
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* cdev; } ;
typedef enum qed_int_mode { ____Placeholder_qed_int_mode } qed_int_mode ;
struct TYPE_2__ {int int_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

void FUNC_1(struct qed_hwfn *VAR_6,
       struct qed_ptt *VAR_7, enum qed_int_mode VAR_8)
{
 u32 VAR_9 = VAR_1 | VAR_0;

 VAR_6->cdev->int_mode = VAR_8;
 switch (VAR_6->cdev->int_mode) {
 case 131:
  VAR_9 |= VAR_2;
  VAR_9 |= VAR_4;
  break;

 case 130:
  VAR_9 |= VAR_3;
  VAR_9 |= VAR_4;
  break;

 case 129:
  VAR_9 |= VAR_3;
  break;
 case 128:
  break;
 }

 FUNC_0(VAR_6, VAR_7, VAR_5, VAR_9);
}
