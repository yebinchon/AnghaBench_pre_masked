
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct parport*,unsigned char const,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct parport *VAR_4, unsigned char VAR_5)
{
 const unsigned char VAR_6 = (VAR_3 |
      VAR_0 |
      VAR_1 |
      VAR_2);

 FUNC_0 (VAR_4, VAR_6, VAR_5 & VAR_6);
}
