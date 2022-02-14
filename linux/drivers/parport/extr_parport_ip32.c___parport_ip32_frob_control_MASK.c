
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 unsigned int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct parport *VAR_0,
            unsigned int VAR_1,
            unsigned int VAR_2)
{
 unsigned int VAR_3;
 VAR_3 = (FUNC_0(VAR_0) & ~VAR_1) ^ VAR_2;
 FUNC_1(VAR_0, VAR_3);
}
