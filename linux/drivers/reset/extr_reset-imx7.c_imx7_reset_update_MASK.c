
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx7_src_signal {int bit; int offset; } ;
struct imx7_src {int regmap; struct imx7_src_signal* signals; } ;


 int FUNC_0 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct imx7_src *VAR_0,
        unsigned long VAR_1, unsigned int VAR_2)
{
 const struct imx7_src_signal *VAR_3 = &VAR_0->signals[VAR_1];

 return FUNC_0(VAR_0->regmap,
      VAR_3->offset, VAR_3->bit, VAR_2);
}
