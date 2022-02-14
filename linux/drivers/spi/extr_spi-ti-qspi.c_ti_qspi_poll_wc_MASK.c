
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_qspi {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct ti_qspi*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct ti_qspi *VAR_5)
{
 u32 VAR_6;
 unsigned long VAR_7 = VAR_4 + VAR_1;

 do {
  VAR_6 = FUNC_1(VAR_5, VAR_2);
  if (VAR_6 & VAR_3)
   return 0;
  FUNC_0();
 } while (FUNC_2(VAR_7, VAR_4));

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 if (VAR_6 & VAR_3)
  return 0;
 return -VAR_0;
}
