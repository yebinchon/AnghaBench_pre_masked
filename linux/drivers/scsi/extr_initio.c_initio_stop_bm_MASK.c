
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initio_host {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct initio_host * VAR_9)
{

 if (FUNC_1(VAR_9->addr + VAR_6) & VAR_8) {
  FUNC_2(VAR_0 | VAR_1, VAR_9->addr + VAR_5);

  while ((FUNC_1(VAR_9->addr + VAR_3) & VAR_7) == 0)
   FUNC_0();
 }
 FUNC_2(VAR_2, VAR_9->addr + VAR_4);
}
