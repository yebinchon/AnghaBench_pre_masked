
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int * fw_callback; int fw_waitq; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct lbs_private *VAR_0)
{
 FUNC_0(VAR_0->fw_waitq, VAR_0->fw_callback == ((void*)0));
}
