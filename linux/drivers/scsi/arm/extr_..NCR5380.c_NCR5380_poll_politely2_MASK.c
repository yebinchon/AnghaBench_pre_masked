
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct NCR5380_hostdata {unsigned long poll_loops; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 unsigned long VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(struct NCR5380_hostdata *VAR_2,
                                  unsigned int VAR_3, u8 VAR_4, u8 VAR_5,
                                  unsigned int VAR_6, u8 VAR_7, u8 VAR_8,
                                  unsigned long VAR_9)
{
 unsigned long VAR_10 = VAR_2->poll_loops;
 unsigned long VAR_11 = VAR_1 + VAR_9;

 do {
  if ((FUNC_0(VAR_3) & VAR_4) == VAR_5)
   return 0;
  if ((FUNC_0(VAR_6) & VAR_7) == VAR_8)
   return 0;
  FUNC_1();
 } while (VAR_10--);

 if (FUNC_3() || FUNC_2())
  return -VAR_0;


 while (FUNC_5(VAR_11)) {
  FUNC_4(1);
  if ((FUNC_0(VAR_3) & VAR_4) == VAR_5)
   return 0;
  if ((FUNC_0(VAR_6) & VAR_7) == VAR_8)
   return 0;
 }

 return -VAR_0;
}
