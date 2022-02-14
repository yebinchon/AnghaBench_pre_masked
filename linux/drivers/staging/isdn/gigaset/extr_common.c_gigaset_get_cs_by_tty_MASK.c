
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* driver; scalar_t__ index; } ;
struct cardstate {int dummy; } ;
struct TYPE_2__ {scalar_t__ minor_start; } ;


 struct cardstate* FUNC_0 (scalar_t__) ;

struct cardstate *FUNC_1(struct tty_struct *VAR_0)
{
 return FUNC_0(VAR_0->index + VAR_0->driver->minor_start);
}
