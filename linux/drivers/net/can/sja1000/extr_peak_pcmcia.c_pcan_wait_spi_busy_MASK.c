
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcan_pccard {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pcan_pccard*,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct pcan_pccard *VAR_5)
{
 unsigned long VAR_6 = VAR_4 +
    FUNC_0(VAR_3) + 1;


 while (FUNC_1(VAR_5, VAR_1) & VAR_2) {
  if (FUNC_3(VAR_4, VAR_6))
   return -VAR_0;
  FUNC_2();
 }

 return 0;
}
