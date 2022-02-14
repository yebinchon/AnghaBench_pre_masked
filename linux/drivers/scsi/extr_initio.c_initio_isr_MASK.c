
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initio_host {int semaph; scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct initio_host*) ;

__attribute__((used)) static int FUNC_3(struct initio_host * VAR_3)
{
 if (FUNC_0(VAR_3->addr + VAR_1) & VAR_0) {
  if (VAR_3->semaph == 1) {
   FUNC_1(0x1F, VAR_3->addr + VAR_2);

   VAR_3->semaph = 0;

   FUNC_2(VAR_3);

   VAR_3->semaph = 1;
   FUNC_1(0x0F, VAR_3->addr + VAR_2);
   return 1;
  }
 }
 return 0;
}
