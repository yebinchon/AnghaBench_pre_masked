
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hifmc_host {scalar_t__ regbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hifmc_host *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1)
  | FUNC_1(VAR_2)
  | FUNC_2(VAR_0);
 FUNC_3(VAR_5, VAR_4->regbase + VAR_3);
}
