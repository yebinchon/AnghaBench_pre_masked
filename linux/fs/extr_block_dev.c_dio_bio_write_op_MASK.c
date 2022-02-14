
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static unsigned int FUNC_0(struct kiocb *VAR_5)
{
 unsigned int VAR_6 = VAR_3 | VAR_4 | VAR_2;


 if (VAR_5->ki_flags & VAR_0)
  VAR_6 |= VAR_1;
 return VAR_6;
}
