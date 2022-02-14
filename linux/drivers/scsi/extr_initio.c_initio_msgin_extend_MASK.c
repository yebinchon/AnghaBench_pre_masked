
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct initio_host {int phase; int* msg; scalar_t__ addr; TYPE_1__* active_tc; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct initio_host*) ;
 scalar_t__ FUNC_2 (struct initio_host*) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct initio_host*) ;
 int FUNC_8 (struct initio_host*) ;

__attribute__((used)) static int FUNC_9(struct initio_host * VAR_16)
{
 u8 VAR_17, VAR_18;

 if (FUNC_1(VAR_16) != VAR_1)
  return VAR_16->phase;


 FUNC_6(1, VAR_16->addr + VAR_12);
 FUNC_5(VAR_9, VAR_16->addr + VAR_11);
 if (FUNC_7(VAR_16) == -1)
  return -1;

 VAR_17 = FUNC_0(VAR_16->addr + VAR_14);
 VAR_16->msg[0] = VAR_17;
 for (VAR_18 = 1; VAR_17 != 0; VAR_17--) {

  if ((FUNC_1(VAR_16)) != VAR_1)
   return VAR_16->phase;
  FUNC_6(1, VAR_16->addr + VAR_12);
  FUNC_5(VAR_9, VAR_16->addr + VAR_11);
  if (FUNC_7(VAR_16) == -1)
   return -1;
  VAR_16->msg[VAR_18++] = FUNC_0(VAR_16->addr + VAR_14);
 }
 if (VAR_16->msg[1] == 1) {
  u8 VAR_19;
  if (VAR_16->msg[0] != 3)
   return FUNC_3(VAR_16);
  if (VAR_16->active_tc->flags & VAR_3) {
   VAR_16->msg[3] = 0;
  } else {
   if (FUNC_2(VAR_16) == 0 &&
       (VAR_16->active_tc->flags & VAR_5)) {
    FUNC_4(VAR_16);
    return FUNC_1(VAR_16);
   }
  }

  VAR_19 = FUNC_0(VAR_16->addr + VAR_15);
  FUNC_5((VAR_19 & (VAR_7 | 7)) | VAR_8,
   VAR_16->addr + VAR_15);
  if (FUNC_1(VAR_16) != VAR_2)
   return VAR_16->phase;

  FUNC_5(VAR_6, VAR_16->addr + VAR_13);

  FUNC_4(VAR_16);

  FUNC_5(VAR_0, VAR_16->addr + VAR_14);
  FUNC_5(3, VAR_16->addr + VAR_14);
  FUNC_5(1, VAR_16->addr + VAR_14);
  FUNC_5(VAR_16->msg[2], VAR_16->addr + VAR_14);
  FUNC_5(VAR_16->msg[3], VAR_16->addr + VAR_14);
  FUNC_5(VAR_10, VAR_16->addr + VAR_11);
  return FUNC_7(VAR_16);
 }
 if (VAR_16->msg[0] != 2 || VAR_16->msg[1] != 3)
  return FUNC_3(VAR_16);

 if (VAR_16->active_tc->flags & VAR_4) {
  VAR_16->msg[2] = 0;
 } else {
  if (VAR_16->msg[2] > 2)
   return FUNC_3(VAR_16);
  if (VAR_16->msg[2] == 2) {
   VAR_16->msg[2] = 1;
  } else {
   if ((VAR_16->active_tc->flags & VAR_4) == 0) {
    FUNC_8(VAR_16);
    if ((VAR_16->active_tc->flags & (VAR_5 | VAR_3)) == 0)
     FUNC_5(((FUNC_0(VAR_16->addr + VAR_15) & (VAR_7 | 7)) | VAR_8), VAR_16->addr + VAR_15);
    return FUNC_1(VAR_16);
   }
  }
 }
 FUNC_5(((FUNC_0(VAR_16->addr + VAR_15) & (VAR_7 | 7)) | VAR_8), VAR_16->addr + VAR_15);

 if (FUNC_1(VAR_16) != VAR_2)
  return VAR_16->phase;

 FUNC_5(VAR_0, VAR_16->addr + VAR_14);
 FUNC_5(2, VAR_16->addr + VAR_14);
 FUNC_5(3, VAR_16->addr + VAR_14);
 FUNC_5(VAR_16->msg[2], VAR_16->addr + VAR_14);
 FUNC_5(VAR_10, VAR_16->addr + VAR_11);
 return FUNC_7(VAR_16);
}
