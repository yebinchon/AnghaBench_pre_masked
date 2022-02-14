
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct srr {scalar_t__ dqp_index; } ;
struct bdc {int dev; struct srr srr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bdc *VAR_1, u32 VAR_2)
{
 struct srr *VAR_3;

 VAR_3 = &VAR_1->srr;
 FUNC_0(VAR_1->dev, "srr->dqp_index:%d\n", VAR_3->dqp_index);
 VAR_3->dqp_index++;

 if (VAR_3->dqp_index == VAR_0)
  VAR_3->dqp_index = 0;
}
