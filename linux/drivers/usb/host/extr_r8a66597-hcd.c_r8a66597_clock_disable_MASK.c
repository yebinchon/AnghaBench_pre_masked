
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8a66597 {int clk; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ on_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct r8a66597*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct r8a66597 *VAR_5)
{
 FUNC_1(VAR_5, VAR_1, VAR_2);
 FUNC_2(1);

 if (VAR_5->pdata->on_chip) {
  FUNC_0(VAR_5->clk);
 } else {
  FUNC_1(VAR_5, VAR_0, VAR_2);
  FUNC_1(VAR_5, VAR_4, VAR_2);
  FUNC_1(VAR_5, VAR_3, VAR_2);
 }
}
