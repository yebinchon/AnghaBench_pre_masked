
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct msdc_host *VAR_4, int VAR_5)
{
 if (VAR_5) {
  FUNC_1(VAR_4->base + VAR_0, VAR_1);
  FUNC_1(VAR_4->base + VAR_2, VAR_3);
 } else {
  FUNC_0(VAR_4->base + VAR_0, VAR_1);
  FUNC_0(VAR_4->base + VAR_2, VAR_3);
 }
}
