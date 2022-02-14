
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftgmac100 {scalar_t__ use_ncsi; int clk; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ftgmac100 *VAR_2)
{
 VAR_2->clk = FUNC_3(VAR_2->dev, ((void*)0));
 if (FUNC_0(VAR_2->clk))
  return;

 FUNC_1(VAR_2->clk);





 FUNC_2(VAR_2->clk, VAR_2->use_ncsi ? VAR_1 :
   VAR_0);
}
