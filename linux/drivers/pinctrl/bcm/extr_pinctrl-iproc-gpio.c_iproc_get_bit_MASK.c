
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_gpio {scalar_t__ base; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_4(struct iproc_gpio *VAR_0, unsigned int VAR_1,
      unsigned VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_2, VAR_1);
 unsigned int VAR_4 = FUNC_2(VAR_2);

 return !!(FUNC_3(VAR_0->base + VAR_3) & FUNC_0(VAR_4));
}
