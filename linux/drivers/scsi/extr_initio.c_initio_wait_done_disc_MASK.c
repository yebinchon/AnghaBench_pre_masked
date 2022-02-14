
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initio_host {int jsstatus0; int jsint; int * active; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct initio_host*,int *) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*,int *) ;
 int FUNC_5 (struct initio_host*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct initio_host * VAR_11)
{
 while (!((VAR_11->jsstatus0 = FUNC_1(VAR_11->addr + VAR_10))
   & VAR_4))
   FUNC_0();

 VAR_11->jsint = FUNC_1(VAR_11->addr + VAR_9);

 if (VAR_11->jsint & VAR_5)
  return FUNC_5(VAR_11);
 if (VAR_11->jsint & VAR_3) {
  FUNC_6(VAR_0, VAR_11->addr + VAR_7);
  FUNC_6(VAR_2, VAR_11->addr + VAR_6);
  FUNC_6(VAR_1, VAR_11->addr + VAR_8);
  FUNC_4(VAR_11, VAR_11->active);

  FUNC_2(VAR_11, VAR_11->active);
  VAR_11->active = ((void*)0);
  return -1;
 }
 return FUNC_3(VAR_11);
}
