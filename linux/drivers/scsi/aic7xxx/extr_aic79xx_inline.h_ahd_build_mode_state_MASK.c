
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int dummy; } ;
typedef int ahd_mode_state ;
typedef int ahd_mode ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline ahd_mode_state
FUNC_0(struct ahd_softc *VAR_2, ahd_mode VAR_3, ahd_mode VAR_4)
{
 return ((VAR_3 << VAR_1) | (VAR_4 << VAR_0));
}
