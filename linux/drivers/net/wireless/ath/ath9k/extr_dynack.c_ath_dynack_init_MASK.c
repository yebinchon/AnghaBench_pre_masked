
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_dynack {int ackto; int nodes; int qlock; } ;
struct ath_hw {TYPE_1__* hw; struct ath_dynack dynack; } ;
struct TYPE_4__ {int features; } ;
struct TYPE_3__ {TYPE_2__* wiphy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ath_dynack*,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath_hw *VAR_1)
{
 struct ath_dynack *VAR_2 = &VAR_1->dynack;

 FUNC_1(VAR_2, 0, sizeof(struct ath_dynack));

 FUNC_2(&VAR_2->qlock);
 FUNC_0(&VAR_2->nodes);

 VAR_2->ackto = 9 + 16 + 64;

 VAR_1->hw->wiphy->features |= VAR_0;
}
