
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm6242_priv {int * regs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct msm6242_priv *VAR_0,
           unsigned int VAR_1)
{
 return FUNC_0(&VAR_0->regs[VAR_1]) & 0xf;
}
