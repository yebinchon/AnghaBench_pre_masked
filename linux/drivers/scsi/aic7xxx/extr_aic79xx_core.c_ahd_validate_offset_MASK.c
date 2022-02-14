
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct ahd_softc {int bugs; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ offset; } ;
struct ahd_initiator_tinfo {TYPE_2__ goal; TYPE_1__ user; } ;
typedef scalar_t__ role_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct ahd_softc *VAR_6,
      struct ahd_initiator_tinfo *VAR_7,
      u_int VAR_8, u_int *VAR_9, int VAR_10,
      role_t VAR_11)
{
 u_int VAR_12;


 if (VAR_8 == 0)
  VAR_12 = 0;
 else if (VAR_8 <= VAR_1) {
  if ((VAR_6->bugs & VAR_0) != 0)
   VAR_12 = VAR_4;
  else
   VAR_12 = VAR_3;
 } else
  VAR_12 = VAR_2;
 *VAR_9 = FUNC_0(*VAR_9, VAR_12);
 if (VAR_7 != ((void*)0)) {
  if (VAR_11 == VAR_5)
   *VAR_9 = FUNC_0(*VAR_9, (u_int)VAR_7->user.offset);
  else
   *VAR_9 = FUNC_0(*VAR_9, (u_int)VAR_7->goal.offset);
 }
}
