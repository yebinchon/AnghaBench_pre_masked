
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_vde {int decode_completion; int frameid; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct tegra_vde*,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct tegra_vde *VAR_4 = VAR_3;

 if (FUNC_1(&VAR_4->decode_completion))
  return VAR_1;

 FUNC_2(VAR_4, 0, VAR_4->frameid, 0x208);
 FUNC_0(&VAR_4->decode_completion);

 return VAR_0;
}
