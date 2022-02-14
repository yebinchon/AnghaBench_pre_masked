
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct initio_host {int jsstatus0; int jsint; int phase; int flags; scalar_t__ addr; int * active_tc; TYPE_1__* active; void* jsstatus1; } ;
struct TYPE_3__ {scalar_t__ hastat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 () ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct initio_host*,TYPE_1__*) ;
 int FUNC_3 (struct initio_host*,TYPE_1__*) ;
 int FUNC_4 (struct initio_host*) ;
 int FUNC_5 (struct initio_host*) ;
 int FUNC_6 (struct initio_host*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct initio_host * VAR_19)
{

 while (!((VAR_19->jsstatus0 = FUNC_1(VAR_19->addr + VAR_17))
   & VAR_8))
   FUNC_0();

 VAR_19->jsint = FUNC_1(VAR_19->addr + VAR_16);
 VAR_19->phase = VAR_19->jsstatus0 & VAR_9;
 VAR_19->jsstatus1 = FUNC_1(VAR_19->addr + VAR_18);

 if (VAR_19->jsint & VAR_10)
  return FUNC_5(VAR_19);
 if (VAR_19->jsint & VAR_12)
  return FUNC_4(VAR_19);
 if (VAR_19->jsint & VAR_11)
  return FUNC_6(VAR_19);

 if (VAR_19->jsint & VAR_6) {
  if (VAR_19->flags & VAR_1) {
   FUNC_7(VAR_2, VAR_19->addr + VAR_14);
   FUNC_3(VAR_19, VAR_19->active);
   VAR_19->active->hastat = 0;
   FUNC_2(VAR_19, VAR_19->active);
   VAR_19->active = ((void*)0);
   VAR_19->active_tc = ((void*)0);
   VAR_19->flags &= ~VAR_1;
   FUNC_7(VAR_4, VAR_19->addr + VAR_13);
   FUNC_7(VAR_3, VAR_19->addr + VAR_15);
   return -1;
  }
  if (VAR_19->flags & VAR_0) {
   FUNC_7(VAR_2, VAR_19->addr + VAR_14);
   VAR_19->active = ((void*)0);
   VAR_19->active_tc = ((void*)0);
   VAR_19->flags &= ~VAR_0;
   FUNC_7(VAR_4, VAR_19->addr + VAR_13);
   FUNC_7(VAR_3, VAR_19->addr + VAR_15);
   return -1;
  }
  return FUNC_4(VAR_19);
 }

 if (VAR_19->jsint & (VAR_7 | VAR_5))
  return VAR_19->phase;
 return VAR_19->phase;
}
