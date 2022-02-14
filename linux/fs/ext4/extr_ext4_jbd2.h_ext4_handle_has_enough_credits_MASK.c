
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_1(handle_t *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0) && VAR_0->h_buffer_credits < VAR_1)
  return 0;
 return 1;
}
