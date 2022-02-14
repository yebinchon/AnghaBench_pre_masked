
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kirin_pcie {int sysctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kirin_pcie *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_3->sysctrl, VAR_2, &VAR_4);
 VAR_4 |= VAR_0;
 VAR_4 &= ~VAR_1;
 FUNC_1(VAR_3->sysctrl, VAR_2, VAR_4);
}
