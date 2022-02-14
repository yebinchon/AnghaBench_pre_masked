
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u16 ;
struct edc {unsigned long timestart; int errorcount; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct edc *VAR_1, u16 VAR_2, u16 VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_0;
 if (VAR_4 - VAR_1->timestart > VAR_3) {
  VAR_1->errorcount = 1;
  VAR_1->timestart = VAR_4;
 } else if (++VAR_1->errorcount > VAR_2) {
   VAR_1->errorcount = 0;
   VAR_1->timestart = VAR_4;
   return 1;
 }
 return 0;
}
