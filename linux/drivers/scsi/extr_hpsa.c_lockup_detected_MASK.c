
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ctlr_info {int lockup_detected; } ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static u32 FUNC_3(struct ctlr_info *VAR_0)
{
 int VAR_1;
 u32 VAR_2, *VAR_3;

 VAR_1 = FUNC_0();
 VAR_3 = FUNC_1(VAR_0->lockup_detected, VAR_1);
 VAR_2 = *VAR_3;
 FUNC_2();
 return VAR_2;
}
