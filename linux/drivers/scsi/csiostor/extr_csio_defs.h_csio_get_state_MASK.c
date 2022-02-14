
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_sm {int sm_state; } ;
typedef int csio_sm_state_t ;



__attribute__((used)) static inline csio_sm_state_t
FUNC_0(void *VAR_0)
{
 return ((struct csio_sm *)VAR_0)->sm_state;
}
