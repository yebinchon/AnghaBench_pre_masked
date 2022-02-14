
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tegra_tcu {int tx; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void FUNC_3(struct tegra_tcu *VAR_0, u32 VAR_1,
    unsigned int VAR_2)
{
 void *VAR_3;

 VAR_1 |= FUNC_0(VAR_2);
 VAR_3 = (void *)(unsigned long)VAR_1;
 FUNC_2(VAR_0->tx, VAR_3);
 FUNC_1(VAR_0->tx, 1000);
}
