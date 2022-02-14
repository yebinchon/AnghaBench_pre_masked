
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct edc {unsigned long timestart; int errorcount; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,int) ;

__attribute__((used)) static inline int FUNC_1(struct edc *VAR_1, u16 VAR_2, u16 VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_0;
 if (FUNC_0(VAR_4, VAR_1->timestart + VAR_3)) {
  VAR_1->errorcount = 1;
  VAR_1->timestart = VAR_4;
 } else if (++VAR_1->errorcount > VAR_2) {
  VAR_1->errorcount = 0;
  VAR_1->timestart = VAR_4;
  return 1;
 }
 return 0;
}
