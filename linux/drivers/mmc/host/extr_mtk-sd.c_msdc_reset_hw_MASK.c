
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msdc_host {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct msdc_host *VAR_5)
{
 u32 VAR_6;

 FUNC_2(VAR_5->base + VAR_0, VAR_1);
 while (FUNC_1(VAR_5->base + VAR_0) & VAR_1)
  FUNC_0();

 FUNC_2(VAR_5->base + VAR_2, VAR_3);
 while (FUNC_1(VAR_5->base + VAR_2) & VAR_3)
  FUNC_0();

 VAR_6 = FUNC_1(VAR_5->base + VAR_4);
 FUNC_3(VAR_6, VAR_5->base + VAR_4);
}
