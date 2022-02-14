
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_vde {int sxe; int bsev; int decode_completion; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tegra_vde*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tegra_vde *VAR_0,
       unsigned int VAR_1)
{
 FUNC_0(&VAR_0->decode_completion);

 FUNC_1(VAR_0, 0x00000001, VAR_0->bsev, 0x8C);
 FUNC_1(VAR_0, 0x20000000 | (VAR_1 - 1),
    VAR_0->sxe, 0x00);
}
