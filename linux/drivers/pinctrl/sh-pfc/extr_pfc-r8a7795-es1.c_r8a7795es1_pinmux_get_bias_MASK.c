
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_pfc {int dummy; } ;
struct pinmux_bias_reg {int pud; int puen; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct pinmux_bias_reg* FUNC_1 (struct sh_pfc*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct sh_pfc*,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct sh_pfc *VAR_3,
            unsigned int VAR_4)
{
 const struct pinmux_bias_reg *VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_4, &VAR_6);
 if (!VAR_5)
  return VAR_0;

 if (!(FUNC_2(VAR_3, VAR_5->puen) & FUNC_0(VAR_6)))
  return VAR_0;
 else if (FUNC_2(VAR_3, VAR_5->pud) & FUNC_0(VAR_6))
  return VAR_2;
 else
  return VAR_1;
}
