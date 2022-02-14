
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hermes {int reg_spacing; scalar_t__ iobase; } ;


 int FUNC_0 (scalar_t__,char const*,unsigned int) ;
 int FUNC_1 (char const,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct hermes *VAR_0, int VAR_1,
          const char *VAR_2, unsigned VAR_3)
{
 VAR_1 = VAR_1 << VAR_0->reg_spacing;
 FUNC_0(VAR_0->iobase + VAR_1, VAR_2, VAR_3 >> 1);
 if (FUNC_2(VAR_3 & 1))
  FUNC_1(VAR_2[VAR_3 - 1], VAR_0->iobase + VAR_1);
}
