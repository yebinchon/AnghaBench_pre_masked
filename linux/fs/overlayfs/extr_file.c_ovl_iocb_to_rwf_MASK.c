
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_flags; } ;
typedef int rwf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static rwf_t FUNC_0(struct kiocb *VAR_8)
{
 int VAR_9 = VAR_8->ki_flags;
 rwf_t VAR_10 = 0;

 if (VAR_9 & VAR_2)
  VAR_10 |= VAR_6;
 if (VAR_9 & VAR_1)
  VAR_10 |= VAR_5;
 if (VAR_9 & VAR_0)
  VAR_10 |= VAR_4;
 if (VAR_9 & VAR_3)
  VAR_10 |= VAR_7;

 return VAR_10;
}
