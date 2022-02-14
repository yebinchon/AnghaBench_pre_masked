
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anybuss_host {int dev; int (* reset ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct anybuss_host *VAR_0)
{
 VAR_0->reset(VAR_0->dev, 0);
}
