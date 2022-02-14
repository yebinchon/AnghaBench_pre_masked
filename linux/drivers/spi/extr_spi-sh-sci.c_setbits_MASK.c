
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_sci_spi {int val; } ;


 int FUNC_0 (struct sh_sci_spi*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct sh_sci_spi *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_0->val |= VAR_1;
 else
  VAR_0->val &= ~VAR_1;

 FUNC_1(VAR_0->val, FUNC_0(VAR_0));
}
