
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at24_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 size_t VAR_2 ;

__attribute__((used)) static size_t FUNC_1(struct at24_data *VAR_3,
          unsigned int VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;
 size_t VAR_7;






 if (VAR_3->flags & VAR_1) {
  VAR_6 = (VAR_3->flags & VAR_0) ? 16 : 8;
  VAR_7 = FUNC_0(VAR_6) - VAR_4;
  if (VAR_5 > VAR_7)
   VAR_5 = VAR_7;
 }

 if (VAR_5 > VAR_2)
  VAR_5 = VAR_2;

 return VAR_5;
}
