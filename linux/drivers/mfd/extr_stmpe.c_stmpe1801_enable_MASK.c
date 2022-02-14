
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct stmpe*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct stmpe *VAR_5, unsigned int VAR_6,
       bool VAR_7)
{
 unsigned int VAR_8 = 0;
 if (VAR_6 & VAR_3)
  VAR_8 |= VAR_0;

 if (VAR_6 & VAR_4)
  VAR_8 |= VAR_1;

 return FUNC_0(VAR_5, VAR_2, VAR_8,
    VAR_7 ? VAR_8 : 0);
}
