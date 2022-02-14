
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int const FUNC_0 (struct parport*) ;

__attribute__((used)) static inline unsigned char FUNC_1(struct parport *VAR_4)
{
 const unsigned int VAR_5 =
  VAR_2 | VAR_0 | VAR_3 | VAR_1;
 return FUNC_0(VAR_4) & VAR_5;
}
