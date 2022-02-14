
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_sm {int (* sm_state ) (void*,int ) ;} ;


 int FUNC_0 (void*,int ) ;

__attribute__((used)) static inline void
FUNC_1(void *VAR_0, uint32_t VAR_1)
{
 ((struct csio_sm *)VAR_0)->sm_state(VAR_0, VAR_1);
}
