
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initio_host {int phase; scalar_t__ addr; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct initio_host*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct initio_host * VAR_2)
{
 int VAR_3, VAR_4;





 VAR_3 = FUNC_0(VAR_2->addr + VAR_1) & 0x1F;
 if (VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_0(VAR_2->addr + VAR_0);
 }
 switch (VAR_2->phase) {
 case 129:
 case 128:
  return FUNC_1(VAR_2);
 default:
  return 6;
 }
}
